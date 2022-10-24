# Install script for directory: /home/chranos/ROS/ROS_drone/src/transbot_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chranos/ROS/ROS_drone/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/transbot_msgs/msg" TYPE FILE FILES
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Adjust.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/SensorState.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Position.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/General.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/PWMServo.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Joint.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Arm.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/LaserAvoid.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Image_Msg.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/JoyState.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/PatrolWarning.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/PointArray.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Battery.msg"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/msg/Edition.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/transbot_msgs/srv" TYPE FILE FILES
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/srv/Buzzer.srv"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/srv/RGBLight.srv"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/srv/Headlight.srv"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/srv/RobotArm.srv"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/srv/CamDevice.srv"
    "/home/chranos/ROS/ROS_drone/src/transbot_msgs/srv/Patrol.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/transbot_msgs/cmake" TYPE FILE FILES "/home/chranos/ROS/ROS_drone/build/transbot_msgs/catkin_generated/installspace/transbot_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/chranos/ROS/ROS_drone/devel/include/transbot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/chranos/ROS/ROS_drone/devel/share/roseus/ros/transbot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/chranos/ROS/ROS_drone/devel/share/common-lisp/ros/transbot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/chranos/ROS/ROS_drone/devel/share/gennodejs/ros/transbot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/chranos/ROS/ROS_drone/devel/lib/python2.7/dist-packages/transbot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/chranos/ROS/ROS_drone/devel/lib/python2.7/dist-packages/transbot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/chranos/ROS/ROS_drone/build/transbot_msgs/catkin_generated/installspace/transbot_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/transbot_msgs/cmake" TYPE FILE FILES "/home/chranos/ROS/ROS_drone/build/transbot_msgs/catkin_generated/installspace/transbot_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/transbot_msgs/cmake" TYPE FILE FILES
    "/home/chranos/ROS/ROS_drone/build/transbot_msgs/catkin_generated/installspace/transbot_msgsConfig.cmake"
    "/home/chranos/ROS/ROS_drone/build/transbot_msgs/catkin_generated/installspace/transbot_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/transbot_msgs" TYPE FILE FILES "/home/chranos/ROS/ROS_drone/src/transbot_msgs/package.xml")
endif()

