// Generated by gencpp from file moveit_msgs/KinematicSolverInfo.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_KINEMATICSOLVERINFO_H
#define MOVEIT_MSGS_MESSAGE_KINEMATICSOLVERINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/JointLimits.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct KinematicSolverInfo_
{
  typedef KinematicSolverInfo_<ContainerAllocator> Type;

  KinematicSolverInfo_()
    : joint_names()
    , limits()
    , link_names()  {
    }
  KinematicSolverInfo_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , limits(_alloc)
    , link_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector< ::moveit_msgs::JointLimits_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::JointLimits_<ContainerAllocator> >::other >  _limits_type;
  _limits_type limits;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _link_names_type;
  _link_names_type link_names;





  typedef boost::shared_ptr< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicSolverInfo_

typedef ::moveit_msgs::KinematicSolverInfo_<std::allocator<void> > KinematicSolverInfo;

typedef boost::shared_ptr< ::moveit_msgs::KinematicSolverInfo > KinematicSolverInfoPtr;
typedef boost::shared_ptr< ::moveit_msgs::KinematicSolverInfo const> KinematicSolverInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/rajendra/ws_moveit/devel_isolated/moveit_msgs/share/moveit_msgs/msg', '/home/rajendra/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc048557c0f9795c392dd80f8bb00489";
  }

  static const char* value(const ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc048557c0f9795cULL;
  static const uint64_t static_value2 = 0x392dd80f8bb00489ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/KinematicSolverInfo";
  }

  static const char* value(const ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A list of joints in the kinematic tree\n"
"string[] joint_names\n"
"# A list of joint limits corresponding to the joint names\n"
"moveit_msgs/JointLimits[] limits\n"
"# A list of links that the kinematics node provides solutions for\n"
"string[] link_names\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/JointLimits\n"
"# This message contains information about limits of a particular joint (or control dimension)\n"
"string joint_name\n"
"\n"
"# true if the joint has position limits\n"
"bool has_position_limits\n"
"\n"
"# min and max position limits\n"
"float64 min_position\n"
"float64 max_position\n"
"\n"
"# true if joint has velocity limits\n"
"bool has_velocity_limits\n"
"\n"
"# max velocity limit\n"
"float64 max_velocity\n"
"# min_velocity is assumed to be -max_velocity\n"
"\n"
"# true if joint has acceleration limits\n"
"bool has_acceleration_limits\n"
"# max acceleration limit\n"
"float64 max_acceleration\n"
"# min_acceleration is assumed to be -max_acceleration\n"
;
  }

  static const char* value(const ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.limits);
      stream.next(m.link_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicSolverInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::KinematicSolverInfo_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "limits[]" << std::endl;
    for (size_t i = 0; i < v.limits.size(); ++i)
    {
      s << indent << "  limits[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::JointLimits_<ContainerAllocator> >::stream(s, indent + "    ", v.limits[i]);
    }
    s << indent << "link_names[]" << std::endl;
    for (size_t i = 0; i < v.link_names.size(); ++i)
    {
      s << indent << "  link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_KINEMATICSOLVERINFO_H
