// Generated by gencpp from file turtlebot3_msgs/SensorState.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_MSGS_MESSAGE_SENSORSTATE_H
#define TURTLEBOT3_MSGS_MESSAGE_SENSORSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot3_msgs
{
template <class ContainerAllocator>
struct SensorState_
{
  typedef SensorState_<ContainerAllocator> Type;

  SensorState_()
    : stamp()
    , bumper(0)
    , cliff(0)
    , button(0)
    , left_encoder(0)
    , right_encoder(0)
    , battery(0.0)  {
    }
  SensorState_(const ContainerAllocator& _alloc)
    : stamp()
    , bumper(0)
    , cliff(0)
    , button(0)
    , left_encoder(0)
    , right_encoder(0)
    , battery(0.0)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef uint8_t _bumper_type;
  _bumper_type bumper;

   typedef uint8_t _cliff_type;
  _cliff_type cliff;

   typedef uint8_t _button_type;
  _button_type button;

   typedef int32_t _left_encoder_type;
  _left_encoder_type left_encoder;

   typedef int32_t _right_encoder_type;
  _right_encoder_type right_encoder;

   typedef float _battery_type;
  _battery_type battery;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(BUMPER_RIGHT)
  #undef BUMPER_RIGHT
#endif
#if defined(_WIN32) && defined(BUMPER_CENTER)
  #undef BUMPER_CENTER
#endif
#if defined(_WIN32) && defined(BUMPER_LEFT)
  #undef BUMPER_LEFT
#endif
#if defined(_WIN32) && defined(CLIFF_RIGHT)
  #undef CLIFF_RIGHT
#endif
#if defined(_WIN32) && defined(CLIFF_CENTER)
  #undef CLIFF_CENTER
#endif
#if defined(_WIN32) && defined(CLIFF_LEFT)
  #undef CLIFF_LEFT
#endif
#if defined(_WIN32) && defined(BUTTON0)
  #undef BUTTON0
#endif
#if defined(_WIN32) && defined(BUTTON1)
  #undef BUTTON1
#endif
#if defined(_WIN32) && defined(BUTTON2)
  #undef BUTTON2
#endif
#if defined(_WIN32) && defined(ERROR_LEFT_MOTOR)
  #undef ERROR_LEFT_MOTOR
#endif
#if defined(_WIN32) && defined(ERROR_RIGHT_MOTOR)
  #undef ERROR_RIGHT_MOTOR
#endif

  enum {
    BUMPER_RIGHT = 1u,
    BUMPER_CENTER = 2u,
    BUMPER_LEFT = 4u,
    CLIFF_RIGHT = 1u,
    CLIFF_CENTER = 2u,
    CLIFF_LEFT = 4u,
    BUTTON0 = 1u,
    BUTTON1 = 2u,
    BUTTON2 = 4u,
    ERROR_LEFT_MOTOR = 1u,
    ERROR_RIGHT_MOTOR = 2u,
  };


  typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const> ConstPtr;

}; // struct SensorState_

typedef ::turtlebot3_msgs::SensorState_<std::allocator<void> > SensorState;

typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState > SensorStatePtr;
typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState const> SensorStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_msgs::SensorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlebot3_msgs::SensorState_<ContainerAllocator1> & lhs, const ::turtlebot3_msgs::SensorState_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.bumper == rhs.bumper &&
    lhs.cliff == rhs.cliff &&
    lhs.button == rhs.button &&
    lhs.left_encoder == rhs.left_encoder &&
    lhs.right_encoder == rhs.right_encoder &&
    lhs.battery == rhs.battery;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlebot3_msgs::SensorState_<ContainerAllocator1> & lhs, const ::turtlebot3_msgs::SensorState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlebot3_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "427f77f85da38bc1aa3f65ffb673c94c";
  }

  static const char* value(const ::turtlebot3_msgs::SensorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x427f77f85da38bc1ULL;
  static const uint64_t static_value2 = 0xaa3f65ffb673c94cULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_msgs/SensorState";
  }

  static const char* value(const ::turtlebot3_msgs::SensorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "########################################\n"
"# CONSTANTS\n"
"########################################\n"
"# Bumper states (states are combined, when multiple bumpers are pressed)\n"
"uint8 BUMPER_RIGHT  = 1\n"
"uint8 BUMPER_CENTER = 2\n"
"uint8 BUMPER_LEFT   = 4\n"
"\n"
"# Cliff sensor states (states are combined, when multiple cliff sensors are triggered)\n"
"uint8 CLIFF_RIGHT  = 1\n"
"uint8 CLIFF_CENTER = 2\n"
"uint8 CLIFF_LEFT   = 4\n"
"\n"
"# Button states (only one button can be triggered at a time)\n"
"uint8 BUTTON0 = 1\n"
"uint8 BUTTON1 = 2\n"
"uint8 BUTTON2 = 4\n"
"\n"
"# Motor errors\n"
"uint8 ERROR_LEFT_MOTOR  = 1\n"
"uint8 ERROR_RIGHT_MOTOR = 2\n"
"\n"
"########################################\n"
"# Messages\n"
"########################################\n"
"time stamp\n"
"uint8  bumper\n"
"uint8  cliff\n"
"uint8  button\n"
"int32  left_encoder    # (-2,147,483,648 ~ 2,147,483,647)\n"
"int32  right_encoder   # (-2,147,483,648 ~ 2,147,483,647)\n"
"float32  battery\n"
;
  }

  static const char* value(const ::turtlebot3_msgs::SensorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.bumper);
      stream.next(m.cliff);
      stream.next(m.button);
      stream.next(m.left_encoder);
      stream.next(m.right_encoder);
      stream.next(m.battery);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_msgs::SensorState_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "bumper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bumper);
    s << indent << "cliff: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff);
    s << indent << "button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.button);
    s << indent << "left_encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.left_encoder);
    s << indent << "right_encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.right_encoder);
    s << indent << "battery: ";
    Printer<float>::stream(s, indent + "  ", v.battery);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_MSGS_MESSAGE_SENSORSTATE_H
