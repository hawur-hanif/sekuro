// Generated by gencpp from file ros_service_python/magnitude.msg
// DO NOT EDIT!


#ifndef ROS_SERVICE_PYTHON_MESSAGE_MAGNITUDE_H
#define ROS_SERVICE_PYTHON_MESSAGE_MAGNITUDE_H

#include <ros/service_traits.h>


#include <ros_service_python/magnitudeRequest.h>
#include <ros_service_python/magnitudeResponse.h>


namespace ros_service_python
{

struct magnitude
{

typedef magnitudeRequest Request;
typedef magnitudeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct magnitude
} // namespace ros_service_python


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_service_python::magnitude > {
  static const char* value()
  {
    return "55d1a215f43fd1f64eb105a505b172c4";
  }

  static const char* value(const ::ros_service_python::magnitude&) { return value(); }
};

template<>
struct DataType< ::ros_service_python::magnitude > {
  static const char* value()
  {
    return "ros_service_python/magnitude";
  }

  static const char* value(const ::ros_service_python::magnitude&) { return value(); }
};


// service_traits::MD5Sum< ::ros_service_python::magnitudeRequest> should match
// service_traits::MD5Sum< ::ros_service_python::magnitude >
template<>
struct MD5Sum< ::ros_service_python::magnitudeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_service_python::magnitude >::value();
  }
  static const char* value(const ::ros_service_python::magnitudeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_service_python::magnitudeRequest> should match
// service_traits::DataType< ::ros_service_python::magnitude >
template<>
struct DataType< ::ros_service_python::magnitudeRequest>
{
  static const char* value()
  {
    return DataType< ::ros_service_python::magnitude >::value();
  }
  static const char* value(const ::ros_service_python::magnitudeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_service_python::magnitudeResponse> should match
// service_traits::MD5Sum< ::ros_service_python::magnitude >
template<>
struct MD5Sum< ::ros_service_python::magnitudeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_service_python::magnitude >::value();
  }
  static const char* value(const ::ros_service_python::magnitudeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_service_python::magnitudeResponse> should match
// service_traits::DataType< ::ros_service_python::magnitude >
template<>
struct DataType< ::ros_service_python::magnitudeResponse>
{
  static const char* value()
  {
    return DataType< ::ros_service_python::magnitude >::value();
  }
  static const char* value(const ::ros_service_python::magnitudeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_SERVICE_PYTHON_MESSAGE_MAGNITUDE_H