// example3/ex3.h
#pragma once

#include <Python.h>

extern "C" {
    PyObject* sum_tuple(PyObject* input_tuple);
    PyObject* concat_list(PyObject* input_list1, PyObject* input_list2);
    PyObject* get_dict_value(PyObject* input_dict, char* key_name);
}
