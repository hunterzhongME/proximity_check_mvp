// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "melfa_mon_msgs/msg/detail/robot_info__struct.h"
#include "melfa_mon_msgs/msg/detail/robot_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool melfa_mon_msgs__msg__robot_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("melfa_mon_msgs.msg._robot_info.RobotInfo", full_classname_dest, 40) == 0);
  }
  melfa_mon_msgs__msg__RobotInfo * ros_message = _ros_message;
  {  // tool_point_speed_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_point_speed_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_point_speed_feedback = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_distance_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_distance_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_distance_feedback = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_point_speed_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_point_speed_command");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_point_speed_command = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_distance_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_distance_command");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_distance_command = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gap_of_command_and_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "gap_of_command_and_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gap_of_command_and_feedback = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transport_factor_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "transport_factor_command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transport_factor_command = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acceleration_state_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_state_command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acceleration_state_command = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // step_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // program_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "program_number");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->program_number, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // controller_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->controller_temperature = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // monitoring_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "monitoring_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->monitoring_counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * melfa_mon_msgs__msg__robot_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("melfa_mon_msgs.msg._robot_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  melfa_mon_msgs__msg__RobotInfo * ros_message = (melfa_mon_msgs__msg__RobotInfo *)raw_ros_message;
  {  // tool_point_speed_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_point_speed_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_point_speed_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_distance_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_distance_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_distance_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_point_speed_command
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_point_speed_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_point_speed_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_distance_command
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_distance_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_distance_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gap_of_command_and_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gap_of_command_and_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gap_of_command_and_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transport_factor_command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->transport_factor_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transport_factor_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_state_command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acceleration_state_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_state_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->step_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // program_number
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->program_number.data,
      strlen(ros_message->program_number.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "program_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->controller_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monitoring_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->monitoring_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monitoring_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
