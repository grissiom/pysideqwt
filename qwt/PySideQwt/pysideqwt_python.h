

#ifndef SBK_PYSIDEQWT_PYTHON_H
#define SBK_PYSIDEQWT_PYTHON_H

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
#include <pyside_qtgui_python.h>

// Binded library includes
#include <qwt_plot.h>
#include <qwt_plot_item.h>
#include <qwt_plot_curve.h>
// Conversion Includes - Primitive Types
#include <QString>
#include <signalmanager.h>
#include <typeresolver.h>
#include <QTextDocument>
#include <QtConcurrentFilter>

// Conversion Includes - Container Types
#include <QMap>
#include <QStack>
#include <QVector>
#include <QStringList>
#include <QSet>
#include <QPair>
#include <pysideconversions.h>
#include <qqueue.h>
#include <QList>
#include <QMultiMap>

// Type indices
#define SBK_QWTPLOTITEM_IDX                                          0
#define SBK_QWTPLOTCURVE_IDX                                         1
#define SBK_QWTPLOT_IDX                                              2
#define SBK_PySideQwt_IDX_COUNT                                      3

// This variable stores all python types exported by this module
extern PyTypeObject** SbkPySideQwtTypes;

// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject* SbkType< ::QwtPlotItem >() { return reinterpret_cast<PyTypeObject*>(SbkPySideQwtTypes[SBK_QWTPLOTITEM_IDX]); }
template<> inline PyTypeObject* SbkType< ::QwtPlotCurve >() { return reinterpret_cast<PyTypeObject*>(SbkPySideQwtTypes[SBK_QWTPLOTCURVE_IDX]); }
template<> inline PyTypeObject* SbkType< ::QwtPlot >() { return reinterpret_cast<PyTypeObject*>(SbkPySideQwtTypes[SBK_QWTPLOT_IDX]); }

template<>
inline PyObject* createWrapper<QwtPlot >(const QwtPlot* cppobj, bool hasOwnership, bool isExactType)
{
    const char* typeName = 0;
    QwtPlot* value = const_cast<QwtPlot* >(cppobj);
    if (!isExactType)
        typeName = typeid(*value).name();
    PyObject* pyObj = Shiboken::Object::newObject(reinterpret_cast<SbkObjectType*>(SbkType< ::QwtPlot >()),value, hasOwnership, isExactType, typeName);
    PySide::Signal::updateSourceObject(pyObj);
    return pyObj;
}
// Generated converters declarations ----------------------------------

template<>
struct Converter< ::QwtPlotItem* > : ObjectTypeConverter< ::QwtPlotItem >
{
};

template<>
struct Converter< ::QwtPlotItem > : ObjectTypeReferenceConverter< ::QwtPlotItem >
{
};

template<>
struct Converter< ::QwtPlotCurve* > : ObjectTypeConverter< ::QwtPlotCurve >
{
};

template<>
struct Converter< ::QwtPlotCurve > : ObjectTypeReferenceConverter< ::QwtPlotCurve >
{
};

template<>
struct Converter< ::QwtPlot* > : ObjectTypeConverter< ::QwtPlot >
{
};

template<>
struct Converter< ::QwtPlot > : ObjectTypeReferenceConverter< ::QwtPlot >
{
};

} // namespace Shiboken

// User defined converters --------------------------------------------
// Generated converters implemantations -------------------------------


#endif // SBK_PYSIDEQWT_PYTHON_H

