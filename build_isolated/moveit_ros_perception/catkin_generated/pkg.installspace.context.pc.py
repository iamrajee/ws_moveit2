# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "image_transport;moveit_core;moveit_msgs;moveit_ros_occupancy_map_monitor;object_recognition_msgs;sensor_msgs;tf2_geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_lazy_free_space_updater;-lmoveit_point_containment_filter;-lmoveit_pointcloud_octomap_updater_core;-lmoveit_semantic_world".split(';') if "-lmoveit_lazy_free_space_updater;-lmoveit_point_containment_filter;-lmoveit_pointcloud_octomap_updater_core;-lmoveit_semantic_world" != "" else []
PROJECT_NAME = "moveit_ros_perception"
PROJECT_SPACE_DIR = "/home/rajendra/ws_moveit/install_isolated"
PROJECT_VERSION = "1.0.1"
