project(qwt)

set(qwt_support_SRC
  ${CMAKE_CURRENT_SOURCE_DIR}/support/qwt_numeric.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/support/qwt_numpy.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/support/qwt_numarray.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/support/qwt_ndarray.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/support/qwt_numerical_interface.cpp
  )

set(qwt_SRC
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/pysideqwt_module_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotrescaler_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdyngridlayout_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscalediv_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscaleengine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtlinearscaleengine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtlog10scaleengine_wrapper.cpp

  # not found..
  # ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtmathmltextengine_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscalemap_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdata_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdial_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscaledraw_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtsymbol_wrapper.cpp
  
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpicker_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotpicker_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotdict_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplot_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwttext_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotitem_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotcurve_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtabstractscale_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtabstractscaledraw_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtabstractslider_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtanalogclock_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtarraydata_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtarrowbutton_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtclipper_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcompass_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcompassmagnetneedle_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcompassrose_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcompasswindarrow_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdoublerange_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcounter_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcpointerdata_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdialneedle_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdialscaledraw_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdialsimpleneedle_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtdoubleinterval_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwteventpattern_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwteventpattern_keypattern_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwteventpattern_mousepattern_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtintervaldata_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtknob_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtlegend_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtlegenditem_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtlegenditemmanager_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcolormap_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtalphacolormap_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtlinearcolormap_wrapper.cpp

  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtmagnifier_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtmetricsmap_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpainter_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpanner_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpickerclickpointmachine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpickerclickrectmachine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpickerdragpointmachine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpickerdragrectmachine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpickermachine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpickerpolygonmachine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplaintextengine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotcanvas_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotgrid_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotlayout_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotmagnifier_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotmarker_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotpanner_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotprintfilter_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotscaleitem_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtrasterdata_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotrasteritem_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotspectrogram_wrapper.cpp
  #${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotsvgitem_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtplotzoomer_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtpolygonfdata_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtrichtextengine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtroundscaledraw_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscalearithmetic_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscaletransformation_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtscalewidget_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtsimplecompassrose_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtslider_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtspline_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtcurvefitter_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtsplinecurvefitter_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwttextengine_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwttextlabel_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtthermo_wrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/PySideQwt/qwtwheel_wrapper.cpp

  )

set(qwt_INCLUDE_DIRECTORIES
  ${QWT_INCLUDE_DIR}
  ${SHIBOKEN_INCLUDE_DIR}
  ${SHIBOKEN_PYTHON_INCLUDE_DIR}
  ${PYSIDE_INCLUDE_DIR}
  ${PYSIDE_INCLUDE_DIR}/QtCore
  ${PYSIDE_INCLUDE_DIR}/QtGui
  ${QT_INCLUDE_DIR}
  ${QT_QTCORE_INCLUDE_DIR}
  ${LIBQWT_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/support
  ${CMAKE_CURRENT_SOURCE_DIR}
  )

set(qwt_LINK_LIBRARIES
  ${QT_QTCORE_LIBRARY}
  ${SHIBOKEN_PYTHON_LIBRARIES}
  ${SHIBOKEN_LIBRARY}
  ${PYSIDE_LIBRARY}
  ${QWT_LIBRARY}
  )

include_directories(qwt ${qwt_INCLUDE_DIRECTORIES})
add_library(PySideQwt MODULE ${qwt_SRC} ${qwt_support_SRC})
set_property(TARGET PySideQwt PROPERTY PREFIX "")
target_link_libraries(PySideQwt ${qwt_LINK_LIBRARIES})

add_custom_command(OUTPUT ${qwt_SRC}
  COMMAND ${GENERATORRUNNER_BINARY}
  --generatorSet=shiboken --enable-parent-ctor-heuristic --enable-pyside-extensions --enable-return-value-heuristic
  ${CMAKE_CURRENT_SOURCE_DIR}/global.h
  --include-paths=${QT_INCLUDE_DIR}:${QWT_INCLUDE_DIR}
  --typesystem-paths=${typesystem_path}:${PYSIDE_TYPESYSTEMS}
  --output-directory=${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/typesystem_qwt.xml
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT "Running generator for libqwt..."
  )

