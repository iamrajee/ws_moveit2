# Install script for directory: /home/rajendra/ws_moveit/src/moveit/moveit_ros/perception

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rajendra/ws_moveit/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/catkin_generated/installspace/moveit_ros_perception.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_perception/cmake" TYPE FILE FILES
    "/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/catkin_generated/installspace/moveit_ros_perceptionConfig.cmake"
    "/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/catkin_generated/installspace/moveit_ros_perceptionConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_perception" TYPE FILE FILES "/home/rajendra/ws_moveit/src/moveit/moveit_ros/perception/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_perception" TYPE FILE FILES
    "/home/rajendra/ws_moveit/src/moveit/moveit_ros/perception/pointcloud_octomap_updater_plugin_description.xml"
    "/home/rajendra/ws_moveit/src/moveit/moveit_ros/perception/depth_image_octomap_updater_plugin_description.xml"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/lazy_free_space_updater/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/point_containment_filter/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/pointcloud_octomap_updater/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/mesh_filter/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/depth_image_octomap_updater/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/perception/semantic_world/cmake_install.cmake")

endif()

