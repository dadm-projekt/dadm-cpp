#ifndef MODULERPEAKS_H
#define MODULERPEAKS_H

#include <QObject>
#include "module.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

enum Method{ PanTompkins, Hilbert };

class ModuleRPeaks : public Module
{
public:

    Method method;
    QList<double> inputData;
    QList<double> outputData;
    ModuleRPeaks();
    ModuleRPeaks(QList<double> inputData);
    ~ModuleRPeaks();
    QList<double> getInputRPeaks();
    QList<double> getoutputData();
    void setInputRPeaks(QList<double> inputRPeaks);
    void setoutputData(QList<double> outputData);

    void AnalyzeSignal(); // wywoluje metode pantompkins
    void PanTompkins();
};

#endif // MODULERPEAKS_H

