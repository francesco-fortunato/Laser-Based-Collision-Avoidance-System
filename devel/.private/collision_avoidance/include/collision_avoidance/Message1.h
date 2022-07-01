// Generated by gencpp from file collision_avoidance/Message1.msg
// DO NOT EDIT!


#ifndef COLLISION_AVOIDANCE_MESSAGE_MESSAGE1_H
#define COLLISION_AVOIDANCE_MESSAGE_MESSAGE1_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace collision_avoidance
{
template <class ContainerAllocator>
struct Message1_
{
  typedef Message1_<ContainerAllocator> Type;

  Message1_()
    : partito(false)
    , linaer_velocity(0.0)
    , angular_velocity(0.0)  {
    }
  Message1_(const ContainerAllocator& _alloc)
    : partito(false)
    , linaer_velocity(0.0)
    , angular_velocity(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _partito_type;
  _partito_type partito;

   typedef float _linaer_velocity_type;
  _linaer_velocity_type linaer_velocity;

   typedef float _angular_velocity_type;
  _angular_velocity_type angular_velocity;





  typedef boost::shared_ptr< ::collision_avoidance::Message1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::collision_avoidance::Message1_<ContainerAllocator> const> ConstPtr;

}; // struct Message1_

typedef ::collision_avoidance::Message1_<std::allocator<void> > Message1;

typedef boost::shared_ptr< ::collision_avoidance::Message1 > Message1Ptr;
typedef boost::shared_ptr< ::collision_avoidance::Message1 const> Message1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::collision_avoidance::Message1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::collision_avoidance::Message1_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::collision_avoidance::Message1_<ContainerAllocator1> & lhs, const ::collision_avoidance::Message1_<ContainerAllocator2> & rhs)
{
  return lhs.partito == rhs.partito &&
    lhs.linaer_velocity == rhs.linaer_velocity &&
    lhs.angular_velocity == rhs.angular_velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::collision_avoidance::Message1_<ContainerAllocator1> & lhs, const ::collision_avoidance::Message1_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace collision_avoidance

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::collision_avoidance::Message1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::collision_avoidance::Message1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::collision_avoidance::Message1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::collision_avoidance::Message1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::collision_avoidance::Message1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::collision_avoidance::Message1_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::collision_avoidance::Message1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0f279fd92a14d96829a9ff564b4fe61";
  }

  static const char* value(const ::collision_avoidance::Message1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0f279fd92a14d96ULL;
  static const uint64_t static_value2 = 0x829a9ff564b4fe61ULL;
};

template<class ContainerAllocator>
struct DataType< ::collision_avoidance::Message1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "collision_avoidance/Message1";
  }

  static const char* value(const ::collision_avoidance::Message1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::collision_avoidance::Message1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool partito\n"
"float32 linaer_velocity\n"
"float32 angular_velocity\n"
;
  }

  static const char* value(const ::collision_avoidance::Message1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::collision_avoidance::Message1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.partito);
      stream.next(m.linaer_velocity);
      stream.next(m.angular_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Message1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::collision_avoidance::Message1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::collision_avoidance::Message1_<ContainerAllocator>& v)
  {
    s << indent << "partito: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.partito);
    s << indent << "linaer_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.linaer_velocity);
    s << indent << "angular_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.angular_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COLLISION_AVOIDANCE_MESSAGE_MESSAGE1_H
