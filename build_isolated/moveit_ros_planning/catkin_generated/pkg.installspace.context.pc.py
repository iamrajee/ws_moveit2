# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "pluginlib;moveit_core;moveit_ros_occupancy_map_monitor;moveit_msgs;tf2_msgs;tf2_geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_rdf_loader;-lmoveit_kinematics_plugin_loader;-lmoveit_robot_model_loader;-lmoveit_constraint_sampler_manager_loader;-lmoveit_planning_pipeline;-lmoveit_trajectory_execution_manager;-lmoveit_plan_execution;-lmoveit_planning_scene_monitor;-lmoveit_collision_plugin_loader".split(';') if "-lmoveit_rdf_loader;-lmoveit_kinematics_plugin_loader;-lmoveit_robot_model_loader;-lmoveit_constraint_sampler_manager_loader;-lmoveit_planning_pipeline;-lmoveit_trajectory_execution_manager;-lmoveit_plan_execution;-lmoveit_planning_scene_monitor;-lmoveit_collision_plugin_loader" != "" else []
PROJECT_NAME = "moveit_ros_planning"
PROJECT_SPACE_DIR = "/home/rajendra/ws_moveit/install_isolated"
PROJECT_VERSION = "1.0.1"
