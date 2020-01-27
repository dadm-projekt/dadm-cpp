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
    ecg.cpp \
    hrvhisto.cpp \
    hrvperiodogram.cpp \
    hrvpoincare.cpp \
        mainwindow.cpp \
    ecganalyzercontroller.cpp \
    dataloader.cpp \
    module.cpp \
    datafile.cpp \
    modulebaseline.cpp \
    plotdfa1.cpp \
    plotdfa2.cpp \
    qcustomplot.cpp \
    tachogram.cpp \
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
    detectingmorfology.cpp \
    qcustomplot.cpp \
    hrvperiodogram.cpp \
    plotdfa2.cpp \
    tachogram.cpp \
    plotdfa1.cpp


HEADERS  += mainwindow.h \
    ecg.h \
    ecganalyzercontroller.h \
    dataloader.h \
    fftw3.h \
    hrvhisto.h \
    hrvperiodogram.h \
    hrvpoincare.h \
    module.h \
    datafile.h \
    modulebaseline.h \
    plotdfa1.h \
    plotdfa2.h \
    qcustomplot.h \
    spline.h \
    tachogram.h \
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
    tmwtypes.h \
    qcustomplot.h \
    hrvperiodogram.h \
    plotdfa2.h \
    tachogram.h \
    plotdfa1.h


FORMS    += mainwindow.ui \
    ecg.ui \
    hrvhisto.ui \
    hrvperiodogram.ui \
    hrvperiodogram.ui \
    hrvpoincare.ui \
    plotdfa1.ui \
    plotdfa2.ui \
    plotdfa2.ui \
    tachogram.ui \
    tachogram.ui \
    plotdfa1.ui

LIBS+= "C:\Users\Weronika\Desktop\dadm-cpp\src\build-ECGAnalyzer-Desktop_Qt_5_14_0_MinGW_64_bit-Debug\libfftw3-3.dll"

