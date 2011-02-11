#!/usr/bin/env python

from lib import *

def make():
    return testPlot(), testIPlot()

# make()

def main(args):
    app = QApplication(args)
    demo = make()
    sys.exit(app.exec_())

# main()

# Admire!
if __name__ == '__main__':
    main(sys.argv)

# Local Variables: ***
# mode: python ***
# End: ***
