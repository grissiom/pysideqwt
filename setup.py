 #!/usr/bin/env python

from distutils.core import setup

desc = """PySideQwt is the python binding of Qwt build with PySide,
and mostly inspired by PyQwt. 
"""

setup(
    name             = "PySideQwt",
    version          = "0.1",
    description      = "PySide bindings for the Qwt library",
    url              = "http://http://gitorious.org/pysideqwt",
    author           = "linjunhalida",
    author_email     = "linjunhalida@gmail.com",
    license          = "LGPL",
    long_description = desc,
    platforms        = "Unix, Windows, Mac OS X",

    packages         = ['PySideQwt'],
    package_dir      = {'PySideQwt': 'src'},
    package_data     = {'PySideQwt': ['PySideQwt.so']},
    )
