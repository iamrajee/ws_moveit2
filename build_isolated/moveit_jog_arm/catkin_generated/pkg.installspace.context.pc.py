# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "control_msgs;geometry_msgs;moveit_ros_planning_interface;rosparam_shortcuts".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ljog_arm_cpp_api".split(';') if "-ljog_arm_cpp_api" != "" else []
PROJECT_NAME = "moveit_jog_arm"
PROJECT_SPACE_DIR = "/home/rajendra/ws_moveit/install_isolated"
PROJECT_VERSION = "0.0.3"
