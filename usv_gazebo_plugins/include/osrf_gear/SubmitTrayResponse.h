// Generated by gencpp from file osrf_gear/SubmitTrayResponse.msg
// DO NOT EDIT!


#ifndef OSRF_GEAR_MESSAGE_SUBMITTRAYRESPONSE_H
#define OSRF_GEAR_MESSAGE_SUBMITTRAYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace osrf_gear
{
template <class ContainerAllocator>
struct SubmitTrayResponse_
{
  typedef SubmitTrayResponse_<ContainerAllocator> Type;

  SubmitTrayResponse_()
    : success(false)
    , inspection_result(0.0)  {
    }
  SubmitTrayResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , inspection_result(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef float _inspection_result_type;
  _inspection_result_type inspection_result;





  typedef boost::shared_ptr< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SubmitTrayResponse_

typedef ::osrf_gear::SubmitTrayResponse_<std::allocator<void> > SubmitTrayResponse;

typedef boost::shared_ptr< ::osrf_gear::SubmitTrayResponse > SubmitTrayResponsePtr;
typedef boost::shared_ptr< ::osrf_gear::SubmitTrayResponse const> SubmitTrayResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace osrf_gear

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'osrf_gear': ['/home/chuanhui/ariac_ws/src/ariac/osrf_gear/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a81550f277a1c03d6d98406331d270c2";
  }

  static const char* value(const ::osrf_gear::SubmitTrayResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa81550f277a1c03dULL;
  static const uint64_t static_value2 = 0x6d98406331d270c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "osrf_gear/SubmitTrayResponse";
  }

  static const char* value(const ::osrf_gear::SubmitTrayResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
float32 inspection_result\n\
\n\
";
  }

  static const char* value(const ::osrf_gear::SubmitTrayResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.inspection_result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubmitTrayResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::osrf_gear::SubmitTrayResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::osrf_gear::SubmitTrayResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "inspection_result: ";
    Printer<float>::stream(s, indent + "  ", v.inspection_result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OSRF_GEAR_MESSAGE_SUBMITTRAYRESPONSE_H
