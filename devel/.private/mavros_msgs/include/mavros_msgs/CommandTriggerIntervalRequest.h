// Generated by gencpp from file mavros_msgs/CommandTriggerIntervalRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDTRIGGERINTERVALREQUEST_H
#define MAVROS_MSGS_MESSAGE_COMMANDTRIGGERINTERVALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct CommandTriggerIntervalRequest_
{
  typedef CommandTriggerIntervalRequest_<ContainerAllocator> Type;

  CommandTriggerIntervalRequest_()
    : cycle_time(0.0)
    , integration_time(0.0)  {
    }
  CommandTriggerIntervalRequest_(const ContainerAllocator& _alloc)
    : cycle_time(0.0)
    , integration_time(0.0)  {
  (void)_alloc;
    }



   typedef float _cycle_time_type;
  _cycle_time_type cycle_time;

   typedef float _integration_time_type;
  _integration_time_type integration_time;





  typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandTriggerIntervalRequest_

typedef ::mavros_msgs::CommandTriggerIntervalRequest_<std::allocator<void> > CommandTriggerIntervalRequest;

typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalRequest > CommandTriggerIntervalRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalRequest const> CommandTriggerIntervalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/esaii-admin/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54f6167a076ced593aa096ea6eb1a519";
  }

  static const char* value(const ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54f6167a076ced59ULL;
  static const uint64_t static_value2 = 0x3aa096ea6eb1a519ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandTriggerIntervalRequest";
  }

  static const char* value(const ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
float32   cycle_time\n\
float32   integration_time\n\
";
  }

  static const char* value(const ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cycle_time);
      stream.next(m.integration_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandTriggerIntervalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CommandTriggerIntervalRequest_<ContainerAllocator>& v)
  {
    s << indent << "cycle_time: ";
    Printer<float>::stream(s, indent + "  ", v.cycle_time);
    s << indent << "integration_time: ";
    Printer<float>::stream(s, indent + "  ", v.integration_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDTRIGGERINTERVALREQUEST_H
