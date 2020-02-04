# -*- coding: utf-8 -*-
from __future__ import print_function
import argparse
import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/melodic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/melodic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in "/home/rajendra/ws_moveit/devel_isolated/moveit_jog_arm;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_planning_interface;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_benchmarks;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_warehouse;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_robot_interaction;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_manipulation;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_move_group;/home/rajendra/ws_moveit/devel_isolated/moveit_planners_ompl;/home/rajendra/ws_moveit/devel_isolated/moveit_kinematics;/home/rajendra/ws_moveit/devel_isolated/moveit_fake_controller_manager;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_planning;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_perception;/home/rajendra/ws_moveit/devel_isolated/moveit_ros_occupancy_map_monitor;/home/rajendra/ws_moveit/devel_isolated/moveit_ros;/home/rajendra/ws_moveit/devel_isolated/moveit_pr2;/home/rajendra/ws_moveit/devel_isolated/moveit_plugins;/home/rajendra/ws_moveit/devel_isolated/moveit_planners;/home/rajendra/ws_moveit/devel_isolated/moveit_chomp_optimizer_adapter;/home/rajendra/ws_moveit/devel_isolated/chomp_motion_planner;/home/rajendra/ws_moveit/devel_isolated/moveit_core;/home/rajendra/ws_moveit/devel_isolated/moveit_msgs;/home/rajendra/ws_moveit/devel_isolated/moveit_commander;/home/rajendra/ws_moveit/devel_isolated/moveit;/home/rajendra/ws_moveit/devel_isolated/geometric_shapes;/opt/ros/melodic".split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/rajendra/ws_moveit/devel_isolated/moveit_planners_chomp/env.sh')

output_filename = '/home/rajendra/ws_moveit/build_isolated/moveit_planners_chomp/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    #print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
