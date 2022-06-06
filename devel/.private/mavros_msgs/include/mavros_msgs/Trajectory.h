// Generated by gencpp from file mavros_msgs/Trajectory.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_TRAJECTORY_H
#define MAVROS_MSGS_MESSAGE_TRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <mavros_msgs/PositionTarget.h>
#include <mavros_msgs/PositionTarget.h>
#include <mavros_msgs/PositionTarget.h>
#include <mavros_msgs/PositionTarget.h>
#include <mavros_msgs/PositionTarget.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct Trajectory_
{
  typedef Trajectory_<ContainerAllocator> Type;

  Trajectory_()
    : header()
    , type(0)
    , point_1()
    , point_2()
    , point_3()
    , point_4()
    , point_5()
    , point_valid()
    , command()
    , time_horizon()  {
      point_valid.assign(0);

      command.assign(0);

      time_horizon.assign(0.0);
  }
  Trajectory_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(0)
    , point_1(_alloc)
    , point_2(_alloc)
    , point_3(_alloc)
    , point_4(_alloc)
    , point_5(_alloc)
    , point_valid()
    , command()
    , time_horizon()  {
  (void)_alloc;
      point_valid.assign(0);

      command.assign(0);

      time_horizon.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _type_type;
  _type_type type;

   typedef  ::mavros_msgs::PositionTarget_<ContainerAllocator>  _point_1_type;
  _point_1_type point_1;

   typedef  ::mavros_msgs::PositionTarget_<ContainerAllocator>  _point_2_type;
  _point_2_type point_2;

   typedef  ::mavros_msgs::PositionTarget_<ContainerAllocator>  _point_3_type;
  _point_3_type point_3;

   typedef  ::mavros_msgs::PositionTarget_<ContainerAllocator>  _point_4_type;
  _point_4_type point_4;

   typedef  ::mavros_msgs::PositionTarget_<ContainerAllocator>  _point_5_type;
  _point_5_type point_5;

   typedef boost::array<uint8_t, 5>  _point_valid_type;
  _point_valid_type point_valid;

   typedef boost::array<uint16_t, 5>  _command_type;
  _command_type command;

   typedef boost::array<float, 5>  _time_horizon_type;
  _time_horizon_type time_horizon;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS)
  #undef MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS
#endif
#if defined(_WIN32) && defined(MAV_TRAJECTORY_REPRESENTATION_BEZIER)
  #undef MAV_TRAJECTORY_REPRESENTATION_BEZIER
#endif

  enum {
    MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS = 0u,
    MAV_TRAJECTORY_REPRESENTATION_BEZIER = 1u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::Trajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::Trajectory_<ContainerAllocator> const> ConstPtr;

}; // struct Trajectory_

typedef ::mavros_msgs::Trajectory_<std::allocator<void> > Trajectory;

typedef boost::shared_ptr< ::mavros_msgs::Trajectory > TrajectoryPtr;
typedef boost::shared_ptr< ::mavros_msgs::Trajectory const> TrajectoryConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::Trajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::Trajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::Trajectory_<ContainerAllocator1> & lhs, const ::mavros_msgs::Trajectory_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.type == rhs.type &&
    lhs.point_1 == rhs.point_1 &&
    lhs.point_2 == rhs.point_2 &&
    lhs.point_3 == rhs.point_3 &&
    lhs.point_4 == rhs.point_4 &&
    lhs.point_5 == rhs.point_5 &&
    lhs.point_valid == rhs.point_valid &&
    lhs.command == rhs.command &&
    lhs.time_horizon == rhs.time_horizon;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::Trajectory_<ContainerAllocator1> & lhs, const ::mavros_msgs::Trajectory_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Trajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Trajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "477b47a103394ad6be940e5705f338e8";
  }

  static const char* value(const ::mavros_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x477b47a103394ad6ULL;
  static const uint64_t static_value2 = 0xbe940e5705f338e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/Trajectory";
  }

  static const char* value(const ::mavros_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MAVLink message: TRAJECTORY\n"
"# https://mavlink.io/en/messages/common.html#TRAJECTORY\n"
"\n"
"std_msgs/Header header\n"
"\n"
"uint8 type # See enum MAV_TRAJECTORY_REPRESENTATION.\n"
"uint8 MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS = 0\n"
"uint8 MAV_TRAJECTORY_REPRESENTATION_BEZIER = 1\n"
"\n"
"mavros_msgs/PositionTarget point_1\n"
"mavros_msgs/PositionTarget point_2\n"
"mavros_msgs/PositionTarget point_3\n"
"mavros_msgs/PositionTarget point_4\n"
"mavros_msgs/PositionTarget point_5\n"
"\n"
"uint8[5] point_valid # States if respective point is valid.\n"
"uint16[5] command # MAV_CMD associated with each point. UINT16_MAX if unused.\n"
"\n"
"float32[5] time_horizon # if type MAV_TRAJECTORY_REPRESENTATION_BEZIER, it represents the time horizon for each point, otherwise set to NaN\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: mavros_msgs/PositionTarget\n"
"# Message for SET_POSITION_TARGET_LOCAL_NED\n"
"#\n"
"# Some complex system requires all feautures that mavlink\n"
"# message provide. See issue #402.\n"
"\n"
"std_msgs/Header header\n"
"\n"
"uint8 coordinate_frame\n"
"uint8 FRAME_LOCAL_NED = 1\n"
"uint8 FRAME_LOCAL_OFFSET_NED = 7\n"
"uint8 FRAME_BODY_NED = 8\n"
"uint8 FRAME_BODY_OFFSET_NED = 9\n"
"\n"
"uint16 type_mask\n"
"uint16 IGNORE_PX = 1	# Position ignore flags\n"
"uint16 IGNORE_PY = 2\n"
"uint16 IGNORE_PZ = 4\n"
"uint16 IGNORE_VX = 8	# Velocity vector ignore flags\n"
"uint16 IGNORE_VY = 16\n"
"uint16 IGNORE_VZ = 32\n"
"uint16 IGNORE_AFX = 64	# Acceleration/Force vector ignore flags\n"
"uint16 IGNORE_AFY = 128\n"
"uint16 IGNORE_AFZ = 256\n"
"uint16 FORCE = 512	# Force in af vector flag\n"
"uint16 IGNORE_YAW = 1024\n"
"uint16 IGNORE_YAW_RATE = 2048\n"
"\n"
"geometry_msgs/Point position\n"
"geometry_msgs/Vector3 velocity\n"
"geometry_msgs/Vector3 acceleration_or_force\n"
"float32 yaw\n"
"float32 yaw_rate\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::mavros_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::Trajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.point_1);
      stream.next(m.point_2);
      stream.next(m.point_3);
      stream.next(m.point_4);
      stream.next(m.point_5);
      stream.next(m.point_valid);
      stream.next(m.command);
      stream.next(m.time_horizon);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Trajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::Trajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::Trajectory_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "point_1: ";
    s << std::endl;
    Printer< ::mavros_msgs::PositionTarget_<ContainerAllocator> >::stream(s, indent + "  ", v.point_1);
    s << indent << "point_2: ";
    s << std::endl;
    Printer< ::mavros_msgs::PositionTarget_<ContainerAllocator> >::stream(s, indent + "  ", v.point_2);
    s << indent << "point_3: ";
    s << std::endl;
    Printer< ::mavros_msgs::PositionTarget_<ContainerAllocator> >::stream(s, indent + "  ", v.point_3);
    s << indent << "point_4: ";
    s << std::endl;
    Printer< ::mavros_msgs::PositionTarget_<ContainerAllocator> >::stream(s, indent + "  ", v.point_4);
    s << indent << "point_5: ";
    s << std::endl;
    Printer< ::mavros_msgs::PositionTarget_<ContainerAllocator> >::stream(s, indent + "  ", v.point_5);
    s << indent << "point_valid[]" << std::endl;
    for (size_t i = 0; i < v.point_valid.size(); ++i)
    {
      s << indent << "  point_valid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.point_valid[i]);
    }
    s << indent << "command[]" << std::endl;
    for (size_t i = 0; i < v.command.size(); ++i)
    {
      s << indent << "  command[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.command[i]);
    }
    s << indent << "time_horizon[]" << std::endl;
    for (size_t i = 0; i < v.time_horizon.size(); ++i)
    {
      s << indent << "  time_horizon[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.time_horizon[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_TRAJECTORY_H