project(qwt)

set(qwt_SRC
    ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/pysideqwt_module_wrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplot_wrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotitem_wrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotcurve_wrapper.cpp
)

set(qwt_INCLUDE_DIRECTORIES
    ${SHIBOKEN_INCLUDE_DIR}
    ${PYTHON_INCLUDE_PATH}
    ${PYSIDE_INCLUDE_DIR}
    ${PYSIDE_INCLUDE_DIR}/QtCore
    ${PYSIDE_INCLUDE_DIR}/QtGui
    ${QT_INCLUDE_DIR}
    ${QT_QTCORE_INCLUDE_DIR}
    ${LIBQWT_DIR}/src
)

set(qwt_LINK_LIBRARIES
    ${QT_QTCORE_LIBRARY}
    ${SHIBOKEN_PYTHON_LIBRARIES}
    ${SHIBOKEN_LIBRARY}
    ${PYSIDE_LIBRARY}
    ${LIBQWT_DIR}/lib/libqwt.so
)

include_directories(qwt ${qwt_INCLUDE_DIRECTORIES})
add_library(PySideQwt MODULE ${qwt_SRC})
set_property(TARGET PySideQwt PROPERTY PREFIX "")
target_link_libraries(PySideQwt ${qwt_LINK_LIBRARIES})

add_custom_command(OUTPUT ${qwt_SRC}
                    COMMAND ${GENERATOR}
                    --generatorSet=shiboken --enable-parent-ctor-heuristic --enable-pyside-extensions --enable-return-value-heuristic
                    ${CMAKE_SOURCE_DIR}/qwt/global.h
                    --include-paths=${QT_INCLUDE_DIR}:${LIBQWT_DIR}/src
                    --typesystem-paths=${typesystem_path}:${PYSIDE_TYPESYSTEMS}
                    --output-directory=${CMAKE_CURRENT_BINARY_DIR}
                    ${CMAKE_CURRENT_SOURCE_DIR}/typesystem_qwt.xml
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                    COMMENT "Running generator for libqwt..."
                   )
