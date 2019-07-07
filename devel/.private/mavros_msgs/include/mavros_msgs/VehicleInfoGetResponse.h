// Generated by gencpp from file mavros_msgs/VehicleInfoGetResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_VEHICLEINFOGETRESPONSE_H
#define MAVROS_MSGS_MESSAGE_VEHICLEINFOGETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mavros_msgs/VehicleInfo.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct VehicleInfoGetResponse_
{
  typedef VehicleInfoGetResponse_<ContainerAllocator> Type;

  VehicleInfoGetResponse_()
    : success(false)
    , vehicles()  {
    }
  VehicleInfoGetResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , vehicles(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::vector< ::mavros_msgs::VehicleInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >::other >  _vehicles_type;
  _vehicles_type vehicles;





  typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleInfoGetResponse_

typedef ::mavros_msgs::VehicleInfoGetResponse_<std::allocator<void> > VehicleInfoGetResponse;

typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetResponse > VehicleInfoGetResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetResponse const> VehicleInfoGetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/esaii-admin/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d6808eae4fdcafd1421caee685a286b5";
  }

  static const char* value(const ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd6808eae4fdcafd1ULL;
  static const uint64_t static_value2 = 0x421caee685a286b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/VehicleInfoGetResponse";
  }

  static const char* value(const ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
mavros_msgs/VehicleInfo[] vehicles\n\
\n\
\n\
\n\
================================================================================\n\
MSG: mavros_msgs/VehicleInfo\n\
# Vehicle Info msg\n\
\n\
std_msgs/Header header\n\
\n\
uint8 HAVE_INFO_HEARTBEAT = 1\n\
uint8 HAVE_INFO_AUTOPILOT_VERSION = 2\n\
uint8 available_info		# Bitmap shows what info is available\n\
\n\
# Vehicle address\n\
uint8 sysid                     # SYSTEM ID\n\
uint8 compid                    # COMPONENT ID\n\
\n\
# -*- Heartbeat info -*-\n\
uint8 autopilot                 # MAV_AUTOPILOT\n\
uint8 type                      # MAV_TYPE\n\
uint8 system_status             # MAV_STATE\n\
uint8 base_mode\n\
uint32 custom_mode\n\
string mode                     # MAV_MODE string\n\
uint32 mode_id                  # MAV_MODE number\n\
\n\
# -*- Autopilot version -*-\n\
uint64 capabilities             # MAV_PROTOCOL_CAPABILITY\n\
uint32 flight_sw_version        # Firmware version number\n\
uint32 middleware_sw_version    # Middleware version number\n\
uint32 os_sw_version            # Operating system version number\n\
uint32 board_version            # HW / board version (last 8 bytes should be silicon ID, if any)\n\
uint16 vendor_id                # ID of the board vendor\n\
uint16 product_id               # ID of the product\n\
uint64 uid                      # UID if provided by hardware\n\
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

  static const char* value(const ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.vehicles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleInfoGetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::VehicleInfoGetResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "vehicles[]" << std::endl;
    for (size_t i = 0; i < v.vehicles.size(); ++i)
    {
      s << indent << "  vehicles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.vehicles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_VEHICLEINFOGETRESPONSE_H
