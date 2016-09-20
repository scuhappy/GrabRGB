#-------------------------------------------------
#
# Project created by QtCreator 2016-09-20T10:36:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
DESTDIR+=$$PWD/bin
TARGET = YorkGetRGB
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    controlpanel.cpp

HEADERS  += mainwindow.h \
    controlpanel.h

FORMS    += mainwindow.ui \
    controlpanel.ui
