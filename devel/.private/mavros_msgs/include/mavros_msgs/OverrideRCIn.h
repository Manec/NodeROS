// Generated by gencpp from file mavros_msgs/OverrideRCIn.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_OVERRIDERCIN_H
#define MAVROS_MSGS_MESSAGE_OVERRIDERCIN_H


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
struct OverrideRCIn_
{
  typedef OverrideRCIn_<ContainerAllocator> Type;

  OverrideRCIn_()
    : channels()  {
      channels.assign(0);
  }
  OverrideRCIn_(const ContainerAllocator& _alloc)
    : channels()  {
  (void)_alloc;
      channels.assign(0);
  }



   typedef boost::array<uint16_t, 8>  _channels_type;
  _channels_type channels;



  enum {
    CHAN_RELEASE = 0u,
    CHAN_NOCHANGE = 65535u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> const> ConstPtr;

}; // struct OverrideRCIn_

typedef ::mavros_msgs::OverrideRCIn_<std::allocator<void> > OverrideRCIn;

typedef boost::shared_ptr< ::mavros_msgs::OverrideRCIn > OverrideRCInPtr;
typedef boost::shared_ptr< ::mavros_msgs::OverrideRCIn const> OverrideRCInConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::OverrideRCIn_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "73b27a463a40a3eda1f9fbb1fc86d6f3";
  }

  static const char* value(const ::mavros_msgs::OverrideRCIn_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x73b27a463a40a3edULL;
  static const uint64_t static_value2 = 0xa1f9fbb1fc86d6f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/OverrideRCIn";
  }

  static const char* value(const ::mavros_msgs::OverrideRCIn_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Override RC Input\n\
# Currently MAVLink defines override for 8 channel\n\
\n\
uint16 CHAN_RELEASE=0\n\
uint16 CHAN_NOCHANGE=65535\n\
\n\
uint16[8] channels\n\
";
  }

  static const char* value(const ::mavros_msgs::OverrideRCIn_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channels);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OverrideRCIn_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::OverrideRCIn_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::OverrideRCIn_<ContainerAllocator>& v)
  {
    s << indent << "channels[]" << std::endl;
    for (size_t i = 0; i < v.channels.size(); ++i)
    {
      s << indent << "  channels[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.channels[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_OVERRIDERCIN_H
