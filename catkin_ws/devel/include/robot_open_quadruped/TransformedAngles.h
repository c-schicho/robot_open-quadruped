// Generated by gencpp from file robot_open_quadruped/TransformedAngles.msg
// DO NOT EDIT!


#ifndef ROBOT_OPEN_QUADRUPED_MESSAGE_TRANSFORMEDANGLES_H
#define ROBOT_OPEN_QUADRUPED_MESSAGE_TRANSFORMEDANGLES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_open_quadruped
{
template <class ContainerAllocator>
struct TransformedAngles_
{
  typedef TransformedAngles_<ContainerAllocator> Type;

  TransformedAngles_()
    : angles()  {
    }
  TransformedAngles_(const ContainerAllocator& _alloc)
    : angles(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _angles_type;
  _angles_type angles;





  typedef boost::shared_ptr< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> const> ConstPtr;

}; // struct TransformedAngles_

typedef ::robot_open_quadruped::TransformedAngles_<std::allocator<void> > TransformedAngles;

typedef boost::shared_ptr< ::robot_open_quadruped::TransformedAngles > TransformedAnglesPtr;
typedef boost::shared_ptr< ::robot_open_quadruped::TransformedAngles const> TransformedAnglesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator1> & lhs, const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator2> & rhs)
{
  return lhs.angles == rhs.angles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator1> & lhs, const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_open_quadruped

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "900e68ab26db7b254c95cc40be37fb5c";
  }

  static const char* value(const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x900e68ab26db7b25ULL;
  static const uint64_t static_value2 = 0x4c95cc40be37fb5cULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_open_quadruped/TransformedAngles";
  }

  static const char* value(const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] angles\n"
;
  }

  static const char* value(const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransformedAngles_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_open_quadruped::TransformedAngles_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_open_quadruped::TransformedAngles_<ContainerAllocator>& v)
  {
    s << indent << "angles[]" << std::endl;
    for (size_t i = 0; i < v.angles.size(); ++i)
    {
      s << indent << "  angles[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_OPEN_QUADRUPED_MESSAGE_TRANSFORMEDANGLES_H
