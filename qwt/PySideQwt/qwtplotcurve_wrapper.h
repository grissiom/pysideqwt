#ifndef SBK_QWTPLOTCURVEWRAPPER_H
#define SBK_QWTPLOTCURVEWRAPPER_H

#define protected public

#include <shiboken.h>

#include <qwt_plot_curve.h>

class QwtPlotCurveWrapper : public QwtPlotCurve
{
public:
    QwtPlotCurveWrapper();
    QwtPlotCurveWrapper(const QString & title);
    virtual QRectF boundingRect() const;
    virtual void itemChanged();
    virtual QWidget * legendItem() const;
    virtual int rtti() const;
    virtual void setVisible(bool arg__1);
    virtual ~QwtPlotCurveWrapper();
};

#endif // SBK_QWTPLOTCURVEWRAPPER_H

