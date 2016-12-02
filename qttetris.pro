QT += core
QT -= gui

CONFIG += c++11

TARGET = qttetris
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += src/main.cpp \
    src/applicationbuilder.cpp \
    src/engine/gameengine.cpp \
    src/gui/consolegui.cpp \
    src/gui/gameplay.cpp \
    src/engine/randomgenerator.cpp \
    src/engine/seeder.cpp \
    src/engine/enginebuilder.cpp \
    src/engine/tetrismain.cpp \
    src/engine/tetrisrawdata.cpp

HEADERS += \
    src/applicationbuilder.h \
    src/engine/gameengine.h \
    src/gui/consolegui.h \
    src/gui/gameplay.h \
    src/engine/randomgenerator.h \
    src/engine/seeder.h \
    src/engine/enginebuilder.h \
    src/engine/tetrismain.h \
    src/engine/tetrisrawdata.h

INCLUDEPATH += src
