# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fc_custom_interface:msg/CustomMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CustomMessage(type):
    """Metaclass of message 'CustomMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fc_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fc_custom_interface.msg.CustomMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__custom_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__custom_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__custom_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__custom_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__custom_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CustomMessage(metaclass=Metaclass_CustomMessage):
    """Message class 'CustomMessage'."""

    __slots__ = [
        '_int_a',
        '_str_b',
        '_bool_c',
        '_str_d',
    ]

    _fields_and_field_types = {
        'int_a': 'int32',
        'str_b': 'string',
        'bool_c': 'boolean',
        'str_d': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.int_a = kwargs.get('int_a', int())
        self.str_b = kwargs.get('str_b', str())
        self.bool_c = kwargs.get('bool_c', bool())
        self.str_d = kwargs.get('str_d', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.int_a != other.int_a:
            return False
        if self.str_b != other.str_b:
            return False
        if self.bool_c != other.bool_c:
            return False
        if self.str_d != other.str_d:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def int_a(self):
        """Message field 'int_a'."""
        return self._int_a

    @int_a.setter
    def int_a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int_a' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'int_a' field must be an integer in [-2147483648, 2147483647]"
        self._int_a = value

    @builtins.property
    def str_b(self):
        """Message field 'str_b'."""
        return self._str_b

    @str_b.setter
    def str_b(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'str_b' field must be of type 'str'"
        self._str_b = value

    @builtins.property
    def bool_c(self):
        """Message field 'bool_c'."""
        return self._bool_c

    @bool_c.setter
    def bool_c(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_c' field must be of type 'bool'"
        self._bool_c = value

    @builtins.property
    def str_d(self):
        """Message field 'str_d'."""
        return self._str_d

    @str_d.setter
    def str_d(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'str_d' field must be a set or sequence and each value of type 'str'"
        self._str_d = value
