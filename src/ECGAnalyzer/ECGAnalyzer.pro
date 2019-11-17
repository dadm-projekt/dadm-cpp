#-------------------------------------------------
#
# Project created by QtCreator 2019-11-17T12:03:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ECGAnalyzer
TEMPLATE = app


SOURCES += main.cpp\
        window.cpp

HEADERS  += window.h \
    data_loader.h

FORMS    += window.ui
