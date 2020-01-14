// Generated by gencpp from file moveit_msgs/ConstraintEvalResult.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_CONSTRAINTEVALRESULT_H
#define MOVEIT_MSGS_MESSAGE_CONSTRAINTEVALRESULT_H


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
struct ConstraintEvalResult_
{
  typedef ConstraintEvalResult_<ContainerAllocator> Type;

  ConstraintEvalResult_()
    : result(false)
    , distance(0.0)  {
    }
  ConstraintEvalResult_(const ContainerAllocator& _alloc)
    : result(false)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef double _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> const> ConstPtr;

}; // struct ConstraintEvalResult_

typedef ::moveit_msgs::ConstraintEvalResult_<std::allocator<void> > ConstraintEvalResult;

typedef boost::shared_ptr< ::moveit_msgs::ConstraintEvalResult > ConstraintEvalResultPtr;
typedef boost::shared_ptr< ::moveit_msgs::ConstraintEvalResult const> ConstraintEvalResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/rajendra/ws_moveit/devel/share/moveit_msgs/msg', '/home/rajendra/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "093643083d24f6488cb5a868bd47c090";
  }

  static const char* value(const ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x093643083d24f648ULL;
  static const uint64_t static_value2 = 0x8cb5a868bd47c090ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/ConstraintEvalResult";
  }

  static const char* value(const ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains result from constraint evaluation\n"
"# result specifies the result of constraint evaluation \n"
"# (true indicates state satisfies constraint, false indicates state violates constraint)\n"
"# if false, distance specifies a measure of the distance of the state from the constraint\n"
"# if true, distance is set to zero\n"
"bool result\n"
"float64 distance\n"
;
  }

  static const char* value(const ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConstraintEvalResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_CONSTRAINTEVALRESULT_H
