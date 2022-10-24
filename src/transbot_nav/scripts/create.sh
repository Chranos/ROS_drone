#!/bin/bash

echo "start copy transbot_cartographer.launch to /opt/ros/melodic/share/cartographer_ros/launch"
sudo cp laser.launch /opt/ros/melodic/share/cartographer_ros/launch
echo ""
echo "start copy transbot.lua to /opt/ros/melodic/share/cartographer_ros/configuration_files"
sudo cp laser.lua /opt/ros/melodic/share/cartographer_ros/configuration_files
echo ""
echo "Restarting udev"
sudo service udev reload
sudo service udev restart
echo "finish !!!"

