// Generated by gencpp from file collision_avoidance/custom.msg
// DO NOT EDIT!


#ifndef COLLISION_AVOIDANCE_MESSAGE_CUSTOM_H
#define COLLISION_AVOIDANCE_MESSAGE_CUSTOM_H


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
struct custom_
{
  typedef custom_<ContainerAllocator> Type;

  custom_()
    : started(false)
    , linaer_velocity(0.0)
    , angular_velocity(0.0)  {
    }
  custom_(const ContainerAllocator& _alloc)
    : started(false)
    , linaer_velocity(0.0)
    , angular_velocity(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _started_type;
  _started_type started;

   typedef float _linaer_velocity_type;
  _linaer_velocity_type linaer_velocity;

   typedef float _angular_velocity_type;
  _angular_velocity_type angular_velocity;





  typedef boost::shared_ptr< ::collision_avoidance::custom_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::collision_avoidance::custom_<ContainerAllocator> const> ConstPtr;

}; // struct custom_

typedef ::collision_avoidance::custom_<std::allocator<void> > custom;

typedef boost::shared_ptr< ::collision_avoidance::custom > customPtr;
typedef boost::shared_ptr< ::collision_avoidance::custom const> customConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::collision_avoidance::custom_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::collision_avoidance::custom_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::collision_avoidance::custom_<ContainerAllocator1> & lhs, const ::collision_avoidance::custom_<ContainerAllocator2> & rhs)
{
  return lhs.started == rhs.started &&
    lhs.linaer_velocity == rhs.linaer_velocity &&
    lhs.angular_velocity == rhs.angular_velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::collision_avoidance::custom_<ContainerAllocator1> & lhs, const ::collision_avoidance::custom_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace collision_avoidance

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::collision_avoidance::custom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::collision_avoidance::custom_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::collision_avoidance::custom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::collision_avoidance::custom_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::collision_avoidance::custom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::collision_avoidance::custom_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::collision_avoidance::custom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c45fdadcf7f0ff78418b31fecc804fc";
  }

  static const char* value(const ::collision_avoidance::custom_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c45fdadcf7f0ff7ULL;
  static const uint64_t static_value2 = 0x8418b31fecc804fcULL;
};

template<class ContainerAllocator>
struct DataType< ::collision_avoidance::custom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "collision_avoidance/custom";
  }

  static const char* value(const ::collision_avoidance::custom_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::collision_avoidance::custom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool started\n"
"float32 linaer_velocity\n"
"float32 angular_velocity\n"
;
  }

  static const char* value(const ::collision_avoidance::custom_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::collision_avoidance::custom_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.started);
      stream.next(m.linaer_velocity);
      stream.next(m.angular_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct custom_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::collision_avoidance::custom_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::collision_avoidance::custom_<ContainerAllocator>& v)
  {
    s << indent << "started: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.started);
    s << indent << "linaer_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.linaer_velocity);
    s << indent << "angular_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.angular_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COLLISION_AVOIDANCE_MESSAGE_CUSTOM_H
