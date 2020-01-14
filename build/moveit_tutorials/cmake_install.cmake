# Install script for directory: /home/rajendra/ws_moveit/src/moveit_tutorials

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/rajendra/ws_moveit/build/moveit_tutorials/catkin_generated/installspace/moveit_tutorials.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_tutorials/cmake" TYPE FILE FILES
    "/home/rajendra/ws_moveit/build/moveit_tutorials/catkin_generated/installspace/moveit_tutorialsConfig.cmake"
    "/home/rajendra/ws_moveit/build/moveit_tutorials/catkin_generated/installspace/moveit_tutorialsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_tutorials" TYPE FILE FILES "/home/rajendra/ws_moveit/src/moveit_tutorials/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/kinematics/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/robot_model_and_robot_state/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/planning/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/planning_scene/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/planning_scene_ros_api/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/motion_planning_api/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/motion_planning_pipeline/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/visualizing_collisions/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/move_group_interface/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/move_group_python_interface/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/state_display/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/interactivity/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/pick_place/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/subframes/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/perception_pipeline/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/tests/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/controller_configuration/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/trajopt_planner/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/creating_moveit_plugins/lerp_motion_planner/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit_tutorials/doc/moveit_cpp/cmake_install.cmake")

endif()

