#!/usr/bin/env python
# coding:utf-8
import numpy as np
from time import sleep

from common import *
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from dynamic_reconfigure.server import Server
from transbot_laser.cfg import laserWarningPIDConfig

class laserWarning:
    def __init__(self):
        rospy.on_shutdown(self.cancel)
        self.laserAngle = 70
        self.ResponseDist = 0.5
        self.Moving = False
        self.switch = False
        self.init_laser = True
        self.Buzzer_state = False
        self.ros_ctrl = ROSCtrl()
        self.minDistanceAngle, self.minDist=0,0
        self.ang_pid = SinglePID(3.0, 0.0, 3.0)
        Server(laserWarningPIDConfig, self.dynamic_reconfigure_callback)
        self.sub_laser = rospy.Subscriber('/scan', LaserScan, self.registerScan)

    def cancel(self):
        self.ros_ctrl.cancel()
        self.sub_laser.unregister()
        rospy.loginfo('stopMoving!!!')

    def registerScan(self, scan_data):
        if self.init_laser == False:return
        # 记录激光扫描并发布最近物体的位置（或指向某点）
        ranges = np.array(scan_data.ranges)
        minDistList = []
        minDistIDList = []
        for i in np.argsort(ranges):
            if len(np.array(scan_data.ranges)) == 720:
                # 通过清除不需要的扇区的数据来保留有效的数据
                if i < self.laserAngle * 2:
                    minDistList.append(ranges[i])
                    minDistIDList.append(i / 2)
                elif (720 - self.laserAngle * 2) <= i:
                    minDistList.append(ranges[i])
                    minDistIDList.append(i / 2 - 360)
            if len(np.array(scan_data.ranges)) == 360:
                # 通过清除不需要的扇区的数据来保留有效的数据
                if i < self.laserAngle:
                    minDistList.append(ranges[i])
                    minDistIDList.append(i)
                elif (360 - self.laserAngle) <= i :
                    minDistList.append(ranges[i])
                    minDistIDList.append(i - 360)
        if len(minDistList) == 0: return
        # 找到最小距离
        self.minDist = min(minDistList)
        # 找到最小距离对应的ID
        self.minDistanceAngle = minDistIDList[minDistList.index(self.minDist)]
        print ("--: ",self.minDistanceAngle, self.minDist)
        if not (scan_data.range_min < self.minDist < scan_data.range_max):
            self.minDistanceAngle, self.minDist = 0, 0
            rospy.logwarn('laser no object found')

    def process(self):
        while not rospy.is_shutdown():
            self.init_laser = True
            if self.ros_ctrl.Joy_active or self.switch == True:
                if self.Moving == True:
                    self.ros_ctrl.pub_vel.publish(Twist())
                    self.ros_ctrl.Buzzer_srv(0)
                    self.Moving = not self.Moving
                # sleep(0.1)
                return
            self.Moving = True
            if -3 < self.minDistanceAngle < 3: self.minDistanceAngle = 0
            if self.minDist <= self.ResponseDist:
                if self.Buzzer_state == False:
                    self.ros_ctrl.Buzzer_srv(1)
                    self.Buzzer_state = True
            if self.Buzzer_state == True:
                self.ros_ctrl.Buzzer_srv(0)
                self.Buzzer_state = False
            velocity = Twist()
            # 使用PID算法使得小车稳步移动到对应位置
            print ("++: ",self.minDistanceAngle, self.minDist)
            velocity.angular.z = self.ang_pid.pid_compute(self.minDistanceAngle / 90.0, 0)
            self.ros_ctrl.pub_vel.publish(velocity)
            self.init_laser = False
        self.ros_ctrl.pub_vel.publish(Twist())

    def dynamic_reconfigure_callback(self, config, level):
        self.switch = config['switch']
        self.laserAngle = config['laserAngle']
        self.ResponseDist = config['ResponseDist']
        self.ang_pid.Set_pid(config['ang_Kp'], config['ang_Ki'], config['ang_Kd'])
        return config


if __name__ == '__main__':
    rospy.init_node('laser_Warning', anonymous=False)
    tracker = laserWarning()
    tracker.process()
    rospy.spin()
