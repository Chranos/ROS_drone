# Install script for directory: /home/chranos/ROS/ROS_drone/src

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chranos/ROS/ROS_drone/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chranos/ROS/ROS_drone/install" TYPE PROGRAM FILES "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chranos/ROS/ROS_drone/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chranos/ROS/ROS_drone/install" TYPE PROGRAM FILES "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chranos/ROS/ROS_drone/install/setup.bash;/home/chranos/ROS/ROS_drone/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chranos/ROS/ROS_drone/install" TYPE FILE FILES
    "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/setup.bash"
    "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chranos/ROS/ROS_drone/install/setup.sh;/home/chranos/ROS/ROS_drone/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chranos/ROS/ROS_drone/install" TYPE FILE FILES
    "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/setup.sh"
    "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chranos/ROS/ROS_drone/install/setup.zsh;/home/chranos/ROS/ROS_drone/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chranos/ROS/ROS_drone/install" TYPE FILE FILES
    "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/setup.zsh"
    "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/chranos/ROS/ROS_drone/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/chranos/ROS/ROS_drone/install" TYPE FILE FILES "/home/chranos/ROS/ROS_drone/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/chranos/ROS/ROS_drone/build/gtest/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_tools/rqt_annotation_data/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_msgs/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_server/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/robot_localization/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/transbot_msgs/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/imu_calib/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/imu_filter_madgwick/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/rrt_exploration/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/transbot_bringup/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/transbot_laser/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/transbot_nav/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/usb_cam/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/warehouse_ros/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/warehouse_ros_mongo/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_libs/world_canvas_client_cpp/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_libs/world_canvas_client_py/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_libs/world_canvas_utils/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/transbot_description/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/ydlidar_ros_driver-master/cmake_install.cmake")
  include("/home/chranos/ROS/ROS_drone/build/world_canvas/src/world_canvas_libs/world_canvas_client_examples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/chranos/ROS/ROS_drone/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
