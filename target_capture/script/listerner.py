#!/usr/bin/env python  
from operator import imod
import rospy
from darknet_ros_msgs.msg import BoundingBoxes
from geometry_msgs import  Twist
from mavros_msgs.msg import  PositionTarget

# float64 probability
# int64 xmin
# int64 ymin
# int64 xmax
# int64 ymax
# int16 id
# string Class

# Header header
# Header image_header
# BoundingBox[] bounding_boxes

def callback(data):
    #print (data)
   # print(data.bounding_boxes[0].xmin)
    xmin = data.bounding_boxes[0].xmin
    ymin = data.bounding_boxes[0].ymin
    xmax = data.bounding_boxes[0].xmax
    ymax = data.bounding_boxes[0].ymax
    if data.bounding_box[0].Class == "end":
            print("down")
    elif  data.bounding_box[0].Class == "bridge " or   data.bounding_box[0].Class == "tent "  or  data.bounding_box[0].Class == "tank " or  data.bounding_box[0].Class == "barracks "or  data.bounding_box[0].Class == "car " :
        # wait for adjust 
        # Width/Height      : 1280/720

        centerx =  640
        centery = 360
        xmed = (xmin+xmax)/2
        ymed = (ymin + ymax ) /2
        if xmed > centerx:
            movx =  0.1
            print("turn left")
        elif xmed < centerx:
            movx = -0.1
            print("turn righht")
        # may a Constant  x- cx > C    and x-cx  < C
        #
        if ymed < centery:
            movy = 0.1
            print("go straight")
        elif ymed > centery:
            movy = -0.1
            print("go back")
        
        


        print ("hold on")


def listener():
    rospy.init_node('topic_subscriber')
    sub = rospy.Subscriber('/darknet_ros/bounding_boxes', BoundingBoxes, callback)
    print (sub)

    print (type(sub))
    rospy.spin()

if __name__ == '__main__':
    listener()
