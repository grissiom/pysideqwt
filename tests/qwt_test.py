#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''Test cases for foo bindings module.'''

import unittest
import numpy as np

from PySide.QtCore import *
from PySide.QtGui import *

# check class exists
from PySideQwt import QwtPlot
from PySideQwt import QwtPlotCurve
from PySideQwt import QwtPlotGrid

import PySideQwt as qwt

class QwtTest(unittest.TestCase):

    def testQwt(self):
        '''Test case for qwtplot class from qwt module.'''
        app = QApplication([])
        plot = qwt.QwtPlot()

        curve = qwt.QwtPlotCurve()
        curve.attach(plot)

        grid = QwtPlotGrid()
        grid.attach(plot)
        grid.setPen(QPen(Qt.black, 0, Qt.DotLine))

        x = np.arange(100)
        y = np.sin(x/10.0)

        x = list(x)
        y = list(y)
        
        curve.setData([1,2,3], [1, 4, 9])
        # curve.setData(x, y)
        plot.show()
        app.exec_()

if __name__ == '__main__':
    unittest.main()

