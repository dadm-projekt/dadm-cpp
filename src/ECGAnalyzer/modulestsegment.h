#ifndef MODULESTSEGMENT_H
#define MODULESTSEGMENT_H

#include <QObject>
#include "module.h"
#include "rtwtypes.h"
#include "detectmorfology_types.h"

class ModuleStSegment : public Module
{
public:
    QList<double> inputData; //sygnal ecg_baseline
    QList<double> inputWaves; //dane z waves, moga byc w 1 zmiennej jakiegos typu lub podzielone

    //outputs:
    //tu trzeba dodac dane wyjsciowe np w formie list jak inputData

    ModuleStSegment();
    //ModuleStSegment(QList<double> inputData, QList<double> inputData )
    ~ModuleStSegment();

    //void AnalyzeSignal();
   virtual void AnalyzeSignal(const emxArray_real_T*, const emxArray_real_T*, const emxArray_real_T*)=0;
};

#endif // MODULESTSEGMENT_H




