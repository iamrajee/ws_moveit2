// Generated by gencpp from file moveit_msgs/CheckIfRobotStateExistsInWarehouseResponse.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_CHECKIFROBOTSTATEEXISTSINWAREHOUSERESPONSE_H
#define MOVEIT_MSGS_MESSAGE_CHECKIFROBOTSTATEEXISTSINWAREHOUSERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace moveit_msgs
{
template <class ContainerAllocator>
struct CheckIfRobotStateExistsInWarehouseResponse_
{
  typedef CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> Type;

  CheckIfRobotStateExistsInWarehouseResponse_()
    : exists(false)  {
    }
  CheckIfRobotStateExistsInWarehouseResponse_(const ContainerAllocator& _alloc)
    : exists(false)  {
  (void)_alloc;
    }



   typedef uint8_t _exists_type;
  _exists_type exists;





  typedef boost::shared_ptr< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CheckIfRobotStateExistsInWarehouseResponse_

typedef ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<std::allocator<void> > CheckIfRobotStateExistsInWarehouseResponse;

typedef boost::shared_ptr< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse > CheckIfRobotStateExistsInWarehouseResponsePtr;
typedef boost::shared_ptr< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse const> CheckIfRobotStateExistsInWarehouseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/rajendra/ws_moveit/devel_isolated/moveit_msgs/share/moveit_msgs/msg', '/home/rajendra/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8c90de4adc1219c86af9c2874c0c1b5";
  }

  static const char* value(const ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8c90de4adc1219cULL;
  static const uint64_t static_value2 = 0x86af9c2874c0c1b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/CheckIfRobotStateExistsInWarehouseResponse";
  }

  static const char* value(const ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool exists\n"
"\n"
;
  }

  static const char* value(const ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.exists);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckIfRobotStateExistsInWarehouseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::CheckIfRobotStateExistsInWarehouseResponse_<ContainerAllocator>& v)
  {
    s << indent << "exists: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exists);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_CHECKIFROBOTSTATEEXISTSINWAREHOUSERESPONSE_H
