// Generated by gencpp from file nav2d_navigator/ExploreFeedback.msg
// DO NOT EDIT!


#ifndef NAV2D_NAVIGATOR_MESSAGE_EXPLOREFEEDBACK_H
#define NAV2D_NAVIGATOR_MESSAGE_EXPLOREFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace nav2d_navigator
{
template <class ContainerAllocator>
struct ExploreFeedback_
{
  typedef ExploreFeedback_<ContainerAllocator> Type;

  ExploreFeedback_()
    : robot_pose()
    , target_pose()
    , distance(0.0)  {
    }
  ExploreFeedback_(const ContainerAllocator& _alloc)
    : robot_pose(_alloc)
    , target_pose(_alloc)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _robot_pose_type;
  _robot_pose_type robot_pose;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _target_pose_type;
  _target_pose_type target_pose;

   typedef float _distance_type;
  _distance_type distance;




  typedef boost::shared_ptr< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ExploreFeedback_

typedef ::nav2d_navigator::ExploreFeedback_<std::allocator<void> > ExploreFeedback;

typedef boost::shared_ptr< ::nav2d_navigator::ExploreFeedback > ExploreFeedbackPtr;
typedef boost::shared_ptr< ::nav2d_navigator::ExploreFeedback const> ExploreFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nav2d_navigator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav2d_navigator': ['/home/fregu856/TSRT10/catkin_ws/devel/share/nav2d_navigator/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e64a606b3357bbb098996ab9c2799a9f";
  }

  static const char* value(const ::nav2d_navigator::ExploreFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe64a606b3357bbb0ULL;
  static const uint64_t static_value2 = 0x98996ab9c2799a9fULL;
};

template<class ContainerAllocator>
struct DataType< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav2d_navigator/ExploreFeedback";
  }

  static const char* value(const ::nav2d_navigator::ExploreFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
geometry_msgs/Pose2D robot_pose\n\
geometry_msgs/Pose2D target_pose\n\
float32 distance\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::nav2d_navigator::ExploreFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robot_pose);
      stream.next(m.target_pose);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExploreFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav2d_navigator::ExploreFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav2d_navigator::ExploreFeedback_<ContainerAllocator>& v)
  {
    s << indent << "robot_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.robot_pose);
    s << indent << "target_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.target_pose);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV2D_NAVIGATOR_MESSAGE_EXPLOREFEEDBACK_H
