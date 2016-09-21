#-------------------------------------------------
#
# Project created by QtCreator 2016-09-20T10:36:49
#
#-------------------------------------------------

QT       += core gui
RC_FILE = ./Resources/RGB.rc
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
DESTDIR+=$$PWD/bin
TARGET = YorkGetRGB
TEMPLATE = app


SOURCES += src/main.cpp\
         src/mainwindow.cpp \
     src/controlpanel.cpp

HEADERS  +=  src/mainwindow.h \
     src/controlpanel.h

FORMS    +=  src/mainwindow.ui \
     src/controlpanel.ui
