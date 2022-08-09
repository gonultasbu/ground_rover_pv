// Generated by gencpp from file ds4_driver/Status.msg
// DO NOT EDIT!


#ifndef DS4_DRIVER_MESSAGE_STATUS_H
#define DS4_DRIVER_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Imu.h>
#include <ds4_driver/Trackpad.h>
#include <ds4_driver/Trackpad.h>

namespace ds4_driver
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : header()
    , axis_left_x(0.0)
    , axis_left_y(0.0)
    , axis_right_x(0.0)
    , axis_right_y(0.0)
    , axis_l2(0.0)
    , axis_r2(0.0)
    , button_dpad_up(0)
    , button_dpad_down(0)
    , button_dpad_left(0)
    , button_dpad_right(0)
    , button_cross(0)
    , button_circle(0)
    , button_square(0)
    , button_triangle(0)
    , button_l1(0)
    , button_l2(0)
    , button_l3(0)
    , button_r1(0)
    , button_r2(0)
    , button_r3(0)
    , button_share(0)
    , button_options(0)
    , button_trackpad(0)
    , button_ps(0)
    , imu()
    , battery_percentage(0.0)
    , battery_full_charging(0)
    , touch0()
    , touch1()
    , plug_usb(0)
    , plug_audio(0)
    , plug_mic(0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , axis_left_x(0.0)
    , axis_left_y(0.0)
    , axis_right_x(0.0)
    , axis_right_y(0.0)
    , axis_l2(0.0)
    , axis_r2(0.0)
    , button_dpad_up(0)
    , button_dpad_down(0)
    , button_dpad_left(0)
    , button_dpad_right(0)
    , button_cross(0)
    , button_circle(0)
    , button_square(0)
    , button_triangle(0)
    , button_l1(0)
    , button_l2(0)
    , button_l3(0)
    , button_r1(0)
    , button_r2(0)
    , button_r3(0)
    , button_share(0)
    , button_options(0)
    , button_trackpad(0)
    , button_ps(0)
    , imu(_alloc)
    , battery_percentage(0.0)
    , battery_full_charging(0)
    , touch0(_alloc)
    , touch1(_alloc)
    , plug_usb(0)
    , plug_audio(0)
    , plug_mic(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _axis_left_x_type;
  _axis_left_x_type axis_left_x;

   typedef float _axis_left_y_type;
  _axis_left_y_type axis_left_y;

   typedef float _axis_right_x_type;
  _axis_right_x_type axis_right_x;

   typedef float _axis_right_y_type;
  _axis_right_y_type axis_right_y;

   typedef float _axis_l2_type;
  _axis_l2_type axis_l2;

   typedef float _axis_r2_type;
  _axis_r2_type axis_r2;

   typedef int32_t _button_dpad_up_type;
  _button_dpad_up_type button_dpad_up;

   typedef int32_t _button_dpad_down_type;
  _button_dpad_down_type button_dpad_down;

   typedef int32_t _button_dpad_left_type;
  _button_dpad_left_type button_dpad_left;

   typedef int32_t _button_dpad_right_type;
  _button_dpad_right_type button_dpad_right;

   typedef int32_t _button_cross_type;
  _button_cross_type button_cross;

   typedef int32_t _button_circle_type;
  _button_circle_type button_circle;

   typedef int32_t _button_square_type;
  _button_square_type button_square;

   typedef int32_t _button_triangle_type;
  _button_triangle_type button_triangle;

   typedef int32_t _button_l1_type;
  _button_l1_type button_l1;

   typedef int32_t _button_l2_type;
  _button_l2_type button_l2;

   typedef int32_t _button_l3_type;
  _button_l3_type button_l3;

   typedef int32_t _button_r1_type;
  _button_r1_type button_r1;

   typedef int32_t _button_r2_type;
  _button_r2_type button_r2;

   typedef int32_t _button_r3_type;
  _button_r3_type button_r3;

   typedef int32_t _button_share_type;
  _button_share_type button_share;

   typedef int32_t _button_options_type;
  _button_options_type button_options;

   typedef int32_t _button_trackpad_type;
  _button_trackpad_type button_trackpad;

   typedef int32_t _button_ps_type;
  _button_ps_type button_ps;

   typedef  ::sensor_msgs::Imu_<ContainerAllocator>  _imu_type;
  _imu_type imu;

   typedef float _battery_percentage_type;
  _battery_percentage_type battery_percentage;

   typedef int32_t _battery_full_charging_type;
  _battery_full_charging_type battery_full_charging;

   typedef  ::ds4_driver::Trackpad_<ContainerAllocator>  _touch0_type;
  _touch0_type touch0;

   typedef  ::ds4_driver::Trackpad_<ContainerAllocator>  _touch1_type;
  _touch1_type touch1;

   typedef int32_t _plug_usb_type;
  _plug_usb_type plug_usb;

   typedef int32_t _plug_audio_type;
  _plug_audio_type plug_audio;

   typedef int32_t _plug_mic_type;
  _plug_mic_type plug_mic;





  typedef boost::shared_ptr< ::ds4_driver::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds4_driver::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::ds4_driver::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::ds4_driver::Status > StatusPtr;
typedef boost::shared_ptr< ::ds4_driver::Status const> StatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds4_driver::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds4_driver::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds4_driver::Status_<ContainerAllocator1> & lhs, const ::ds4_driver::Status_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.axis_left_x == rhs.axis_left_x &&
    lhs.axis_left_y == rhs.axis_left_y &&
    lhs.axis_right_x == rhs.axis_right_x &&
    lhs.axis_right_y == rhs.axis_right_y &&
    lhs.axis_l2 == rhs.axis_l2 &&
    lhs.axis_r2 == rhs.axis_r2 &&
    lhs.button_dpad_up == rhs.button_dpad_up &&
    lhs.button_dpad_down == rhs.button_dpad_down &&
    lhs.button_dpad_left == rhs.button_dpad_left &&
    lhs.button_dpad_right == rhs.button_dpad_right &&
    lhs.button_cross == rhs.button_cross &&
    lhs.button_circle == rhs.button_circle &&
    lhs.button_square == rhs.button_square &&
    lhs.button_triangle == rhs.button_triangle &&
    lhs.button_l1 == rhs.button_l1 &&
    lhs.button_l2 == rhs.button_l2 &&
    lhs.button_l3 == rhs.button_l3 &&
    lhs.button_r1 == rhs.button_r1 &&
    lhs.button_r2 == rhs.button_r2 &&
    lhs.button_r3 == rhs.button_r3 &&
    lhs.button_share == rhs.button_share &&
    lhs.button_options == rhs.button_options &&
    lhs.button_trackpad == rhs.button_trackpad &&
    lhs.button_ps == rhs.button_ps &&
    lhs.imu == rhs.imu &&
    lhs.battery_percentage == rhs.battery_percentage &&
    lhs.battery_full_charging == rhs.battery_full_charging &&
    lhs.touch0 == rhs.touch0 &&
    lhs.touch1 == rhs.touch1 &&
    lhs.plug_usb == rhs.plug_usb &&
    lhs.plug_audio == rhs.plug_audio &&
    lhs.plug_mic == rhs.plug_mic;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds4_driver::Status_<ContainerAllocator1> & lhs, const ::ds4_driver::Status_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds4_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds4_driver::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds4_driver::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds4_driver::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds4_driver::Status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds4_driver::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds4_driver::Status_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds4_driver::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "410582f2082b7ace5412b7159665c723";
  }

  static const char* value(const ::ds4_driver::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x410582f2082b7aceULL;
  static const uint64_t static_value2 = 0x5412b7159665c723ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds4_driver::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds4_driver/Status";
  }

  static const char* value(const ::ds4_driver::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds4_driver::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Human-readable and more ROS-compatible status of the device\n"
"Header header\n"
"\n"
"# Stick\n"
"# Left: 1.0, Right: -1.0\n"
"float32 axis_left_x\n"
"# Up: 1.0, Down: -1.0\n"
"float32 axis_left_y\n"
"float32 axis_right_x\n"
"float32 axis_right_y\n"
"\n"
"# Shoulder buttons [0, 1.0]\n"
"float32 axis_l2\n"
"float32 axis_r2\n"
"\n"
"# Buttons (0: Not pressed, 1: Pressed)\n"
"int32 button_dpad_up\n"
"int32 button_dpad_down\n"
"int32 button_dpad_left\n"
"int32 button_dpad_right\n"
"int32 button_cross\n"
"int32 button_circle\n"
"int32 button_square\n"
"int32 button_triangle\n"
"int32 button_l1\n"
"int32 button_l2\n"
"int32 button_l3\n"
"int32 button_r1\n"
"int32 button_r2\n"
"int32 button_r3\n"
"int32 button_share\n"
"int32 button_options\n"
"int32 button_trackpad\n"
"int32 button_ps\n"
"\n"
"# Gyro\n"
"sensor_msgs/Imu imu\n"
"\n"
"# Battery\n"
"float32 battery_percentage  # [0.0, 1.0]\n"
"int32 battery_full_charging # 0: No, 1: Yes\n"
"\n"
"# Trackpads\n"
"ds4_driver/Trackpad touch0\n"
"ds4_driver/Trackpad touch1\n"
"\n"
"# Plugs\n"
"int32 plug_usb              # 0: No, 1: Yes\n"
"int32 plug_audio            # 0: No, 1: Yes\n"
"int32 plug_mic              # 0: No, 1: Yes\n"
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
"MSG: sensor_msgs/Imu\n"
"# This is a message to hold data from an IMU (Inertial Measurement Unit)\n"
"#\n"
"# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n"
"#\n"
"# If the covariance of the measurement is known, it should be filled in (if all you know is the \n"
"# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n"
"# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n"
"# data a covariance will have to be assumed or gotten from some other source\n"
"#\n"
"# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n"
"# estimate), please set element 0 of the associated covariance matrix to -1\n"
"# If you are interpreting this message, please check for a value of -1 in the first element of each \n"
"# covariance matrix, and disregard the associated estimate.\n"
"\n"
"Header header\n"
"\n"
"geometry_msgs/Quaternion orientation\n"
"float64[9] orientation_covariance # Row major about x, y, z axes\n"
"\n"
"geometry_msgs/Vector3 angular_velocity\n"
"float64[9] angular_velocity_covariance # Row major about x, y, z axes\n"
"\n"
"geometry_msgs/Vector3 linear_acceleration\n"
"float64[9] linear_acceleration_covariance # Row major x, y z \n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
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
"================================================================================\n"
"MSG: ds4_driver/Trackpad\n"
"# Trackpad message for DualShock 4\n"
"uint16 id       # Touch ID (increments every touch)\n"
"int32 active    # 0: inactive, 1: active\n"
"float32 x       # 0.0: left edge, 1.0: right edge\n"
"float32 y       # 0.0: left edge, 1.0: right edge\n"
;
  }

  static const char* value(const ::ds4_driver::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds4_driver::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.axis_left_x);
      stream.next(m.axis_left_y);
      stream.next(m.axis_right_x);
      stream.next(m.axis_right_y);
      stream.next(m.axis_l2);
      stream.next(m.axis_r2);
      stream.next(m.button_dpad_up);
      stream.next(m.button_dpad_down);
      stream.next(m.button_dpad_left);
      stream.next(m.button_dpad_right);
      stream.next(m.button_cross);
      stream.next(m.button_circle);
      stream.next(m.button_square);
      stream.next(m.button_triangle);
      stream.next(m.button_l1);
      stream.next(m.button_l2);
      stream.next(m.button_l3);
      stream.next(m.button_r1);
      stream.next(m.button_r2);
      stream.next(m.button_r3);
      stream.next(m.button_share);
      stream.next(m.button_options);
      stream.next(m.button_trackpad);
      stream.next(m.button_ps);
      stream.next(m.imu);
      stream.next(m.battery_percentage);
      stream.next(m.battery_full_charging);
      stream.next(m.touch0);
      stream.next(m.touch1);
      stream.next(m.plug_usb);
      stream.next(m.plug_audio);
      stream.next(m.plug_mic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds4_driver::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds4_driver::Status_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "axis_left_x: ";
    Printer<float>::stream(s, indent + "  ", v.axis_left_x);
    s << indent << "axis_left_y: ";
    Printer<float>::stream(s, indent + "  ", v.axis_left_y);
    s << indent << "axis_right_x: ";
    Printer<float>::stream(s, indent + "  ", v.axis_right_x);
    s << indent << "axis_right_y: ";
    Printer<float>::stream(s, indent + "  ", v.axis_right_y);
    s << indent << "axis_l2: ";
    Printer<float>::stream(s, indent + "  ", v.axis_l2);
    s << indent << "axis_r2: ";
    Printer<float>::stream(s, indent + "  ", v.axis_r2);
    s << indent << "button_dpad_up: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_dpad_up);
    s << indent << "button_dpad_down: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_dpad_down);
    s << indent << "button_dpad_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_dpad_left);
    s << indent << "button_dpad_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_dpad_right);
    s << indent << "button_cross: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_cross);
    s << indent << "button_circle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_circle);
    s << indent << "button_square: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_square);
    s << indent << "button_triangle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_triangle);
    s << indent << "button_l1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_l1);
    s << indent << "button_l2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_l2);
    s << indent << "button_l3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_l3);
    s << indent << "button_r1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_r1);
    s << indent << "button_r2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_r2);
    s << indent << "button_r3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_r3);
    s << indent << "button_share: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_share);
    s << indent << "button_options: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_options);
    s << indent << "button_trackpad: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_trackpad);
    s << indent << "button_ps: ";
    Printer<int32_t>::stream(s, indent + "  ", v.button_ps);
    s << indent << "imu: ";
    s << std::endl;
    Printer< ::sensor_msgs::Imu_<ContainerAllocator> >::stream(s, indent + "  ", v.imu);
    s << indent << "battery_percentage: ";
    Printer<float>::stream(s, indent + "  ", v.battery_percentage);
    s << indent << "battery_full_charging: ";
    Printer<int32_t>::stream(s, indent + "  ", v.battery_full_charging);
    s << indent << "touch0: ";
    s << std::endl;
    Printer< ::ds4_driver::Trackpad_<ContainerAllocator> >::stream(s, indent + "  ", v.touch0);
    s << indent << "touch1: ";
    s << std::endl;
    Printer< ::ds4_driver::Trackpad_<ContainerAllocator> >::stream(s, indent + "  ", v.touch1);
    s << indent << "plug_usb: ";
    Printer<int32_t>::stream(s, indent + "  ", v.plug_usb);
    s << indent << "plug_audio: ";
    Printer<int32_t>::stream(s, indent + "  ", v.plug_audio);
    s << indent << "plug_mic: ";
    Printer<int32_t>::stream(s, indent + "  ", v.plug_mic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS4_DRIVER_MESSAGE_STATUS_H
