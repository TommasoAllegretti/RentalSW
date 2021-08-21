#-------------------------------------------------
#
# Project created by QtCreator 2021-08-19T11:58:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RentalSW
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    model/day.cpp \
    model/deepptr.cpp \
    model/offroadvehicle.cpp \
    model/rentalobject.cpp \
    model/roadvehicle.cpp \
    model/showroomvehicle.cpp

HEADERS += \
        mainwindow.h \
    model/day.h \
    model/deepptr.h \
    model/offroadvehicle.h \
    model/rentalobject.h \
    model/roadvehicle.h \
    model/showroomvehicle.h
