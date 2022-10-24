#!/usr/bin/env python
# coding:utf-8
import numpy as np
from common import *
from time import sleep
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from dynamic_reconfigure.server import Server
from transbot_laser.cfg import laserAvoidPIDConfig

class laserAvoid:
    def __init__(self):
        rospy.on_shutdown(self.cancel)
        self.r = rospy.Rate(20)
        self.linear = 0.3
        self.angular = 1
        self.ResponseDist = 0.55
        self.LaserAngle = 30  # 10~180
        self.Moving = False
        self.switch = False
        self.running = False
        self.Right_warning = 0
        self.Left_warning = 0
        self.front_warning = 0
        self.ros_ctrl = ROSCtrl()
        self.sub_laser = rospy.Subscriber('/scan', LaserScan, self.registerScan)
        Server(laserAvoidPIDConfig, self.dynamic_reconfigure_callback)


    def cancel(self):
        self.ros_ctrl.cancel()
        self.sub_laser.unregister()
        rospy.loginfo("Shutting down this node.")

    def dynamic_reconfigure_callback(self, config, level):
        self.switch = config['switch']
        self.linear = config['linear']
        self.angular = config['angular']
        self.LaserAngle = config['LaserAngle']
        self.ResponseDist = config['ResponseDist']
        return config

    def registerScan(self, scan_data):
        if self.running == True: return
        # 记录激光扫描并发布最近物体的位置（或指向某点）
        ranges = np.array(scan_data.ranges)
        # 按距离排序以检查从较近的点到较远的点是否是真实的东西
        sortedIndices = np.argsort(ranges)
        self.Right_warning = 0
        self.Left_warning = 0
        self.front_warning = 0
        #print "scan_data:", len(sortedIndices)
        # if we already have a last scan to compare to:
        for i in sortedIndices:
            if len(np.array(scan_data.ranges)) == 720:
                # 通过清除不需要的扇区的数据来保留有效的数据
                if 20 < i < self.LaserAngle * 2:
                    if ranges[i] < self.ResponseDist: self.Left_warning += 1
                elif (720 - self.LaserAngle * 2) < i < 700:
                    if ranges[i] < self.ResponseDist: self.Right_warning += 1
                elif (700 <= i ) or ( i <= 20):
                    if ranges[i] <= self.ResponseDist: self.front_warning += 1
            elif len(np.array(scan_data.ranges)) == 360:
                # 通过清除不需要的扇区的数据来保留有效的数据
                if 10 < i < self.LaserAngle:
                    if ranges[i] < self.ResponseDist: self.Left_warning += 1
                elif (350 - self.LaserAngle) < i < 350:
                    if ranges[i] < self.ResponseDist: self.Right_warning += 1
                elif (350 <= i <= 360) or (0<= i <=10):
                    # print ("i: {},dist: {}", format(i, ranges[i]))
                    if ranges[i] < self.ResponseDist: self.front_warning += 1
        # print (self.Left_warning,self.front_warning,self.Right_warning)


    def robot_move(self):
        while not rospy.is_shutdown():
            if self.ros_ctrl.Joy_active or self.switch == True:
                if self.Moving == True:
                    self.ros_ctrl.pub_vel.publish(Twist())
                    self.Moving = not self.Moving
                continue
            self.Moving = True
            twist = Twist()
            # 左正右负
            if self.front_warning > 10 and self.Left_warning > 10 and self.Right_warning > 10:
                # print ('1、左右中有障碍物，右转')
                twist.linear.x = -0.15
                twist.angular.z = -self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.2)
            elif self.front_warning > 10 and self.Left_warning <= 10 and self.Right_warning > 10:
                # print ('2、右中有障碍物，左转')
                twist.linear.x = 0
                twist.angular.z = self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.2)
                if self.Left_warning > 10 and self.Right_warning <= 10:
                    # print ('3、左有障碍物，右转')
                    twist.linear.x = 0
                    twist.angular.z = -self.angular
                    self.ros_ctrl.pub_vel.publish(twist)
                    sleep(0.4)
            elif self.front_warning > 10 and self.Left_warning > 10 and self.Right_warning <= 10:
                # print ('4、左中有障碍物，右转')
                twist.linear.x = 0
                twist.angular.z = -self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.2)
                if self.Left_warning <= 10 and self.Right_warning > 10:
                    # print ('5、左有障碍物，左转')
                    twist.linear.x = 0
                    twist.angular.z = self.angular
                    self.ros_ctrl.pub_vel.publish(twist)
                    sleep(0.4)
            elif self.front_warning > 10 and self.Left_warning < 10 and self.Right_warning < 10:
                # print ('6、中有障碍物，左转')
                twist.linear.x = 0
                twist.angular.z = self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.2)
            elif self.front_warning < 10 and self.Left_warning > 10 and self.Right_warning > 10:
                # print ('7、左右有障碍物，右转')
                twist.linear.x = 0
                twist.angular.z = -self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.4)
            elif self.front_warning < 10 and self.Left_warning > 10 and self.Right_warning <= 10:
                # print ('8、左有障碍物，右转')
                twist.linear.x = 0
                twist.angular.z = -self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.2)
            elif self.front_warning < 10 and self.Left_warning <= 10 and self.Right_warning > 10:
                # print ('9、右有障碍物，左转')
                twist.linear.x = 0
                twist.angular.z = self.angular
                self.ros_ctrl.pub_vel.publish(twist)
                sleep(0.2)
            elif self.front_warning <= 10 and self.Left_warning <= 10 and self.Right_warning <= 10:
                # print ('10、没有障碍物，前进')
                twist.linear.x = self.linear
                twist.angular.z = 0
                self.ros_ctrl.pub_vel.publish(twist)
            self.r.sleep()
            # else : self.ros_ctrl.pub_vel.publish(Twist())


if __name__ == '__main__':
    rospy.init_node('laser_Avoidance', anonymous=False)
    tracker = laserAvoid()
    tracker.robot_move()
    rospy.spin()
    tracker.cancel()
