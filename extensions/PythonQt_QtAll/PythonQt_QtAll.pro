# get external pythonqtall config or enable all by default

isEmpty( PYTHONQTALL_CONFIG ) {
  PYTHONQTALL_CONFIG = $$(PYTHONQTALL_CONFIG)
}

isEmpty( PYTHONQTALL_CONFIG ) {
  message("using default PythonQt_QtAll Configuration")
  CONFIG += PythonQtCore
  qtHaveModule(gui):qtHaveModule(widgets):CONFIG += PythonQtGui
  qtHaveModule(svg):CONFIG += PythonQtSvg
  qtHaveModule(sql):CONFIG += PythonQtSql
  qtHaveModule(network):CONFIG += PythonQtNetwork
  qtHaveModule(opengl):CONFIG += PythonQtOpengl
  qtHaveModule(xml):CONFIG += PythonQtXml
  qtHaveModule(xmlpatterns):CONFIG += PythonQtXmlpatterns
  qtHaveModule(multimedia):CONFIG += PythonQtMultimedia
  qtHaveModule(qml):CONFIG += PythonQtQml
  qtHaveModule(quick):CONFIG += PythonQtQuick
  qtHaveModule(uitools):CONFIG += PythonQtUiTools

  qtHaveModule(webkit):CONFIG += PythonQtWebKit
} else {
  message("using given PythonQt_QtAll Configuration: ")
  message("  $${PYTHONQTALL_CONFIG}")
  CONFIG += $${PYTHONQTALL_CONFIG}
}

TARGET=trikPythonQt_QtAll-Qt$${QT_MAJOR_VERSION}$${QT_MINOR_VERSION}-PythonXY
TEMPLATE = lib

#DESTDIR    = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
TARGET = $$replace(TARGET, PythonXY, Python$${PYTHON_VERSION})

CONFIG += qt strict_c++

!static:!staticlib {
  CONFIG += dll
  # Force linker to complain on undefined references for dll/so/dylib build when possible
  QMAKE_LFLAGS_SHLIB += $$QMAKE_LFLAGS_NOUNDEF
}

DEFINES += PYTHONQT_QTALL_EXPORTS

HEADERS +=                \
  $$PWD/PythonQt_QtAll.h
  
SOURCES +=                \
  $$PWD/PythonQt_QtAll.cpp

unix {
  CONFIG += create_pc create_prl no_install_prl
  QMAKE_PKGCONFIG_NAME = trikPythonQt_QtAll-Qt$${QT_MAJOR_VERSION}-Python$${PYTHON_VERSION}
  QMAKE_PKGCONFIG_DESCRIPTION = Dynamic Python binding for the Qt framework
  QMAKE_PKGCONFIG_PREFIX = $$INSTALLBASE
  QMAKE_PKGCONFIG_LIBDIR = $$target.path
  QMAKE_PKGCONFIG_INCDIR = $$headers.path
  QMAKE_PKGCONFIG_INCDIR += $$PREFIX/include/trikPythonQt
  QMAKE_PKGCONFIG_VERSION = $$VERSION
}

unix: target.path = $${INSTALL_PREFIX}/lib
win32: target.path = /

headers.files = $${HEADERS}
headers.path = $${INSTALL_PREFIX}/include

INSTALLS += target headers

defineTest(Xinclude) {
  f=$$PYTHONQT_GENERATED_PATH/$$1/$${1}.pri
  exists($$f):include($$f):export(HEADERS):export(SOURCES):export(DEFINES)

}


PythonQtCore:Xinclude (com_trolltech_qt_core) {
  DEFINES += PYTHONQT_WITH_CORE
  QT += core
}

PythonQtGui:Xinclude (com_trolltech_qt_gui)  {
  DEFINES += PYTHONQT_WITH_GUI
  QT += gui widgets printsupport
}

PythonQtSvg:Xinclude (com_trolltech_qt_svg) {
  DEFINES += PYTHONQT_WITH_SVG
  QT +=svg
}

PythonQtSql:Xinclude (com_trolltech_qt_sql) {
  DEFINES += PYTHONQT_WITH_SQL
  QT += sql
}

PythonQtNetwork:Xinclude (com_trolltech_qt_network) {
  DEFINES += PYTHONQT_WITH_NETWORK
  QT += network
}

PythonQtOpengl:PythonQtCore: Xinclude (com_trolltech_qt_opengl) {
  DEFINES += PYTHONQT_WITH_OPENGL
  QT += opengl
  QT += xml
}

PythonQtXmlpatterns:Xinclude (com_trolltech_qt_xmlpatterns) {
  DEFINES += PYTHONQT_WITH_XMLPATTERNS
  QT += xmlpatterns
}

PythonQtMultimedia:Xinclude (com_trolltech_qt_multimedia) {
  DEFINES += PYTHONQT_WITH_MULTIMEDIA
  QT += multimedia multimediawidgets
}

PythonQtQml:Xinclude (com_trolltech_qt_qml) {
  DEFINES += PYTHONQT_WITH_QML
  QT += qml
}

PythonQtQuick:Xinclude (com_trolltech_qt_quick) {
  DEFINES += PYTHONQT_WITH_QUICK
  QT += quick quickwidgets
}

PythonQtUiTools:Xinclude (com_trolltech_qt_uitools) {
  DEFINES += PYTHONQT_WITH_UITOOLS
  QT += uitools
}

PythonQtWebKit:Xinclude (com_trolltech_qt_webkit) {
  DEFINES += PYTHONQT_WITH_WEBKIT
  QT += webkit webkitwidgets
}
