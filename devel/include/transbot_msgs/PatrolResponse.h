// Generated by gencpp from file transbot_msgs/PatrolResponse.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_PATROLRESPONSE_H
#define TRANSBOT_MSGS_MESSAGE_PATROLRESPONSE_H


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
struct PatrolResponse_
{
  typedef PatrolResponse_<ContainerAllocator> Type;

  PatrolResponse_()
    : result(false)  {
    }
  PatrolResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::transbot_msgs::PatrolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::PatrolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PatrolResponse_

typedef ::transbot_msgs::PatrolResponse_<std::allocator<void> > PatrolResponse;

typedef boost::shared_ptr< ::transbot_msgs::PatrolResponse > PatrolResponsePtr;
typedef boost::shared_ptr< ::transbot_msgs::PatrolResponse const> PatrolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::PatrolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::PatrolResponse_<ContainerAllocator1> & lhs, const ::transbot_msgs::PatrolResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::PatrolResponse_<ContainerAllocator1> & lhs, const ::transbot_msgs::PatrolResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::PatrolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::PatrolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::PatrolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::transbot_msgs::PatrolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/PatrolResponse";
  }

  static const char* value(const ::transbot_msgs::PatrolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"bool result\n"
;
  }

  static const char* value(const ::transbot_msgs::PatrolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PatrolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::PatrolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::PatrolResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_PATROLRESPONSE_H
