// Generated by gencpp from file transbot_msgs/JoyState.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_JOYSTATE_H
#define TRANSBOT_MSGS_MESSAGE_JOYSTATE_H


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
struct JoyState_
{
  typedef JoyState_<ContainerAllocator> Type;

  JoyState_()
    : state(false)  {
    }
  JoyState_(const ContainerAllocator& _alloc)
    : state(false)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::transbot_msgs::JoyState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::JoyState_<ContainerAllocator> const> ConstPtr;

}; // struct JoyState_

typedef ::transbot_msgs::JoyState_<std::allocator<void> > JoyState;

typedef boost::shared_ptr< ::transbot_msgs::JoyState > JoyStatePtr;
typedef boost::shared_ptr< ::transbot_msgs::JoyState const> JoyStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::JoyState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::JoyState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::JoyState_<ContainerAllocator1> & lhs, const ::transbot_msgs::JoyState_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::JoyState_<ContainerAllocator1> & lhs, const ::transbot_msgs::JoyState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::JoyState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::JoyState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::JoyState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::JoyState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::JoyState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::JoyState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::JoyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "001fde3cab9e313a150416ff09c08ee4";
  }

  static const char* value(const ::transbot_msgs::JoyState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x001fde3cab9e313aULL;
  static const uint64_t static_value2 = 0x150416ff09c08ee4ULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::JoyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/JoyState";
  }

  static const char* value(const ::transbot_msgs::JoyState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::JoyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool state\n"
;
  }

  static const char* value(const ::transbot_msgs::JoyState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::JoyState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JoyState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::JoyState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::JoyState_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_JOYSTATE_H