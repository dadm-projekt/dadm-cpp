#ifndef MODULEWAVES_H
#define MODULEWAVES_H

#include <QObject>
#include "module.h"

class ModuleWaves : public Module
{
public:
    QList<double> inputData; //z ecg_baseline
    QList<double> inputRPeaks;

    QList<double> qrsOnset;
    QList<double> qrsEnd;
    QList<double> tEnd;
    QList<double> pOnset;
    QList<double> pEnd;

    ModuleWaves();
    ~ModuleWaves();

    void AnalyzeSignal();
};

#endif // MODULEWAVES_H
