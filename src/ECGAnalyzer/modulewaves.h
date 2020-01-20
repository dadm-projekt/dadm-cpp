#ifndef MODULEWAVES_H
#define MODULEWAVES_H

#include <QObject>
#include "module.h"
#include "rtwtypes.h"
#include "detectmorfology_types.h"
#include "module.h"
#include "modulewaves.h"


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
    //virtual void AnalyzeSignal(const emxArray_real_T* filtred_ecg, const emxArray_real_T* QRS_end, const emxArray_real_T* T_onset)=0;
    //void AnalyzeSignal();
    virtual void AnalyzeSignal(const emxArray_real_T*, const emxArray_real_T*, const emxArray_real_T*)=0;
};

#endif // MODULEWAVES_H
