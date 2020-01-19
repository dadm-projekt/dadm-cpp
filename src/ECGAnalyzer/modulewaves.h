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
    QList<double> tOnset;
    QList<double> tEnd;
    QList<double> pOnset;
    QList<double> pEnd;

    ModuleWaves();

    ModuleWaves(QList<double> inputData, QList<double> inputRPeaks);

    ~ModuleWaves();

    QList<double> getInputData();

    QList<double> getInputRPeaks();

    QList<double> getQRSOnset();

    QList<double> getQRSEnd();

    QList<double> getTOnset();

    QList<double> getTEnd();

    QList<double> getPOnset();

    QList<double> getPEnd();

    void setInputData(QList<double> inputData);

    void setInputRPeaks(QList<double> inputRPeaks);

    void setQRSOnset(QList<double> qrsOnset);

    void setQRSEnd(QList<double> qrsEnd);

    void setTOnset(QList<double> tOnset);

    void setTEnd(QList<double> tEnd);

    void setPOnset(QList<double> pOnset);

    void setPEnd(QList<double> pEnd);

    QList<double> differentiation(QList<double> inputD);

    QList<double> integration(QList<double> inputD, int M);

    void detectQRS();

    void detectWaves();

    void AnalyzeSignal();
};

#endif // MODULEWAVES_H
