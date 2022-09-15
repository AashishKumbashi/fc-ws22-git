// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
#define FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fc_custom_interface__msg__CustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__fc_custom_interface__msg__CustomMessage __declspec(deprecated)
#endif

namespace fc_custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage_
{
  using Type = CustomMessage_<ContainerAllocator>;

  explicit CustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int_a = 0l;
      this->str_b = "";
      this->bool_c = false;
    }
  }

  explicit CustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : str_b(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int_a = 0l;
      this->str_b = "";
      this->bool_c = false;
    }
  }

  // field types and members
  using _int_a_type =
    int32_t;
  _int_a_type int_a;
  using _str_b_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _str_b_type str_b;
  using _bool_c_type =
    bool;
  _bool_c_type bool_c;
  using _str_d_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _str_d_type str_d;

  // setters for named parameter idiom
  Type & set__int_a(
    const int32_t & _arg)
  {
    this->int_a = _arg;
    return *this;
  }
  Type & set__str_b(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->str_b = _arg;
    return *this;
  }
  Type & set__bool_c(
    const bool & _arg)
  {
    this->bool_c = _arg;
    return *this;
  }
  Type & set__str_d(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->str_d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fc_custom_interface::msg::CustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const fc_custom_interface::msg::CustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fc_custom_interface__msg__CustomMessage
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fc_custom_interface__msg__CustomMessage
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage_ & other) const
  {
    if (this->int_a != other.int_a) {
      return false;
    }
    if (this->str_b != other.str_b) {
      return false;
    }
    if (this->bool_c != other.bool_c) {
      return false;
    }
    if (this->str_d != other.str_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage_

// alias to use template instance with default allocator
using CustomMessage =
  fc_custom_interface::msg::CustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fc_custom_interface

#endif  // FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
