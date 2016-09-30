#-------------------------------------------------
#
# Project created by QtCreator 2016-09-28T11:19:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RPG
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Controller/controller.cpp \
    Model/map.cpp \
    Model/cell.cpp \
    Model/character.cpp

HEADERS  += mainwindow.h \
    Controller/controller.h \
    Model/map.h \
    Model/cell.h \
    Model/character.h

RESOURCES += \
    Image/img.qrc \
    Image/img.qrc
