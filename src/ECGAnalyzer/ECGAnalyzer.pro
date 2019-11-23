#-------------------------------------------------
#
# Project created by QtCreator 2019-11-18T12:28:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ECGAnalyzer
TEMPLATE = app

CONFIG += c++14

SOURCES += main.cpp\
        mainwindow.cpp \
    ecganalyzercontroller.cpp \
    dataloader.cpp \
    module.cpp \
    datafile.cpp \
    modulebaseline.cpp \
    viewmodule.cpp \
    viewmodulebaseline.cpp

HEADERS  += mainwindow.h \
    ecganalyzercontroller.h \
    dataloader.h \
    module.h \
    datafile.h \
    modulebaseline.h \
    viewmodule.h \
    viewmodulebaseline.h

FORMS    += mainwindow.ui
