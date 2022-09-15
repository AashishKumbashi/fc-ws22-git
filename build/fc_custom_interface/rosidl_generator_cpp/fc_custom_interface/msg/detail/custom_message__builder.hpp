// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fc_custom_interface/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fc_custom_interface
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_str_d
{
public:
  explicit Init_CustomMessage_str_d(::fc_custom_interface::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::fc_custom_interface::msg::CustomMessage str_d(::fc_custom_interface::msg::CustomMessage::_str_d_type arg)
  {
    msg_.str_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

class Init_CustomMessage_bool_c
{
public:
  explicit Init_CustomMessage_bool_c(::fc_custom_interface::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  Init_CustomMessage_str_d bool_c(::fc_custom_interface::msg::CustomMessage::_bool_c_type arg)
  {
    msg_.bool_c = std::move(arg);
    return Init_CustomMessage_str_d(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

class Init_CustomMessage_str_b
{
public:
  explicit Init_CustomMessage_str_b(::fc_custom_interface::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  Init_CustomMessage_bool_c str_b(::fc_custom_interface::msg::CustomMessage::_str_b_type arg)
  {
    msg_.str_b = std::move(arg);
    return Init_CustomMessage_bool_c(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

class Init_CustomMessage_int_a
{
public:
  Init_CustomMessage_int_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_str_b int_a(::fc_custom_interface::msg::CustomMessage::_int_a_type arg)
  {
    msg_.int_a = std::move(arg);
    return Init_CustomMessage_str_b(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::msg::CustomMessage>()
{
  return fc_custom_interface::msg::builder::Init_CustomMessage_int_a();
}

}  // namespace fc_custom_interface

#endif  // FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
