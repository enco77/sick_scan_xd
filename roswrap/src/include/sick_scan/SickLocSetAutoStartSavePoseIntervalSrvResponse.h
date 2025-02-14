#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetAutoStartSavePoseIntervalSrvResponse.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETAUTOSTARTSAVEPOSEINTERVALSRVRESPONSE_H
#define SICK_SCAN_MESSAGE_SICKLOCSETAUTOSTARTSAVEPOSEINTERVALSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocSetAutoStartSavePoseIntervalSrvResponse_
{
  typedef SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> Type;

  SickLocSetAutoStartSavePoseIntervalSrvResponse_()
    : success(false)  {
    }
  SickLocSetAutoStartSavePoseIntervalSrvResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef std::shared_ptr< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocSetAutoStartSavePoseIntervalSrvResponse_

typedef ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<std::allocator<void> > SickLocSetAutoStartSavePoseIntervalSrvResponse;

typedef std::shared_ptr< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse > SickLocSetAutoStartSavePoseIntervalSrvResponsePtr;
typedef std::shared_ptr< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse const> SickLocSetAutoStartSavePoseIntervalSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocSetAutoStartSavePoseIntervalSrvResponse";
  }

  static const char* value(const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# \n"
"# Response (output)\n"
"# \n"
"\n"
"bool success # true: success response received from localization controller, false: service failed (timeout or error status from controller)\n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocSetAutoStartSavePoseIntervalSrvResponse_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::SickLocSetAutoStartSavePoseIntervalSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETAUTOSTARTSAVEPOSEINTERVALSRVRESPONSE_H
