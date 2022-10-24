// Generated by gencpp from file transbot_msgs/BuzzerResponse.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_BUZZERRESPONSE_H
#define TRANSBOT_MSGS_MESSAGE_BUZZERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace transbot_msgs
{
template <class ContainerAllocator>
struct BuzzerResponse_
{
  typedef BuzzerResponse_<ContainerAllocator> Type;

  BuzzerResponse_()
    : result(false)  {
    }
  BuzzerResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BuzzerResponse_

typedef ::transbot_msgs::BuzzerResponse_<std::allocator<void> > BuzzerResponse;

typedef boost::shared_ptr< ::transbot_msgs::BuzzerResponse > BuzzerResponsePtr;
typedef boost::shared_ptr< ::transbot_msgs::BuzzerResponse const> BuzzerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::BuzzerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::BuzzerResponse_<ContainerAllocator1> & lhs, const ::transbot_msgs::BuzzerResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::BuzzerResponse_<ContainerAllocator1> & lhs, const ::transbot_msgs::BuzzerResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::transbot_msgs::BuzzerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/BuzzerResponse";
  }

  static const char* value(const ::transbot_msgs::BuzzerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"bool result\n"
;
  }

  static const char* value(const ::transbot_msgs::BuzzerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BuzzerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::BuzzerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::BuzzerResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_BUZZERRESPONSE_H
