#ifndef MODULERPEAKS_H
#define MODULERPEAKS_H

#include <QObject>
#include "module.h"

// Struktura w której każdy kolejny pomiar ma przypisany numer próbki
struct piki{
    unsigned int numer;
    double pomiar;
};
class ModuleRPeaks : public Module
{
public:

    QList<double> inputData;
    QList<double> RPeaks;

    ModuleRPeaks();
    ~ModuleRPeaks();

    QList<double> getInputData();
    QList<double> getRPeaks();

    void setRPeaks(QList<double> RPeaks);
    void setInputData(QList<double> inputData);

    void AnalyzeSignal(); // wywoluje metode pantompkins lub hilbetrt
    void PanTompkins();
};

#endif // MODULERPEAKS_H

