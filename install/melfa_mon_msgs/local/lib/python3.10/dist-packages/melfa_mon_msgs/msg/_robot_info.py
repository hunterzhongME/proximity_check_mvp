# generated from rosidl_generator_py/resource/_idl.py.em
# with input from melfa_mon_msgs:msg/RobotInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotInfo(type):
    """Metaclass of message 'RobotInfo'."""

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
                'melfa_mon_msgs.msg.RobotInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotInfo(metaclass=Metaclass_RobotInfo):
    """Message class 'RobotInfo'."""

    __slots__ = [
        '_tool_point_speed_feedback',
        '_remaining_distance_feedback',
        '_tool_point_speed_command',
        '_remaining_distance_command',
        '_gap_of_command_and_feedback',
        '_transport_factor_command',
        '_acceleration_state_command',
        '_step_number',
        '_program_number',
        '_controller_temperature',
        '_monitoring_counter',
    ]

    _fields_and_field_types = {
        'tool_point_speed_feedback': 'float',
        'remaining_distance_feedback': 'float',
        'tool_point_speed_command': 'float',
        'remaining_distance_command': 'float',
        'gap_of_command_and_feedback': 'float',
        'transport_factor_command': 'uint16',
        'acceleration_state_command': 'uint16',
        'step_number': 'uint16',
        'program_number': 'string',
        'controller_temperature': 'uint16',
        'monitoring_counter': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tool_point_speed_feedback = kwargs.get('tool_point_speed_feedback', float())
        self.remaining_distance_feedback = kwargs.get('remaining_distance_feedback', float())
        self.tool_point_speed_command = kwargs.get('tool_point_speed_command', float())
        self.remaining_distance_command = kwargs.get('remaining_distance_command', float())
        self.gap_of_command_and_feedback = kwargs.get('gap_of_command_and_feedback', float())
        self.transport_factor_command = kwargs.get('transport_factor_command', int())
        self.acceleration_state_command = kwargs.get('acceleration_state_command', int())
        self.step_number = kwargs.get('step_number', int())
        self.program_number = kwargs.get('program_number', str())
        self.controller_temperature = kwargs.get('controller_temperature', int())
        self.monitoring_counter = kwargs.get('monitoring_counter', int())

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
        if self.tool_point_speed_feedback != other.tool_point_speed_feedback:
            return False
        if self.remaining_distance_feedback != other.remaining_distance_feedback:
            return False
        if self.tool_point_speed_command != other.tool_point_speed_command:
            return False
        if self.remaining_distance_command != other.remaining_distance_command:
            return False
        if self.gap_of_command_and_feedback != other.gap_of_command_and_feedback:
            return False
        if self.transport_factor_command != other.transport_factor_command:
            return False
        if self.acceleration_state_command != other.acceleration_state_command:
            return False
        if self.step_number != other.step_number:
            return False
        if self.program_number != other.program_number:
            return False
        if self.controller_temperature != other.controller_temperature:
            return False
        if self.monitoring_counter != other.monitoring_counter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tool_point_speed_feedback(self):
        """Message field 'tool_point_speed_feedback'."""
        return self._tool_point_speed_feedback

    @tool_point_speed_feedback.setter
    def tool_point_speed_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_point_speed_feedback' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tool_point_speed_feedback' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tool_point_speed_feedback = value

    @builtins.property
    def remaining_distance_feedback(self):
        """Message field 'remaining_distance_feedback'."""
        return self._remaining_distance_feedback

    @remaining_distance_feedback.setter
    def remaining_distance_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_distance_feedback' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining_distance_feedback' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining_distance_feedback = value

    @builtins.property
    def tool_point_speed_command(self):
        """Message field 'tool_point_speed_command'."""
        return self._tool_point_speed_command

    @tool_point_speed_command.setter
    def tool_point_speed_command(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_point_speed_command' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tool_point_speed_command' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tool_point_speed_command = value

    @builtins.property
    def remaining_distance_command(self):
        """Message field 'remaining_distance_command'."""
        return self._remaining_distance_command

    @remaining_distance_command.setter
    def remaining_distance_command(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_distance_command' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining_distance_command' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining_distance_command = value

    @builtins.property
    def gap_of_command_and_feedback(self):
        """Message field 'gap_of_command_and_feedback'."""
        return self._gap_of_command_and_feedback

    @gap_of_command_and_feedback.setter
    def gap_of_command_and_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gap_of_command_and_feedback' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gap_of_command_and_feedback' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gap_of_command_and_feedback = value

    @builtins.property
    def transport_factor_command(self):
        """Message field 'transport_factor_command'."""
        return self._transport_factor_command

    @transport_factor_command.setter
    def transport_factor_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transport_factor_command' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'transport_factor_command' field must be an unsigned integer in [0, 65535]"
        self._transport_factor_command = value

    @builtins.property
    def acceleration_state_command(self):
        """Message field 'acceleration_state_command'."""
        return self._acceleration_state_command

    @acceleration_state_command.setter
    def acceleration_state_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acceleration_state_command' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'acceleration_state_command' field must be an unsigned integer in [0, 65535]"
        self._acceleration_state_command = value

    @builtins.property
    def step_number(self):
        """Message field 'step_number'."""
        return self._step_number

    @step_number.setter
    def step_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'step_number' field must be an unsigned integer in [0, 65535]"
        self._step_number = value

    @builtins.property
    def program_number(self):
        """Message field 'program_number'."""
        return self._program_number

    @program_number.setter
    def program_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'program_number' field must be of type 'str'"
        self._program_number = value

    @builtins.property
    def controller_temperature(self):
        """Message field 'controller_temperature'."""
        return self._controller_temperature

    @controller_temperature.setter
    def controller_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_temperature' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'controller_temperature' field must be an unsigned integer in [0, 65535]"
        self._controller_temperature = value

    @builtins.property
    def monitoring_counter(self):
        """Message field 'monitoring_counter'."""
        return self._monitoring_counter

    @monitoring_counter.setter
    def monitoring_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'monitoring_counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'monitoring_counter' field must be an unsigned integer in [0, 4294967295]"
        self._monitoring_counter = value
