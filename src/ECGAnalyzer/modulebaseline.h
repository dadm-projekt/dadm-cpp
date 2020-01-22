#ifndef MODULEBASELINE_H
#define MODULEBASELINE_H

#include <QObject>
#include "module.h"

enum FilterType{ Butterworth, ButterworthHP, Elliptic };
enum SampleFrequency { fp100, fp150, fp200, fp250, fp360 };


class ModuleBaseline : public Module
{
public:



  ModuleBaseline();
  ~ModuleBaseline();

    FilterType filterType;
    SampleFrequency sampleFrequency;
    QVector<double> inputData;
    QVector<double> outputData;
    //QList<double> inputData;
    //QList<double> outputData;
    QVector<double> B_coeffA, B_coeffB, HP_coeffA, HP_coeffB, E_coeffA, E_coeffB;
    int np;




    void AnalyzeSignal();
    QVector<double> ButterworthFilter(QVector<double>, QVector<double>, QVector<double> inputData, int);
    QVector<double> ButterworthFilterHP(QVector<double>,QVector<double>,QVector<double>,int);
    QVector<double> EllipticFilter(QVector<double>,QVector<double>,QVector<double>,int);

};


#endif // MODULEBASELINE_H
