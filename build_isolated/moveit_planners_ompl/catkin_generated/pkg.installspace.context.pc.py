# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/melodic/include/ompl-1.4".split(';') if "${prefix}/include;/opt/ros/melodic/include/ompl-1.4" != "" else []
PROJECT_CATKIN_DEPENDS = "moveit_core".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_ompl_interface;/opt/ros/melodic/lib/libompl.so".split(';') if "-lmoveit_ompl_interface;/opt/ros/melodic/lib/libompl.so" != "" else []
PROJECT_NAME = "moveit_planners_ompl"
PROJECT_SPACE_DIR = "/home/rajendra/ws_moveit/install_isolated"
PROJECT_VERSION = "1.0.1"
