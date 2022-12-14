// Generated by gencpp from file transbot_msgs/Patrol.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_PATROL_H
#define TRANSBOT_MSGS_MESSAGE_PATROL_H

#include <ros/service_traits.h>


#include <transbot_msgs/PatrolRequest.h>
#include <transbot_msgs/PatrolResponse.h>


namespace transbot_msgs
{

struct Patrol
{

typedef PatrolRequest Request;
typedef PatrolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Patrol
} // namespace transbot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::transbot_msgs::Patrol > {
  static const char* value()
  {
    return "725a414bc8766f0cf2b2c0b5f17047e6";
  }

  static const char* value(const ::transbot_msgs::Patrol&) { return value(); }
};

template<>
struct DataType< ::transbot_msgs::Patrol > {
  static const char* value()
  {
    return "transbot_msgs/Patrol";
  }

  static const char* value(const ::transbot_msgs::Patrol&) { return value(); }
};


// service_traits::MD5Sum< ::transbot_msgs::PatrolRequest> should match
// service_traits::MD5Sum< ::transbot_msgs::Patrol >
template<>
struct MD5Sum< ::transbot_msgs::PatrolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::transbot_msgs::Patrol >::value();
  }
  static const char* value(const ::transbot_msgs::PatrolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::transbot_msgs::PatrolRequest> should match
// service_traits::DataType< ::transbot_msgs::Patrol >
template<>
struct DataType< ::transbot_msgs::PatrolRequest>
{
  static const char* value()
  {
    return DataType< ::transbot_msgs::Patrol >::value();
  }
  static const char* value(const ::transbot_msgs::PatrolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::transbot_msgs::PatrolResponse> should match
// service_traits::MD5Sum< ::transbot_msgs::Patrol >
template<>
struct MD5Sum< ::transbot_msgs::PatrolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::transbot_msgs::Patrol >::value();
  }
  static const char* value(const ::transbot_msgs::PatrolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::transbot_msgs::PatrolResponse> should match
// service_traits::DataType< ::transbot_msgs::Patrol >
template<>
struct DataType< ::transbot_msgs::PatrolResponse>
{
  static const char* value()
  {
    return DataType< ::transbot_msgs::Patrol >::value();
  }
  static const char* value(const ::transbot_msgs::PatrolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_PATROL_H
