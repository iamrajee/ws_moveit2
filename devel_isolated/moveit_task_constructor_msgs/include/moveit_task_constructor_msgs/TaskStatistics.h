// Generated by gencpp from file moveit_task_constructor_msgs/TaskStatistics.msg
// DO NOT EDIT!


#ifndef MOVEIT_TASK_CONSTRUCTOR_MSGS_MESSAGE_TASKSTATISTICS_H
#define MOVEIT_TASK_CONSTRUCTOR_MSGS_MESSAGE_TASKSTATISTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_task_constructor_msgs/StageStatistics.h>

namespace moveit_task_constructor_msgs
{
template <class ContainerAllocator>
struct TaskStatistics_
{
  typedef TaskStatistics_<ContainerAllocator> Type;

  TaskStatistics_()
    : process_id()
    , id()
    , stages()  {
    }
  TaskStatistics_(const ContainerAllocator& _alloc)
    : process_id(_alloc)
    , id(_alloc)
    , stages(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _process_id_type;
  _process_id_type process_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef std::vector< ::moveit_task_constructor_msgs::StageStatistics_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_task_constructor_msgs::StageStatistics_<ContainerAllocator> >::other >  _stages_type;
  _stages_type stages;





  typedef boost::shared_ptr< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> const> ConstPtr;

}; // struct TaskStatistics_

typedef ::moveit_task_constructor_msgs::TaskStatistics_<std::allocator<void> > TaskStatistics;

typedef boost::shared_ptr< ::moveit_task_constructor_msgs::TaskStatistics > TaskStatisticsPtr;
typedef boost::shared_ptr< ::moveit_task_constructor_msgs::TaskStatistics const> TaskStatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_task_constructor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/rajendra/ws_moveit/devel_isolated/moveit_msgs/share/moveit_msgs/msg', '/home/rajendra/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/melodic/share/visualization_msgs/cmake/../msg'], 'moveit_task_constructor_msgs': ['/home/rajendra/ws_moveit/src/moveit_task_constructor/msgs/msg', '/home/rajendra/ws_moveit/devel_isolated/moveit_task_constructor_msgs/share/moveit_task_constructor_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "97b790cd1fcfa2d2674c1b83cc7d5e8c";
  }

  static const char* value(const ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x97b790cd1fcfa2d2ULL;
  static const uint64_t static_value2 = 0x674c1b83cc7d5e8cULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_task_constructor_msgs/TaskStatistics";
  }

  static const char* value(const ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# id of generating process\n"
"string process_id\n"
"\n"
"# unique of this task\n"
"string id\n"
"\n"
"# list of all stages, including the task stage itself\n"
"StageStatistics[] stages\n"
"\n"
"================================================================================\n"
"MSG: moveit_task_constructor_msgs/StageStatistics\n"
"# dynamically changing information for a stage\n"
"\n"
"# unique id within task\n"
"uint32 id\n"
"\n"
"# successful solution IDs of this stage\n"
"uint32[] solved\n"
"\n"
"# (optional) failed solution IDs of this stage\n"
"uint32[] failed\n"
"# number of failed solutions (if failed is empty)\n"
"uint32   num_failed\n"
;
  }

  static const char* value(const ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.process_id);
      stream.next(m.id);
      stream.next(m.stages);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskStatistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_task_constructor_msgs::TaskStatistics_<ContainerAllocator>& v)
  {
    s << indent << "process_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.process_id);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "stages[]" << std::endl;
    for (size_t i = 0; i < v.stages.size(); ++i)
    {
      s << indent << "  stages[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_task_constructor_msgs::StageStatistics_<ContainerAllocator> >::stream(s, indent + "    ", v.stages[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_TASK_CONSTRUCTOR_MSGS_MESSAGE_TASKSTATISTICS_H