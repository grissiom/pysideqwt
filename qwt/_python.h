

#ifndef SBK__PYTHON_H
#define SBK__PYTHON_H

//workaround to access protected functions
#define protected public

#include <Python.h>
#include <conversions.h>
#include <sbkenum.h>
#include <basewrapper.h>
#include <bindingmanager.h>
#include <memory>

#include <pysidesignal.h>
// Module Includes
#include <pyside_qtcore_python.h>

// Binded library includes
// Conversion Includes - Primitive Types
#include <QString>
#include <signalmanager.h>
#include <typeresolver.h>
#include <QtConcurrentFilter>
#include <QTextDocument>

// Conversion Includes - Container Types
#include <QList>
#include <QMap>
#include <QStack>
#include <QMultiMap>
#include <QVector>
#include <QPair>
#include <pysideconversions.h>
#include <QSet>
#include <qqueue.h>
#include <QStringList>
#include <qlinkedlist.h>

// Type indices
#define                                               SBK__IDX_COUNT 0

// This variable stores all python types exported by this module
extern PyTypeObject** SbkTypes;

// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T

// Generated converters declarations ----------------------------------

} // namespace Shiboken

// User defined converters --------------------------------------------
// Generated converters implemantations -------------------------------


#endif // SBK__PYTHON_H

