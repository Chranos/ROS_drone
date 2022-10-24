// Generated by gencpp from file transbot_msgs/Edition.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_EDITION_H
#define TRANSBOT_MSGS_MESSAGE_EDITION_H


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
struct Edition_
{
  typedef Edition_<ContainerAllocator> Type;

  Edition_()
    : edition(0.0)  {
    }
  Edition_(const ContainerAllocator& _alloc)
    : edition(0.0)  {
  (void)_alloc;
    }



   typedef float _edition_type;
  _edition_type edition;





  typedef boost::shared_ptr< ::transbot_msgs::Edition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::Edition_<ContainerAllocator> const> ConstPtr;

}; // struct Edition_

typedef ::transbot_msgs::Edition_<std::allocator<void> > Edition;

typedef boost::shared_ptr< ::transbot_msgs::Edition > EditionPtr;
typedef boost::shared_ptr< ::transbot_msgs::Edition const> EditionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::Edition_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::Edition_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::Edition_<ContainerAllocator1> & lhs, const ::transbot_msgs::Edition_<ContainerAllocator2> & rhs)
{
  return lhs.edition == rhs.edition;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::Edition_<ContainerAllocator1> & lhs, const ::transbot_msgs::Edition_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::Edition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::Edition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::Edition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::Edition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::Edition_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::Edition_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::Edition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "373df2b35ba40a1a8b8afa0bf078b756";
  }

  static const char* value(const ::transbot_msgs::Edition_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x373df2b35ba40a1aULL;
  static const uint64_t static_value2 = 0x8b8afa0bf078b756ULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::Edition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/Edition";
  }

  static const char* value(const ::transbot_msgs::Edition_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::Edition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 edition\n"
;
  }

  static const char* value(const ::transbot_msgs::Edition_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::Edition_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.edition);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Edition_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::Edition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::Edition_<ContainerAllocator>& v)
  {
    s << indent << "edition: ";
    Printer<float>::stream(s, indent + "  ", v.edition);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_EDITION_H
