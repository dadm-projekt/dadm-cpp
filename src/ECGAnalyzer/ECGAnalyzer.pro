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
    dfa.cpp \
    mainwindow.cpp \
    ecganalyzercontroller.cpp \
    dataloader.cpp \
    module.cpp \
    datafile.cpp \
    modulebaseline.cpp \
    viewmodule.cpp \
    viewmodulebaseline.cpp \
    modulerpeaks.cpp \
    viewmodulerpeaks.cpp \
    modulehrv1.cpp \
    viewmodulehrv1.cpp \
    modulehrv2.cpp \
    viewmodulehrv2.cpp \
    modulewaves.cpp \
    viewmodulewaves.cpp \
    modulehrvdfa.cpp \
    viewmodulehrvdfa.cpp \
    modulestsegment.cpp \
    viewmodulestsegment.cpp \
    detectmorfology_emxutil.cpp \
    detectmorfology_emxapi.cpp \
    detectingmorfology.cpp

HEADERS  += mainwindow.h \
    dfa.h \
    ecganalyzercontroller.h \
    dataloader.h \
    fftw3.h \
    module.h \
    datafile.h \
    modulebaseline.h \
    spline.h \
    viewmodule.h \
    viewmodulebaseline.h \
    modulerpeaks.h \
    viewmodulerpeaks.h \
    modulehrv1.h \
    viewmodulehrv1.h \
    modulehrv2.h \
    viewmodulehrv2.h \
    modulewaves.h \
    viewmodulewaves.h \
    modulehrvdfa.h \
    viewmodulehrvdfa.h \
    modulestsegment.h \
    viewmodulestsegment.h \
    detectmorfology_types.h \
    detectmorfology_emxutil.h \
    rtwtypes.h \
    detectmorfology_emxapi.h \
    detectingmorfology.h \
    tmwtypes.h

FORMS    += mainwindow.ui
LIBS+= "C:\Users\K\Desktop\Projekty\dadm-cpp\src\build-ECGAnalyzer-Desktop_Qt_5_14_0_MinGW_64_bit-Debug\libfftw3-3.dll"
INCLUDEPATH += "C:\Users\Weronika\Desktop\dadm-cpp\eigen-3.3.7"
