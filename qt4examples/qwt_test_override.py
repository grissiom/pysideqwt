#!/usr/bin/env python
#-*- coding:utf-8 -*-
"""
module: qwt_test_override
"""

from lib import * 

BAR_FIX = 0
BAR_INT = 1
class BarCurve(Qwt.QwtPlotCurve):
    """
    数据显示为直方图
    可以设置警戒线
    可以设置选择了那个直方
    可以设置直方图的格式：
    定长：每个直方宽度为1
    间距：每个直方宽度为x - x+1
    """
    def __init__(self, name, 
                 color = Qt.green,
                 alertColor = Qt.red,
                 selectedColor = Qt.blue,
                 alertLineColor = Qt.darkBlue,
                 format=BAR_FIX):
        super(BarCurve, self).__init__(name)
        self.selected = []
        self.warningLine = None

        self.color = color
        self.alertColor = alertColor
        self.alertLineColor = alertLineColor
        self.selectedColor = selectedColor
        self.format = format

    def updateLegend(self, legend):
        """图例"""
        QwtPlotCurve.updateLegend(self, legend)
        item = legend.find(self)
        item.setIdentifierMode(QwtLegendItem.ShowSymbol)
        item.setSymbol(QwtSymbol(QwtSymbol.Rect,
                                 QBrush(self.color),
                                 QPen(self.color),
                                 QSize(8, 8)))

    def setWarningLine(self, value):
        "设置警戒线"
        self.warningLine = value

    def setSelected(self, selected):
        "设置选择的直方"
        if self.selected != selected:
            self.selected = selected
            return True
    
    def drawFromTo(self, painter, xMap, yMap, start, stop):
        """具体的画图函数"""
        #开始和结束
        if stop == -1:
            stop = self.dataSize()
        if start & 1:
            start -= 1
        if stop & 1:
            stop -= 1
        start = max(start, 0)
        stop = max(stop, 0)

        #对每一个数据，画直方
        for i in range(start, stop, 1):
            if (i == stop and self.format == BAR_INT):
                continue
            #if i == start: continue
            px1 = xMap.transform(self.x(i))
            if self.format == BAR_FIX:
                px2 = xMap.transform(self.x(i)+1)
            else:
                px2 = xMap.transform(self.x(i-1))
            py1 = yMap.transform(0.0)
            py2 = yMap.transform(self.y(i))

            #当前选中的，变换颜色
            if i in self.selected:
                color = self.selectedColor
            #超过警戒线的，变换颜色
            elif (self.warningLine!=None and 
                self.y(i)>= self.warningLine):
                color = self.alertColor
            else:
                color = self.color
            # painter.setBrush(color)
            # painter.setPen(color)

            painter.fillRect(px1, py1, px2-px1, py2-py1, color)


def main():
    app = QApplication([])
    plot = QwtPlot()
    
    curve = BarCurve("test")
    curve.attach(plot)
    
    grid = QwtPlotGrid()
    grid.attach(plot)
    grid.setPen(QPen(Qt.black, 0, Qt.DotLine))
    
    x = np.arange(20)
    y = np.sin(x/10.0)
    
    # x = [float(i) for i in x]
    # y = [float(i) for i in y]
    
    curve.setData(x, y)
    plot.show()
    
    app.exec_()
    
    
if __name__=="__main__":
    main()
