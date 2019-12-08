#ifndef MODULESTSEGMENT_H
#define MODULESTSEGMENT_H

#include <QObject>
#include "module.h"

class ModuleStSegment : public Module
{
public:
    QList<double> inputData; //sygnal ecg_baseline
    QList<double> inputWaves; //dane z waves, moga byc w 1 zmiennej jakiegos typu lub podzielone

    //outputs:
    //tu trzeba dodac dane wyjsciowe np w formie list jak inputData

    ModuleStSegment();
    ~ModuleStSegment();

    void AnalyzeSignal();
};

#endif // MODULESTSEGMENT_H


