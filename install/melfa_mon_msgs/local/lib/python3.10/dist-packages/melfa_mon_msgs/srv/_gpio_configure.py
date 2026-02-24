# generated from rosidl_generator_py/resource/_idl.py.em
# with input from melfa_mon_msgs:srv/GpioConfigure.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpioConfigure_Request(type):
    """Metaclass of message 'GpioConfigure_Request'."""

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
                'melfa_mon_msgs.srv.GpioConfigure_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gpio_configure__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gpio_configure__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gpio_configure__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gpio_configure__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gpio_configure__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GpioConfigure_Request(metaclass=Metaclass_GpioConfigure_Request):
    """Message class 'GpioConfigure_Request'."""

    __slots__ = [
        '_input_addrr',
        '_output_addrr',
    ]

    _fields_and_field_types = {
        'input_addrr': 'uint16',
        'output_addrr': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.input_addrr = kwargs.get('input_addrr', int())
        self.output_addrr = kwargs.get('output_addrr', int())

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
        if self.input_addrr != other.input_addrr:
            return False
        if self.output_addrr != other.output_addrr:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def input_addrr(self):
        """Message field 'input_addrr'."""
        return self._input_addrr

    @input_addrr.setter
    def input_addrr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input_addrr' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'input_addrr' field must be an unsigned integer in [0, 65535]"
        self._input_addrr = value

    @builtins.property
    def output_addrr(self):
        """Message field 'output_addrr'."""
        return self._output_addrr

    @output_addrr.setter
    def output_addrr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'output_addrr' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'output_addrr' field must be an unsigned integer in [0, 65535]"
        self._output_addrr = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GpioConfigure_Response(type):
    """Metaclass of message 'GpioConfigure_Response'."""

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
                'melfa_mon_msgs.srv.GpioConfigure_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gpio_configure__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gpio_configure__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gpio_configure__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gpio_configure__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gpio_configure__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GpioConfigure_Response(metaclass=Metaclass_GpioConfigure_Response):
    """Message class 'GpioConfigure_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_GpioConfigure(type):
    """Metaclass of service 'GpioConfigure'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('melfa_mon_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'melfa_mon_msgs.srv.GpioConfigure')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gpio_configure

            from melfa_mon_msgs.srv import _gpio_configure
            if _gpio_configure.Metaclass_GpioConfigure_Request._TYPE_SUPPORT is None:
                _gpio_configure.Metaclass_GpioConfigure_Request.__import_type_support__()
            if _gpio_configure.Metaclass_GpioConfigure_Response._TYPE_SUPPORT is None:
                _gpio_configure.Metaclass_GpioConfigure_Response.__import_type_support__()


class GpioConfigure(metaclass=Metaclass_GpioConfigure):
    from melfa_mon_msgs.srv._gpio_configure import GpioConfigure_Request as Request
    from melfa_mon_msgs.srv._gpio_configure import GpioConfigure_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
