#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocTimeSyncSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCTIMESYNCSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCTIMESYNCSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocTimeSyncSrvRequest.h>
#include <sick_scan/SickLocTimeSyncSrvResponse.h>


namespace sick_scan
{

struct SickLocTimeSyncSrv
{

typedef SickLocTimeSyncSrvRequest Request;
typedef SickLocTimeSyncSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocTimeSyncSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocTimeSyncSrv > {
  static const char* value()
  {
    return "216ce2f222e12099ae0a51b3bd3cad26";
  }

  static const char* value(const ::sick_scan::SickLocTimeSyncSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocTimeSyncSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocTimeSyncSrv";
  }

  static const char* value(const ::sick_scan::SickLocTimeSyncSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocTimeSyncSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocTimeSyncSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocTimeSyncSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocTimeSyncSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocTimeSyncSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocTimeSyncSrv >
template<>
struct DataType< ::sick_scan::SickLocTimeSyncSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocTimeSyncSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocTimeSyncSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocTimeSyncSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocTimeSyncSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocTimeSyncSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocTimeSyncSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocTimeSyncSrv >
template<>
struct DataType< ::sick_scan::SickLocTimeSyncSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocTimeSyncSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCTIMESYNCSRV_H
