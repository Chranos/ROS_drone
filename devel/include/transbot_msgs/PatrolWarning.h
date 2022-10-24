// Generated by gencpp from file transbot_msgs/PatrolWarning.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_PATROLWARNING_H
#define TRANSBOT_MSGS_MESSAGE_PATROLWARNING_H


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
struct PatrolWarning_
{
  typedef PatrolWarning_<ContainerAllocator> Type;

  PatrolWarning_()
    : speed(0.0)
    , Function()
    , ResponseDist(0.0)
    , LaserAngle(0)  {
    }
  PatrolWarning_(const ContainerAllocator& _alloc)
    : speed(0.0)
    , Function(_alloc)
    , ResponseDist(0.0)
    , LaserAngle(0)  {
  (void)_alloc;
    }



   typedef float _speed_type;
  _speed_type speed;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _Function_type;
  _Function_type Function;

   typedef float _ResponseDist_type;
  _ResponseDist_type ResponseDist;

   typedef int32_t _LaserAngle_type;
  _LaserAngle_type LaserAngle;





  typedef boost::shared_ptr< ::transbot_msgs::PatrolWarning_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::PatrolWarning_<ContainerAllocator> const> ConstPtr;

}; // struct PatrolWarning_

typedef ::transbot_msgs::PatrolWarning_<std::allocator<void> > PatrolWarning;

typedef boost::shared_ptr< ::transbot_msgs::PatrolWarning > PatrolWarningPtr;
typedef boost::shared_ptr< ::transbot_msgs::PatrolWarning const> PatrolWarningConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::PatrolWarning_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::PatrolWarning_<ContainerAllocator1> & lhs, const ::transbot_msgs::PatrolWarning_<ContainerAllocator2> & rhs)
{
  return lhs.speed == rhs.speed &&
    lhs.Function == rhs.Function &&
    lhs.ResponseDist == rhs.ResponseDist &&
    lhs.LaserAngle == rhs.LaserAngle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::PatrolWarning_<ContainerAllocator1> & lhs, const ::transbot_msgs::PatrolWarning_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::PatrolWarning_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::PatrolWarning_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::PatrolWarning_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c2aedf4e9d9a1d5ce206d948829c9bc";
  }

  static const char* value(const ::transbot_msgs::PatrolWarning_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c2aedf4e9d9a1d5ULL;
  static const uint64_t static_value2 = 0xce206d948829c9bcULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/PatrolWarning";
  }

  static const char* value(const ::transbot_msgs::PatrolWarning_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 speed\n"
"string Function\n"
"float32 ResponseDist\n"
"int32   LaserAngle\n"
;
  }

  static const char* value(const ::transbot_msgs::PatrolWarning_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speed);
      stream.next(m.Function);
      stream.next(m.ResponseDist);
      stream.next(m.LaserAngle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PatrolWarning_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::PatrolWarning_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::PatrolWarning_<ContainerAllocator>& v)
  {
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "Function: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.Function);
    s << indent << "ResponseDist: ";
    Printer<float>::stream(s, indent + "  ", v.ResponseDist);
    s << indent << "LaserAngle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LaserAngle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_PATROLWARNING_H
