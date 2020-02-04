# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3;/opt/ros/melodic/include".split(';') if "${prefix}/include;/usr/include/eigen3;/opt/ros/melodic/include" != "" else []
PROJECT_CATKIN_DEPENDS = "moveit_core;moveit_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_ros_occupancy_map_monitor;/opt/ros/melodic/lib/liboctomap.so;/opt/ros/melodic/lib/liboctomath.so".split(';') if "-lmoveit_ros_occupancy_map_monitor;/opt/ros/melodic/lib/liboctomap.so;/opt/ros/melodic/lib/liboctomath.so" != "" else []
PROJECT_NAME = "moveit_ros_occupancy_map_monitor"
PROJECT_SPACE_DIR = "/home/rajendra/ws_moveit/install_isolated"
PROJECT_VERSION = "1.0.1"
