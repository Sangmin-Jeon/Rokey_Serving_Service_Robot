// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from b4_serv_robot_interface:msg/DB.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "b4_serv_robot_interface/msg/detail/db__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace b4_serv_robot_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DB_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) b4_serv_robot_interface::msg::DB(_init);
}

void DB_fini_function(void * message_memory)
{
  auto typed_message = static_cast<b4_serv_robot_interface::msg::DB *>(message_memory);
  typed_message->~DB();
}

size_t size_function__DB__order_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DB__order_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__DB__order_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__DB__order_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__DB__order_info(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__DB__order_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__DB__order_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__DB__order_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DB_message_member_array[1] = {
  {
    "order_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(b4_serv_robot_interface::msg::DB, order_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__DB__order_info,  // size() function pointer
    get_const_function__DB__order_info,  // get_const(index) function pointer
    get_function__DB__order_info,  // get(index) function pointer
    fetch_function__DB__order_info,  // fetch(index, &value) function pointer
    assign_function__DB__order_info,  // assign(index, value) function pointer
    resize_function__DB__order_info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DB_message_members = {
  "b4_serv_robot_interface::msg",  // message namespace
  "DB",  // message name
  1,  // number of fields
  sizeof(b4_serv_robot_interface::msg::DB),
  DB_message_member_array,  // message members
  DB_init_function,  // function to initialize message memory (memory has to be allocated)
  DB_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DB_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DB_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace b4_serv_robot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<b4_serv_robot_interface::msg::DB>()
{
  return &::b4_serv_robot_interface::msg::rosidl_typesupport_introspection_cpp::DB_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, b4_serv_robot_interface, msg, DB)() {
  return &::b4_serv_robot_interface::msg::rosidl_typesupport_introspection_cpp::DB_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
