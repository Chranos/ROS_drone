#!/usr/bin/env python
# coding: utf-8
from time import sleep
import rospy
from moveit_commander.move_group import MoveGroupCommander

if __name__ == '__main__':
    # 初始化节点
    rospy.init_node("transbot_set_move")
    # 初始化机械臂
    transbot = MoveGroupCommander("arm")
    # 当运动规划失败后，允许重新规划
    transbot.allow_replanning(True)
    transbot.set_planning_time(5)
    # 尝试规划的次数
    transbot.set_num_planning_attempts(10)
    # 设置允许目标位置误差
    transbot.set_goal_position_tolerance(0.01)
    # 设置允许目标姿态误差
    transbot.set_goal_orientation_tolerance(0.01)
    # 设置允许目标误差
    transbot.set_goal_tolerance(0.01)
    # 设置最大速度
    transbot.set_max_velocity_scaling_factor(1.0)
    # 设置最大加速度
    transbot.set_max_acceleration_scaling_factor(1.0)
    while not rospy.is_shutdown():
        # 设置随机目标点
        transbot.set_random_target()
        # 开始运动
        transbot.go()
        sleep(0.5)
        # 设置"pose1"为目标点
        #transbot.set_named_target("pose1")
        #transbot.go()
        #sleep(0.5)
        # 设置"pose2"为目标点
        #transbot.set_named_target("pose2")
        #transbot.go()
        #sleep(0.5)
