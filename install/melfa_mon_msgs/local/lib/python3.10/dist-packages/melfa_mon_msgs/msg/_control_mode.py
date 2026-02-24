# generated from rosidl_generator_py/resource/_idl.py.em
# with input from melfa_mon_msgs:msg/ControlMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlMode(type):
    """Metaclass of message 'ControlMode'."""

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
            module = import_type_support('melfa_mon_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'melfa_mon_msgs.msg.ControlMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlMode(metaclass=Metaclass_ControlMode):
    """Message class 'ControlMode'."""

    __slots__ = [
        '_general1_io_interface',
        '_general2_io_interface',
        '_user1_io_interface',
        '_user2_io_interface',
        '_user3_io_interface',
        '_user4_io_interface',
        '_user5_io_interface',
        '_user6_io_interface',
        '_user7_io_interface',
        '_user8_io_interface',
    ]

    _fields_and_field_types = {
        'general1_io_interface': 'boolean',
        'general2_io_interface': 'boolean',
        'user1_io_interface': 'boolean',
        'user2_io_interface': 'boolean',
        'user3_io_interface': 'boolean',
        'user4_io_interface': 'boolean',
        'user5_io_interface': 'boolean',
        'user6_io_interface': 'boolean',
        'user7_io_interface': 'boolean',
        'user8_io_interface': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.general1_io_interface = kwargs.get('general1_io_interface', bool())
        self.general2_io_interface = kwargs.get('general2_io_interface', bool())
        self.user1_io_interface = kwargs.get('user1_io_interface', bool())
        self.user2_io_interface = kwargs.get('user2_io_interface', bool())
        self.user3_io_interface = kwargs.get('user3_io_interface', bool())
        self.user4_io_interface = kwargs.get('user4_io_interface', bool())
        self.user5_io_interface = kwargs.get('user5_io_interface', bool())
        self.user6_io_interface = kwargs.get('user6_io_interface', bool())
        self.user7_io_interface = kwargs.get('user7_io_interface', bool())
        self.user8_io_interface = kwargs.get('user8_io_interface', bool())

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
        if self.general1_io_interface != other.general1_io_interface:
            return False
        if self.general2_io_interface != other.general2_io_interface:
            return False
        if self.user1_io_interface != other.user1_io_interface:
            return False
        if self.user2_io_interface != other.user2_io_interface:
            return False
        if self.user3_io_interface != other.user3_io_interface:
            return False
        if self.user4_io_interface != other.user4_io_interface:
            return False
        if self.user5_io_interface != other.user5_io_interface:
            return False
        if self.user6_io_interface != other.user6_io_interface:
            return False
        if self.user7_io_interface != other.user7_io_interface:
            return False
        if self.user8_io_interface != other.user8_io_interface:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def general1_io_interface(self):
        """Message field 'general1_io_interface'."""
        return self._general1_io_interface

    @general1_io_interface.setter
    def general1_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'general1_io_interface' field must be of type 'bool'"
        self._general1_io_interface = value

    @builtins.property
    def general2_io_interface(self):
        """Message field 'general2_io_interface'."""
        return self._general2_io_interface

    @general2_io_interface.setter
    def general2_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'general2_io_interface' field must be of type 'bool'"
        self._general2_io_interface = value

    @builtins.property
    def user1_io_interface(self):
        """Message field 'user1_io_interface'."""
        return self._user1_io_interface

    @user1_io_interface.setter
    def user1_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user1_io_interface' field must be of type 'bool'"
        self._user1_io_interface = value

    @builtins.property
    def user2_io_interface(self):
        """Message field 'user2_io_interface'."""
        return self._user2_io_interface

    @user2_io_interface.setter
    def user2_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user2_io_interface' field must be of type 'bool'"
        self._user2_io_interface = value

    @builtins.property
    def user3_io_interface(self):
        """Message field 'user3_io_interface'."""
        return self._user3_io_interface

    @user3_io_interface.setter
    def user3_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user3_io_interface' field must be of type 'bool'"
        self._user3_io_interface = value

    @builtins.property
    def user4_io_interface(self):
        """Message field 'user4_io_interface'."""
        return self._user4_io_interface

    @user4_io_interface.setter
    def user4_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user4_io_interface' field must be of type 'bool'"
        self._user4_io_interface = value

    @builtins.property
    def user5_io_interface(self):
        """Message field 'user5_io_interface'."""
        return self._user5_io_interface

    @user5_io_interface.setter
    def user5_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user5_io_interface' field must be of type 'bool'"
        self._user5_io_interface = value

    @builtins.property
    def user6_io_interface(self):
        """Message field 'user6_io_interface'."""
        return self._user6_io_interface

    @user6_io_interface.setter
    def user6_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user6_io_interface' field must be of type 'bool'"
        self._user6_io_interface = value

    @builtins.property
    def user7_io_interface(self):
        """Message field 'user7_io_interface'."""
        return self._user7_io_interface

    @user7_io_interface.setter
    def user7_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user7_io_interface' field must be of type 'bool'"
        self._user7_io_interface = value

    @builtins.property
    def user8_io_interface(self):
        """Message field 'user8_io_interface'."""
        return self._user8_io_interface

    @user8_io_interface.setter
    def user8_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user8_io_interface' field must be of type 'bool'"
        self._user8_io_interface = value
