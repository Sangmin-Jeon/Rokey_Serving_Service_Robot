// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from b4_serv_robot_interface:srv/Order.idl
// generated code does not contain a copyright notice
#include "b4_serv_robot_interface/srv/detail/order__rosidl_typesupport_fastrtps_cpp.hpp"
#include "b4_serv_robot_interface/srv/detail/order__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace b4_serv_robot_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
cdr_serialize(
  const b4_serv_robot_interface::srv::Order_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: table_num
  cdr << ros_message.table_num;
  // Member: order_info
  {
    cdr << ros_message.order_info;
  }
  // Member: order_time
  cdr << ros_message.order_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  b4_serv_robot_interface::srv::Order_Request & ros_message)
{
  // Member: table_num
  cdr >> ros_message.table_num;

  // Member: order_info
  {
    cdr >> ros_message.order_info;
  }

  // Member: order_time
  cdr >> ros_message.order_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
get_serialized_size(
  const b4_serv_robot_interface::srv::Order_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: table_num
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.table_num.size() + 1);
  // Member: order_info
  {
    size_t array_size = ros_message.order_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.order_info[index].size() + 1);
    }
  }
  // Member: order_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.order_time.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
max_serialized_size_Order_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: table_num
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: order_info
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: order_time
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = b4_serv_robot_interface::srv::Order_Request;
    is_plain =
      (
      offsetof(DataType, order_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Order_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const b4_serv_robot_interface::srv::Order_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Order_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<b4_serv_robot_interface::srv::Order_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Order_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const b4_serv_robot_interface::srv::Order_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Order_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Order_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Order_Request__callbacks = {
  "b4_serv_robot_interface::srv",
  "Order_Request",
  _Order_Request__cdr_serialize,
  _Order_Request__cdr_deserialize,
  _Order_Request__get_serialized_size,
  _Order_Request__max_serialized_size
};

static rosidl_message_type_support_t _Order_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Order_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace b4_serv_robot_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_b4_serv_robot_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<b4_serv_robot_interface::srv::Order_Request>()
{
  return &b4_serv_robot_interface::srv::typesupport_fastrtps_cpp::_Order_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, b4_serv_robot_interface, srv, Order_Request)() {
  return &b4_serv_robot_interface::srv::typesupport_fastrtps_cpp::_Order_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace b4_serv_robot_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
cdr_serialize(
  const b4_serv_robot_interface::srv::Order_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_order
  cdr << (ros_message.is_order ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  b4_serv_robot_interface::srv::Order_Response & ros_message)
{
  // Member: is_order
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_order = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
get_serialized_size(
  const b4_serv_robot_interface::srv::Order_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_order
  {
    size_t item_size = sizeof(ros_message.is_order);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_b4_serv_robot_interface
max_serialized_size_Order_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: is_order
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = b4_serv_robot_interface::srv::Order_Response;
    is_plain =
      (
      offsetof(DataType, is_order) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Order_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const b4_serv_robot_interface::srv::Order_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Order_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<b4_serv_robot_interface::srv::Order_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Order_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const b4_serv_robot_interface::srv::Order_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Order_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Order_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Order_Response__callbacks = {
  "b4_serv_robot_interface::srv",
  "Order_Response",
  _Order_Response__cdr_serialize,
  _Order_Response__cdr_deserialize,
  _Order_Response__get_serialized_size,
  _Order_Response__max_serialized_size
};

static rosidl_message_type_support_t _Order_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Order_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace b4_serv_robot_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_b4_serv_robot_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<b4_serv_robot_interface::srv::Order_Response>()
{
  return &b4_serv_robot_interface::srv::typesupport_fastrtps_cpp::_Order_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, b4_serv_robot_interface, srv, Order_Response)() {
  return &b4_serv_robot_interface::srv::typesupport_fastrtps_cpp::_Order_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace b4_serv_robot_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Order__callbacks = {
  "b4_serv_robot_interface::srv",
  "Order",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, b4_serv_robot_interface, srv, Order_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, b4_serv_robot_interface, srv, Order_Response)(),
};

static rosidl_service_type_support_t _Order__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Order__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace b4_serv_robot_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_b4_serv_robot_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<b4_serv_robot_interface::srv::Order>()
{
  return &b4_serv_robot_interface::srv::typesupport_fastrtps_cpp::_Order__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, b4_serv_robot_interface, srv, Order)() {
  return &b4_serv_robot_interface::srv::typesupport_fastrtps_cpp::_Order__handle;
}

#ifdef __cplusplus
}
#endif
