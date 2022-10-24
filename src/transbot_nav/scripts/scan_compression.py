#!/usr/bin/env python
# coding:utf-8
import rospy
from cv_bridge import CvBridge
from sensor_msgs.msg import LaserScan
from laser_geometry import LaserProjection
import numpy as np
from time import sleep
'''
header: 
  seq: 36
  stamp: 
    secs: 1638166224
    nsecs: 843131618
  frame_id: "laser"
angle_min: -3.14159274101
angle_max: 3.14159274101
angle_increment: 0.00175312091596
time_increment: 2.79553460132e-05
scan_time: 0.100191958249
range_min: 0.15000000596
range_max: 30.0
ranges: 



ranges 3585
data ranges 3585

data ranges 1147
ranges 1147

ranges 1153
data ranges 1153

ranges 1440
data ranges 1440
'''


class scan_compression:
    def __init__(self):
        self.bridge = CvBridge()
        self.laserProj = LaserProjection()
        self.laserSub = rospy.Subscriber("/scan", LaserScan, self.laserCallback)
        self.pub = rospy.Publisher("/scan_compress", LaserScan, queue_size=1000)

    def laserCallback(self, data):
        laser_scan = LaserScan()
        laser_scan.header = data.header
        laser_scan.header.frame_id = 'laser_compress'
        laser_scan.angle_min = data.angle_min
        laser_scan.angle_max = data.angle_max
        laser_scan.angle_increment = data.angle_increment
        laser_scan.time_increment = data.time_increment
        laser_scan.scan_time = data.scan_time
        laser_scan.range_min = data.range_min
        laser_scan.range_max = data.range_max
        for i in range(len(np.array(data.ranges))):
            if i % 3 == 0:
                laser_scan.ranges.append(data.ranges[i])
                laser_scan.intensities.append(data.intensities[i])
        self.pub.publish(laser_scan)

if __name__ == '__main__':
    rospy.init_node('scan_compression', anonymous=False)
    pt2img = scan_compression()
    rospy.spin()
