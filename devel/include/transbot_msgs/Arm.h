// Generated by gencpp from file transbot_msgs/Arm.msg
// DO NOT EDIT!


#ifndef TRANSBOT_MSGS_MESSAGE_ARM_H
#define TRANSBOT_MSGS_MESSAGE_ARM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <transbot_msgs/Joint.h>

namespace transbot_msgs
{
template <class ContainerAllocator>
struct Arm_
{
  typedef Arm_<ContainerAllocator> Type;

  Arm_()
    : joint()  {
    }
  Arm_(const ContainerAllocator& _alloc)
    : joint(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::transbot_msgs::Joint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::transbot_msgs::Joint_<ContainerAllocator> >::other >  _joint_type;
  _joint_type joint;





  typedef boost::shared_ptr< ::transbot_msgs::Arm_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transbot_msgs::Arm_<ContainerAllocator> const> ConstPtr;

}; // struct Arm_

typedef ::transbot_msgs::Arm_<std::allocator<void> > Arm;

typedef boost::shared_ptr< ::transbot_msgs::Arm > ArmPtr;
typedef boost::shared_ptr< ::transbot_msgs::Arm const> ArmConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transbot_msgs::Arm_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transbot_msgs::Arm_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transbot_msgs::Arm_<ContainerAllocator1> & lhs, const ::transbot_msgs::Arm_<ContainerAllocator2> & rhs)
{
  return lhs.joint == rhs.joint;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transbot_msgs::Arm_<ContainerAllocator1> & lhs, const ::transbot_msgs::Arm_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::Arm_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transbot_msgs::Arm_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::Arm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transbot_msgs::Arm_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::Arm_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transbot_msgs::Arm_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transbot_msgs::Arm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b46d7c4342769b3898ee5c56a7392dd2";
  }

  static const char* value(const ::transbot_msgs::Arm_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb46d7c4342769b38ULL;
  static const uint64_t static_value2 = 0x98ee5c56a7392dd2ULL;
};

template<class ContainerAllocator>
struct DataType< ::transbot_msgs::Arm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transbot_msgs/Arm";
  }

  static const char* value(const ::transbot_msgs::Arm_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transbot_msgs::Arm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Joint[] joint\n"
"\n"
"================================================================================\n"
"MSG: transbot_msgs/Joint\n"
"int32 id\n"
"int32 run_time\n"
"float32 angle\n"
;
  }

  static const char* value(const ::transbot_msgs::Arm_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transbot_msgs::Arm_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Arm_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transbot_msgs::Arm_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transbot_msgs::Arm_<ContainerAllocator>& v)
  {
    s << indent << "joint[]" << std::endl;
    for (size_t i = 0; i < v.joint.size(); ++i)
    {
      s << indent << "  joint[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::transbot_msgs::Joint_<ContainerAllocator> >::stream(s, indent + "    ", v.joint[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSBOT_MSGS_MESSAGE_ARM_H
