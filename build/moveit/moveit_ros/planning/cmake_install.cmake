# Install script for directory: /home/rajendra/ws_moveit/src/moveit/moveit_ros/planning

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/devel/include/moveit_ros_planning/PlanningSceneMonitorDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/devel/include/moveit_ros_planning/TrajectoryExecutionDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/devel/include/moveit_ros_planning/PlanExecutionDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/devel/include/moveit_ros_planning/SenseForPlanDynamicReconfigureConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/devel/lib/python2.7/dist-packages/moveit_ros_planning/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/rajendra/ws_moveit/devel/lib/python2.7/dist-packages/moveit_ros_planning/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/moveit_ros_planning" TYPE DIRECTORY FILES "/home/rajendra/ws_moveit/devel/lib/python2.7/dist-packages/moveit_ros_planning/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/catkin_generated/installspace/moveit_ros_planning.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning/cmake" TYPE FILE FILES
    "/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/catkin_generated/installspace/moveit_ros_planningConfig.cmake"
    "/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/catkin_generated/installspace/moveit_ros_planningConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/src/moveit/moveit_ros/planning/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning" TYPE FILE FILES "/home/rajendra/ws_moveit/src/moveit/moveit_ros/planning/planning_request_adapters_plugin_description.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/rdf_loader/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/collision_plugin_loader/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/kinematics_plugin_loader/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/robot_model_loader/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/constraint_sampler_manager_loader/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/planning_pipeline/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/planning_request_adapter_plugins/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/planning_scene_monitor/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/planning_components_tools/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/trajectory_execution_manager/cmake_install.cmake")
  include("/home/rajendra/ws_moveit/build/moveit/moveit_ros/planning/plan_execution/cmake_install.cmake")

endif()

