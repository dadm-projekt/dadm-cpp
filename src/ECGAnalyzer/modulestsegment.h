#ifndef MODULESTSEGMENT_H
#define MODULESTSEGMENT_H

/* Include files */
#include <QObject>
#include "module.h"

/* Type Definitions */
class ModuleStSegment : public Module
{
public:
    QList<double> inputData; //z ecg_baseline
    QList<double> inputqrsEnd; //z modulu module waves
    QList<double> inputtOnset; //z modulu module waves

    QList<double> morfology;

    ModuleStSegment();

    ModuleStSegment(QList<double> inputData, QList<double> qrsEnd, QList<double> tOnset);

    ~ModuleStSegment();


    QList<double> getInputData();

    QList<double> getInputQRSEnd();

    QList<double> getInputTOnset();

    QList<double> getMorfology();

    void setInputData(QList<double> inputData);

    void setInputQRSEnd(QList<double> inputqrsEnd);

    void setInputTOnset(QList<double> inputtOnset);

    void setMorfology(QList<double> morfology);

    void detectMorfology();

    void AnalyzeSignal();
};

#endif // MODULESTSEGMENT_H
