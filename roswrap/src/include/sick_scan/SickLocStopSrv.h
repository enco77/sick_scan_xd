// Generated by gencpp from file sick_scan/SickLocStopSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSTOPSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSTOPSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocStopSrvRequest.h>
#include <sick_scan/SickLocStopSrvResponse.h>


namespace sick_scan
{

struct SickLocStopSrv
{

typedef SickLocStopSrvRequest Request;
typedef SickLocStopSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocStopSrv
} // namespace sick_scan


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocStopSrv > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan::SickLocStopSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocStopSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocStopSrv";
  }

  static const char* value(const ::sick_scan::SickLocStopSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocStopSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocStopSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocStopSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocStopSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocStopSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocStopSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocStopSrv >
template<>
struct DataType< ::sick_scan::SickLocStopSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocStopSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocStopSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocStopSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocStopSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocStopSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocStopSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocStopSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocStopSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocStopSrv >
template<>
struct DataType< ::sick_scan::SickLocStopSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocStopSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocStopSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCSTOPSRV_H