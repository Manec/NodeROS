// Generated by gencpp from file mavros_msgs/CommandTOL.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDTOL_H
#define MAVROS_MSGS_MESSAGE_COMMANDTOL_H

#include <ros/service_traits.h>


#include <mavros_msgs/CommandTOLRequest.h>
#include <mavros_msgs/CommandTOLResponse.h>


namespace mavros_msgs
{

struct CommandTOL
{

typedef CommandTOLRequest Request;
typedef CommandTOLResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CommandTOL
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::CommandTOL > {
  static const char* value()
  {
    return "93ff4eaa9907f58c0e7a909cddce23e2";
  }

  static const char* value(const ::mavros_msgs::CommandTOL&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::CommandTOL > {
  static const char* value()
  {
    return "mavros_msgs/CommandTOL";
  }

  static const char* value(const ::mavros_msgs::CommandTOL&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::CommandTOLRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::CommandTOL > 
template<>
struct MD5Sum< ::mavros_msgs::CommandTOLRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::CommandTOL >::value();
  }
  static const char* value(const ::mavros_msgs::CommandTOLRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::CommandTOLRequest> should match 
// service_traits::DataType< ::mavros_msgs::CommandTOL > 
template<>
struct DataType< ::mavros_msgs::CommandTOLRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::CommandTOL >::value();
  }
  static const char* value(const ::mavros_msgs::CommandTOLRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::CommandTOLResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::CommandTOL > 
template<>
struct MD5Sum< ::mavros_msgs::CommandTOLResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::CommandTOL >::value();
  }
  static const char* value(const ::mavros_msgs::CommandTOLResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::CommandTOLResponse> should match 
// service_traits::DataType< ::mavros_msgs::CommandTOL > 
template<>
struct DataType< ::mavros_msgs::CommandTOLResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::CommandTOL >::value();
  }
  static const char* value(const ::mavros_msgs::CommandTOLResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDTOL_H
