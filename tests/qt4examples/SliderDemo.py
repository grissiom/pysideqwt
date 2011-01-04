#!/usr/bin/env python

# The Python version of qwt-*/examples/sliders


from lib import *

class Layout(QBoxLayout):

    def __init__(self, orientation, parent=None):
        QBoxLayout.__init__(self, QBoxLayout.LeftToRight, parent)
        if orientation == Qt.Vertical:
            self.setDirection(QBoxLayout.TopToBottom)
        self.setSpacing(20)
        self.setMargin(0)

    # __init__()

# class Layout


class Slider(QWidget):

    def __init__(self, parent, sliderType):
        QWidget.__init__(self, parent)

        self.slider = self.createSlider(self, sliderType)
        assert(not self.slider is None)
        
        if self.slider.scalePosition() == Qwt.QwtSlider.NoScale:
            if self.slider.orientation() == Qt.Horizontal:
                alignment = Qt.AlignHCenter | Qt.AlignTop
            else:
                alignment = Qt.AlignVCenter | Qt.AlignLeft
        elif self.slider.scalePosition() == Qwt.QwtSlider.LeftScale:
            alignment = Qt.AlignVCenter | Qt.AlignRight
        elif self.slider.scalePosition() == Qwt.QwtSlider.RightScale:
            alignment = Qt.AlignVCenter | Qt.AlignLeft
        elif self.slider.scalePosition() == Qwt.QwtSlider.TopScale:
            alignment = Qt.AlignHCenter | Qt.AlignBottom
        elif self.slider.scalePosition() == Qwt.QwtSlider.BottomScale:
            alignment = Qt.AlignHCenter | Qt.AlignTop

        self.label = QLabel("0", self)
        self.label.setAlignment(alignment)
        self.label.setFixedWidth(self.label.fontMetrics().width('10000.9'))

        self.connect(self.slider,
                     SIGNAL('valueChanged(double)'),
                     self.setNum)
        
        if self.slider.orientation() == Qt.Horizontal:
            layout = QHBoxLayout(self)
        else:
            layout = QVBoxLayout(self)

        layout.addWidget(self.slider)
        layout.addWidget(self.label)
            
    # __init__ ()

    def createSlider(self, parent, sliderType):

        if sliderType == 0:
            slider = Qwt.QwtSlider(parent,
                                   Qt.Horizontal,
                                   Qwt.QwtSlider.TopScale,
                                   Qwt.QwtSlider.BgTrough)
            slider.setThumbWidth(10)
            slider.setRange(-10.0, 10.0, 1.0, 0) # paging disabled
            return slider

        if sliderType == 1:
            slider = Qwt.QwtSlider(parent,
                                   Qt.Horizontal,
                                   Qwt.QwtSlider.NoScale,
                                   Qwt.QwtSlider.BgBoth)
            slider.setRange(0.0, 1.0, 0.01, 5)
            return slider

        if sliderType == 2:
            slider = Qwt.QwtSlider(parent,
                                   Qt.Horizontal,
                                   Qwt.QwtSlider.BottomScale,
                                   Qwt.QwtSlider.BgSlot)
            slider.setThumbWidth(25)
            slider.setThumbLength(12)
            slider.setRange(1000.0, 3000.0, 10.0, 10)
            return slider

        if sliderType == 3:
            slider = Qwt.QwtSlider(parent,
                                   Qt.Vertical,
                                   Qwt.QwtSlider.LeftScale,
                                   Qwt.QwtSlider.BgSlot)
            slider.setRange(0.0, 100.0, 1.0, 5)
            slider.setScaleMaxMinor(5)
            return slider

        if sliderType == 4:
            slider = Qwt.QwtSlider(parent,
                                   Qt.Vertical,
                                   Qwt.QwtSlider.NoScale,
                                   Qwt.QwtSlider.BgTrough)
            slider.setRange(0.0,100.0,1.0, 10)
            return slider

        if sliderType == 5:
            slider = Qwt.QwtSlider(parent, 
                                   Qt.Vertical,
                                   Qwt.QwtSlider.RightScale,
                                   Qwt.QwtSlider.BgBoth)
            slider.setScaleEngine(Qwt.QwtLog10ScaleEngine())
            slider.setThumbWidth(20)
            slider.setBorderWidth(1)
            slider.setRange(0.0, 4.0, 0.01)
            slider.setScale(1.0, 1.0e4)
            slider.setScaleMaxMinor(10)
            return slider

        return None

    # createSlider()

    def setNum(self, value):
        if isinstance(self.slider.scaleEngine(), Qwt.QwtLog10ScaleEngine):
            value  = 10.0**value

        self.label.setText('%s' % value)

    # setNum()

# class(SliderWidget)


class SliderDemo(QWidget):

    def __init__(self, *args):
        QWidget.__init__(self, *args)

        hSliderLayout = Layout(Qt.Vertical)
        for i in (0, 1, 2):
            hSliderLayout.addWidget(Slider(self, i))
        hSliderLayout.addStretch()

        vSliderLayout = Layout(Qt.Horizontal)
        for i in (3, 4, 5):
            vSliderLayout.addWidget(Slider(self, i))

        vTitle = QLabel("Vertical Sliders", self)
        vTitle.setFont(QFont("Helvetica", 14, QFont.Bold))
        vTitle.setAlignment(Qt.AlignHCenter)

        layout1 = Layout(Qt.Vertical)
        layout1.addWidget(vTitle, 0)
        layout1.addLayout(vSliderLayout, 10)
        
        hTitle = QLabel("Horizontal Sliders", self)
        hTitle.setFont(vTitle.font())
        hTitle.setAlignment(Qt.AlignHCenter)
        
        layout2 = Layout(Qt.Vertical)
        layout2.addWidget(hTitle, 0)
        layout2.addLayout(hSliderLayout, 10)

        mainLayout = Layout(Qt.Horizontal, self)
        mainLayout.addLayout(layout1)
        mainLayout.addLayout(layout2, 10)
 
    # __init__()

# class SliderDemo


def make():
    demo = SliderDemo()
    demo.show()
    return demo

# make()


def main(args):
    app = QApplication(args)
    demo = make()
    sys.exit(app.exec_())

# main()


# Admire!
if __name__ == '__main__':
    if 'settracemask' in sys.argv:
        # for debugging, requires: python configure.py --trace ...
        import sip
        sip.settracemask(0x3f)

    main(sys.argv)

# Local Variables: ***
# mode: python ***
# End: ***
