#ifndef SBK_QWTPLOTWRAPPER_H
#define SBK_QWTPLOTWRAPPER_H

#define protected public

#include <shiboken.h>

#include <qwt_plot.h>

namespace PySide { class DynamicQMetaObject; }

class QwtPlotWrapper : public QwtPlot
{
public:
    QwtPlotWrapper(QWidget * arg__1 = 0);
    virtual void actionEvent(QActionEvent * arg__1);
    virtual void changeEvent(QEvent * arg__1);
    virtual void childEvent(QChildEvent * arg__1);
    virtual void clear();
    virtual void closeEvent(QCloseEvent * arg__1);
    virtual void connectNotify(const char * signal);
    virtual void contextMenuEvent(QContextMenuEvent * arg__1);
    virtual void customEvent(QEvent * arg__1);
    virtual int devType() const;
    virtual void disconnectNotify(const char * signal);
    virtual void dragEnterEvent(QDragEnterEvent * arg__1);
    virtual void dragLeaveEvent(QDragLeaveEvent * arg__1);
    virtual void dragMoveEvent(QDragMoveEvent * arg__1);
    virtual void drawCanvas(QPainter * arg__1);
    virtual void dropEvent(QDropEvent * arg__1);
    virtual void enterEvent(QEvent * arg__1);
    virtual bool event(QEvent * arg__1);
    virtual bool eventFilter(QObject * arg__1, QEvent * arg__2);
    virtual void focusInEvent(QFocusEvent * arg__1);
    virtual bool focusNextPrevChild(bool next);
    virtual void focusOutEvent(QFocusEvent * arg__1);
    virtual int heightForWidth(int arg__1) const;
    virtual void hideEvent(QHideEvent * arg__1);
    virtual void inputMethodEvent(QInputMethodEvent * arg__1);
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery arg__1) const;
    virtual void keyPressEvent(QKeyEvent * arg__1);
    virtual void keyReleaseEvent(QKeyEvent * arg__1);
    virtual void languageChange();
    virtual void leaveEvent(QEvent * arg__1);
    virtual void legendItemChecked(bool arg__1);
    virtual void legendItemClicked();
    virtual const QMetaObject * metaObject() const;
    virtual int metric(QPaintDevice::PaintDeviceMetric arg__1) const;
    virtual QSize minimumSizeHint() const;
    virtual void mouseDoubleClickEvent(QMouseEvent * arg__1);
    virtual void mouseMoveEvent(QMouseEvent * arg__1);
    virtual void mousePressEvent(QMouseEvent * arg__1);
    virtual void mouseReleaseEvent(QMouseEvent * arg__1);
    virtual void moveEvent(QMoveEvent * arg__1);
    virtual QPaintEngine * paintEngine() const;
    virtual void paintEvent(QPaintEvent * arg__1);
    virtual void polish();
    virtual void printLegend(QPainter * arg__1, const QRect & arg__2) const;
    virtual void printLegendItem(QPainter * arg__1, const QWidget * arg__2, const QRect & arg__3) const;
    virtual void printScale(QPainter * arg__1, int axisId, int startDist, int endDist, int baseDist, const QRect & arg__6) const;
    virtual void printTitle(QPainter * arg__1, const QRect & arg__2) const;
    virtual void replot();
    virtual void resizeEvent(QResizeEvent * e);
    virtual void setVisible(bool visible);
    virtual void showEvent(QShowEvent * arg__1);
    virtual QSize sizeHint() const;
    virtual void tabletEvent(QTabletEvent * arg__1);
    virtual void timerEvent(QTimerEvent * arg__1);
    virtual void updateLayout();
    virtual void updateTabOrder();
    virtual void wheelEvent(QWheelEvent * arg__1);
    virtual ~QwtPlotWrapper();
public:
    virtual int qt_metacall(QMetaObject::Call call, int id, void** args);
private:
    mutable PySide::DynamicQMetaObject* m_metaObject;
};

#endif // SBK_QWTPLOTWRAPPER_H

