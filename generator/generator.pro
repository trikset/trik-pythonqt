TARGET = pythonqt_generator
include(generator.pri)
gcc:QMAKE_CXXFLAGS += -Wno-error=maybe-uninitialized

# Input
HEADERS += \
        generatorsetqtscript.h \
        metaqtscriptbuilder.h \
        metaqtscript.h \
        shellgenerator.h \
        shellimplgenerator.h \
        shellheadergenerator.h \
        setupgenerator.h
   
SOURCES += \
        generatorsetqtscript.cpp \
        metaqtscriptbuilder.cpp \
        metaqtscript.cpp \
        shellgenerator.cpp \
        shellimplgenerator.cpp \
        shellheadergenerator.cpp \
        setupgenerator.cpp
