#include <iostream>
#include "ros/ros.h"
#include <moveit/move_group_interface/move_group_interface.h>

using namespace std;

int main(int argc, char **argv) {
    //ROS节点初始化
    ros::init(argc, argv, "random_move_cpp");
    //创建节点句柄
    ros::NodeHandle n;
	// 设置线程
	ros::AsyncSpinner spinner(1);
	// 开启线程
	spinner.start();
    //初始化机械臂
    moveit::planning_interface::MoveGroupInterface transbot("arm");
	// 设置最大速度
    transbot.setMaxVelocityScalingFactor(1.0);
    // 设置最大加速度
    transbot.setMaxAccelerationScalingFactor(1.0);

    while (not ros::isShuttingDown()){
    	//设置随机目标点
    	transbot.setRandomTarget();
    	//开始移动
    	transbot.move();
    	sleep(0.5);
    }
    //设置目标点
//    transbot.setNamedTarget("pose1");
//    //开始移动
//    transbot.move();
//    sleep(0.1);
    return 0;
}
