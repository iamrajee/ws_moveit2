# CMake generated Testfile for 
# Source directory: /home/rajendra/ws_moveit/src/moveit/moveit_ros/visualization
# Build directory: /home/rajendra/ws_moveit/build/moveit/moveit_ros/visualization
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_moveit_ros_visualization_rostest_test_moveit_joy.test "/home/rajendra/ws_moveit/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/rajendra/ws_moveit/build/test_results/moveit_ros_visualization/rostest-test_moveit_joy.xml" "--return-code" "/opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/rajendra/ws_moveit/src/moveit/moveit_ros/visualization --package=moveit_ros_visualization --results-filename test_moveit_joy.xml --results-base-dir \"/home/rajendra/ws_moveit/build/test_results\" /home/rajendra/ws_moveit/src/moveit/moveit_ros/visualization/test/moveit_joy.test ")
subdirs("rviz_plugin_render_tools")
subdirs("robot_state_rviz_plugin")
subdirs("planning_scene_rviz_plugin")
subdirs("motion_planning_rviz_plugin")
subdirs("trajectory_rviz_plugin")
