# CMake generated Testfile for 
# Source directory: /home/rajendra/ws_moveit/src/moveit/moveit_experimental/moveit_jog_arm
# Build directory: /home/rajendra/ws_moveit/build_isolated/moveit_jog_arm
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_moveit_jog_arm_rostest_test_launch_jog_arm_integration_test.test "/home/rajendra/ws_moveit/build_isolated/moveit_jog_arm/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/rajendra/ws_moveit/build_isolated/moveit_jog_arm/test_results/moveit_jog_arm/rostest-test_launch_jog_arm_integration_test.xml" "--return-code" "/opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/rajendra/ws_moveit/src/moveit/moveit_experimental/moveit_jog_arm --package=moveit_jog_arm --results-filename test_launch_jog_arm_integration_test.xml --results-base-dir \"/home/rajendra/ws_moveit/build_isolated/moveit_jog_arm/test_results\" /home/rajendra/ws_moveit/src/moveit/moveit_experimental/moveit_jog_arm/test/launch/jog_arm_integration_test.test ")
subdirs("gtest")
