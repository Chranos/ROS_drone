// Generated by gencpp from file transbot_msgs/Adjust.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_ADJUST_H
#define TRANSBOT_MSGS_MESSAGE_ADJUST_H


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
struct Adjust_
{
  typedef Adjust_<ContainerAllocator> Type;

  Adjust_()
    : adjust(false)  {
    }
  Adjust_(const ContainerAllocator& _alloc)
    : adjust(false)  {
  (void)_alloc;
    }



   typedef uint8_t _adjust_type;
  _adjust_type adjust;





  typedef boost::shared_ptr< ::transbot_msgs::Adjust_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::Adjust_<ContainerAllocator> const> ConstPtr;

}; // struct Adjust_

typedef ::transbot_msgs::Adjust_<std::allocator<void> > Adjust;

typedef boost::shared_ptr< ::transbot_msgs::Adjust > AdjustPtr;
typedef boost::shared_ptr< ::transbot_msgs::Adjust const> AdjustConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::Adjust_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::Adjust_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::Adjust_<ContainerAllocator1> & lhs, const ::transbot_msgs::Adjust_<ContainerAllocator2> & rhs)
{
  return lhs.adjust == rhs.adjust;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::Adjust_<ContainerAllocator1> & lhs, const ::transbot_msgs::Adjust_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::Adjust_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::Adjust_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::Adjust_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::Adjust_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::Adjust_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::Adjust_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::Adjust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "686be2de32be2d650746cf5e906439fb";
  }

  static const char* value(const ::transbot_msgs::Adjust_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x686be2de32be2d65ULL;
  static const uint64_t static_value2 = 0x0746cf5e906439fbULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::Adjust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/Adjust";
  }

  static const char* value(const ::transbot_msgs::Adjust_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::Adjust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool adjust\n"
;
  }

  static const char* value(const ::transbot_msgs::Adjust_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::Adjust_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.adjust);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Adjust_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::Adjust_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::Adjust_<ContainerAllocator>& v)
  {
    s << indent << "adjust: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.adjust);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_ADJUST_H