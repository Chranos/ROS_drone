// Generated by gencpp from file transbot_msgs/Buzzer.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_BUZZER_H
#define TRANSBOT_MSGS_MESSAGE_BUZZER_H

#include <ros/service_traits.h>


#include <transbot_msgs/BuzzerRequest.h>
#include <transbot_msgs/BuzzerResponse.h>


namespace transbot_msgs
{

struct Buzzer
{

typedef BuzzerRequest Request;
typedef BuzzerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Buzzer
} // namespace transbot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::transbot_msgs::Buzzer > {
  static const char* value()
  {
    return "32ecc8168750cdefd185aff218d2ce5e";
  }

  static const char* value(const ::transbot_msgs::Buzzer&) { return value(); }
};

template<>
struct DataType< ::transbot_msgs::Buzzer > {
  static const char* value()
  {
    return "transbot_msgs/Buzzer";
  }

  static const char* value(const ::transbot_msgs::Buzzer&) { return value(); }
};


// service_traits::MD5Sum< ::transbot_msgs::BuzzerRequest> should match
// service_traits::MD5Sum< ::transbot_msgs::Buzzer >
template<>
struct MD5Sum< ::transbot_msgs::BuzzerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::transbot_msgs::Buzzer >::value();
  }
  static const char* value(const ::transbot_msgs::BuzzerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::transbot_msgs::BuzzerRequest> should match
// service_traits::DataType< ::transbot_msgs::Buzzer >
template<>
struct DataType< ::transbot_msgs::BuzzerRequest>
{
  static const char* value()
  {
    return DataType< ::transbot_msgs::Buzzer >::value();
  }
  static const char* value(const ::transbot_msgs::BuzzerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::transbot_msgs::BuzzerResponse> should match
// service_traits::MD5Sum< ::transbot_msgs::Buzzer >
template<>
struct MD5Sum< ::transbot_msgs::BuzzerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::transbot_msgs::Buzzer >::value();
  }
  static const char* value(const ::transbot_msgs::BuzzerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::transbot_msgs::BuzzerResponse> should match
// service_traits::DataType< ::transbot_msgs::Buzzer >
template<>
struct DataType< ::transbot_msgs::BuzzerResponse>
{
  static const char* value()
  {
    return DataType< ::transbot_msgs::Buzzer >::value();
  }
  static const char* value(const ::transbot_msgs::BuzzerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_BUZZER_H
