// Generated by gencpp from file mavros_msgs/BatteryStatus.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_BATTERYSTATUS_H
#define MAVROS_MSGS_MESSAGE_BATTERYSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct BatteryStatus_
{
  typedef BatteryStatus_<ContainerAllocator> Type;

  BatteryStatus_()
    : header()
    , voltage(0.0)
    , current(0.0)
    , remaining(0.0)  {
    }
  BatteryStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , voltage(0.0)
    , current(0.0)
    , remaining(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef float _current_type;
  _current_type current;

   typedef float _remaining_type;
  _remaining_type remaining;





  typedef boost::shared_ptr< ::mavros_msgs::BatteryStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::BatteryStatus_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryStatus_

typedef ::mavros_msgs::BatteryStatus_<std::allocator<void> > BatteryStatus;

typedef boost::shared_ptr< ::mavros_msgs::BatteryStatus > BatteryStatusPtr;
typedef boost::shared_ptr< ::mavros_msgs::BatteryStatus const> BatteryStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::BatteryStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/esaii-admin/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::BatteryStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::BatteryStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::BatteryStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ba4ae7c602c5ae6a7e8f3ffb652dc5f";
  }

  static const char* value(const ::mavros_msgs::BatteryStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ba4ae7c602c5ae6ULL;
  static const uint64_t static_value2 = 0xa7e8f3ffb652dc5fULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/BatteryStatus";
  }

  static const char* value(const ::mavros_msgs::BatteryStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Represent battery status from SYSTEM_STATUS\n\
#\n\
# To be replaced when sensor_msgs/BatteryState PR will be merged\n\
# https://github.com/ros/common_msgs/pull/74\n\
\n\
std_msgs/Header header\n\
float32 voltage # [V]\n\
float32 current # [A]\n\
float32 remaining # 0..1\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::mavros_msgs::BatteryStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.voltage);
      stream.next(m.current);
      stream.next(m.remaining);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::BatteryStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::BatteryStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<float>::stream(s, indent + "  ", v.current);
    s << indent << "remaining: ";
    Printer<float>::stream(s, indent + "  ", v.remaining);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_BATTERYSTATUS_H
