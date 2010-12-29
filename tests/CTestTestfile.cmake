# CMake generated Testfile for 
# Source directory: /home/halida/data/workspace/pyside/PySideQwt/tests
# Build directory: /home/halida/data/workspace/pyside/PySideQwt/tests
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(qwt "/usr/bin/python2.6" "/home/halida/data/workspace/pyside/PySideQwt/tests/qwt_test.py")
SET_TESTS_PROPERTIES(qwt PROPERTIES  ENVIRONMENT "PYTHONPATH=/home/halida/data/workspace/pyside/PySideQwt/qwt:/data/workspace/pyside/pkg/pyside-sandbox/lib/python2.6/site-packages;LD_LIBRARY_PATH=/home/halida/data/workspace/pyside/PySideQwt/../qwt-5.2:/data/workspace/pyside/pkg/pyside-sandbox//lib:")
