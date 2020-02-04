// Generated by gencpp from file moveit_task_constructor_msgs/GetSolutionRequest.msg
// DO NOT EDIT!


#ifndef MOVEIT_TASK_CONSTRUCTOR_MSGS_MESSAGE_GETSOLUTIONREQUEST_H
#define MOVEIT_TASK_CONSTRUCTOR_MSGS_MESSAGE_GETSOLUTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace moveit_task_constructor_msgs
{
template <class ContainerAllocator>
struct GetSolutionRequest_
{
  typedef GetSolutionRequest_<ContainerAllocator> Type;

  GetSolutionRequest_()
    : solution_id(0)  {
    }
  GetSolutionRequest_(const ContainerAllocator& _alloc)
    : solution_id(0)  {
  (void)_alloc;
    }



   typedef uint32_t _solution_id_type;
  _solution_id_type solution_id;





  typedef boost::shared_ptr< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetSolutionRequest_

typedef ::moveit_task_constructor_msgs::GetSolutionRequest_<std::allocator<void> > GetSolutionRequest;

typedef boost::shared_ptr< ::moveit_task_constructor_msgs::GetSolutionRequest > GetSolutionRequestPtr;
typedef boost::shared_ptr< ::moveit_task_constructor_msgs::GetSolutionRequest const> GetSolutionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_task_constructor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/rajendra/ws_moveit/devel_isolated/moveit_msgs/share/moveit_msgs/msg', '/home/rajendra/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/melodic/share/visualization_msgs/cmake/../msg'], 'moveit_task_constructor_msgs': ['/home/rajendra/ws_moveit/src/moveit_task_constructor/msgs/msg', '/home/rajendra/ws_moveit/devel_isolated/moveit_task_constructor_msgs/share/moveit_task_constructor_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "004aed0f49ddbcbc97f8b44e284b1729";
  }

  static const char* value(const ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x004aed0f49ddbcbcULL;
  static const uint64_t static_value2 = 0x97f8b44e284b1729ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_task_constructor_msgs/GetSolutionRequest";
  }

  static const char* value(const ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 solution_id\n"
"\n"
;
  }

  static const char* value(const ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.solution_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSolutionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_task_constructor_msgs::GetSolutionRequest_<ContainerAllocator>& v)
  {
    s << indent << "solution_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.solution_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_TASK_CONSTRUCTOR_MSGS_MESSAGE_GETSOLUTIONREQUEST_H
