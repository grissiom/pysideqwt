
#include <Python.h>
#include <shiboken.h>
#include <algorithm>
#include "_python.h"



// Extra includes

// Global functions ------------------------------------------------------------

static PyMethodDef _methods[] = {
    {0} // Sentinel
};

// Classes initialization functions ------------------------------------------------------------

PyTypeObject** SbkTypes;

PyTypeObject** SbkPySide_QtCoreTypes;

// Module initialization ------------------------------------------------------------

#if defined _WIN32 || defined __CYGWIN__
    #define SBK_EXPORT_MODULE __declspec(dllexport)
#elif __GNUC__ >= 4
    #define SBK_EXPORT_MODULE __attribute__ ((visibility("default")))
#else
    #define SBK_EXPORT_MODULE
#endif

extern "C" SBK_EXPORT_MODULE void init()
{
    if (!Shiboken::importModule("PySide.QtCore", &SbkPySide_QtCoreTypes)) {
        PyErr_SetString(PyExc_ImportError,"could not import PySide.QtCore");
        return;
    }

    Shiboken::init();
    PyObject* module = Py_InitModule("", _methods);

    // Create a CObject containing the API pointer array's address
    static PyTypeObject* cppApi[SBK__IDX_COUNT];
    SbkTypes = cppApi;
    PyObject* cppApiObject = PyCObject_FromVoidPtr(reinterpret_cast<void*>(cppApi), 0);
    PyModule_AddObject(module, "_Cpp_Api", cppApiObject);

    // Initialize classes in the type system

    // Register primitive types on TypeResolver

    if (PyErr_Occurred()) {
        PyErr_Print();
        Py_FatalError("can't initialize module ");
    }
}

