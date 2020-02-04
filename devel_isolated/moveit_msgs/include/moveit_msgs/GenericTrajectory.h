// Generated by gencpp from file moveit_msgs/GenericTrajectory.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GENERICTRAJECTORY_H
#define MOVEIT_MSGS_MESSAGE_GENERICTRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <moveit_msgs/CartesianTrajectory.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct GenericTrajectory_
{
  typedef GenericTrajectory_<ContainerAllocator> Type;

  GenericTrajectory_()
    : header()
    , joint_trajectory()
    , cartesian_trajectory()  {
    }
  GenericTrajectory_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint_trajectory(_alloc)
    , cartesian_trajectory(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::other >  _joint_trajectory_type;
  _joint_trajectory_type joint_trajectory;

   typedef std::vector< ::moveit_msgs::CartesianTrajectory_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::CartesianTrajectory_<ContainerAllocator> >::other >  _cartesian_trajectory_type;
  _cartesian_trajectory_type cartesian_trajectory;





  typedef boost::shared_ptr< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> const> ConstPtr;

}; // struct GenericTrajectory_

typedef ::moveit_msgs::GenericTrajectory_<std::allocator<void> > GenericTrajectory;

typedef boost::shared_ptr< ::moveit_msgs::GenericTrajectory > GenericTrajectoryPtr;
typedef boost::shared_ptr< ::moveit_msgs::GenericTrajectory const> GenericTrajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GenericTrajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/rajendra/ws_moveit/devel_isolated/moveit_msgs/share/moveit_msgs/msg', '/home/rajendra/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d68b5c73072efa2012238a77e49c2c58";
  }

  static const char* value(const ::moveit_msgs::GenericTrajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd68b5c73072efa20ULL;
  static const uint64_t static_value2 = 0x12238a77e49c2c58ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GenericTrajectory";
  }

  static const char* value(const ::moveit_msgs::GenericTrajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A generic trajectory message that may either encode a joint- or cartesian-space trajectory, or both\n"
"# Trajectories encoded in this message are considered semantically equivalent\n"
"Header header\n"
"trajectory_msgs/JointTrajectory[] joint_trajectory\n"
"moveit_msgs/CartesianTrajectory[] cartesian_trajectory\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianTrajectory\n"
"# This message describes the trajectory of a tracked frame in task-space\n"
"Header header\n"
"\n"
"# The name of the Cartesian frame being tracked with respect to the base frame provided in header.frame_id\n"
"string tracked_frame\n"
"\n"
"CartesianTrajectoryPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianTrajectoryPoint\n"
"# The definition of a cartesian point in a trajectory. Defines the cartesian state of the point and it's time,\n"
"# following the pattern of the JointTrajectory message\n"
"CartesianPoint point\n"
"\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianPoint\n"
"# This message defines a point in a cartesian trajectory\n"
"geometry_msgs/Pose pose\n"
"geometry_msgs/Twist velocity\n"
"geometry_msgs/Accel acceleration\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Accel\n"
"# This expresses acceleration in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
;
  }

  static const char* value(const ::moveit_msgs::GenericTrajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint_trajectory);
      stream.next(m.cartesian_trajectory);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GenericTrajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GenericTrajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GenericTrajectory_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_trajectory[]" << std::endl;
    for (size_t i = 0; i < v.joint_trajectory.size(); ++i)
    {
      s << indent << "  joint_trajectory[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "    ", v.joint_trajectory[i]);
    }
    s << indent << "cartesian_trajectory[]" << std::endl;
    for (size_t i = 0; i < v.cartesian_trajectory.size(); ++i)
    {
      s << indent << "  cartesian_trajectory[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::CartesianTrajectory_<ContainerAllocator> >::stream(s, indent + "    ", v.cartesian_trajectory[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GENERICTRAJECTORY_H
