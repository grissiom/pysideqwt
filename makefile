# build so
b:
	cd build_object; $(MAKE)

install: b
	cp build_object/qwt/PySideQwt.so src/
	sudo python setup.py install
