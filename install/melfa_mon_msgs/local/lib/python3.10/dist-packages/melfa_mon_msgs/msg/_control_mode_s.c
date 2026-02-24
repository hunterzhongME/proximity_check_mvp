// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from melfa_mon_msgs:msg/ControlMode.idl
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
#include "melfa_mon_msgs/msg/detail/control_mode__struct.h"
#include "melfa_mon_msgs/msg/detail/control_mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool melfa_mon_msgs__msg__control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("melfa_mon_msgs.msg._control_mode.ControlMode", full_classname_dest, 44) == 0);
  }
  melfa_mon_msgs__msg__ControlMode * ros_message = _ros_message;
  {  // general1_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "general1_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->general1_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // general2_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "general2_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->general2_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user1_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user1_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user1_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user2_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user2_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user2_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user3_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user3_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user3_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user4_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user4_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user4_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user5_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user5_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user5_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user6_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user6_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user6_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user7_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user7_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user7_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user8_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "user8_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user8_io_interface = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * melfa_mon_msgs__msg__control_mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlMode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("melfa_mon_msgs.msg._control_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlMode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  melfa_mon_msgs__msg__ControlMode * ros_message = (melfa_mon_msgs__msg__ControlMode *)raw_ros_message;
  {  // general1_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->general1_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "general1_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // general2_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->general2_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "general2_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user1_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user1_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user1_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user2_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user2_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user2_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user3_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user3_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user3_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user4_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user4_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user4_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user5_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user5_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user5_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user6_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user6_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user6_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user7_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user7_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user7_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user8_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user8_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user8_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
