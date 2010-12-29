#ifndef SBK_QWTPLOTITEMWRAPPER_H
#define SBK_QWTPLOTITEMWRAPPER_H

#define protected public

#include <shiboken.h>

#include <qwt_plot_item.h>

class QwtPlotItemWrapper : public QwtPlotItem
{
public:
    virtual QRectF boundingRect() const;
    virtual void itemChanged();
    virtual QWidget * legendItem() const;
    virtual int rtti() const;
    virtual void setVisible(bool arg__1);
    virtual ~QwtPlotItemWrapper();
};

#endif // SBK_QWTPLOTITEMWRAPPER_H

