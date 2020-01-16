#ifndef MODULEBASELINE_H
#define MODULEBASELINE_H

#include <QObject>
#include "module.h"

enum FilterType{ Butterworth, ButterworthHP, Elliptic };// to trzeba uzupelnic filtrami ktore beda uzywane w tym module
enum SampleFrequency { '100', '150', '200', '250', '360' }; //ogarnąć


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
    QVector< QVector<double> >  coeffAB;
    QVector< QVector<double> >  HPcoeffAB;
    QVector< QVector<double> >  EEcoeffAB;



    void AnalyzeSignal();
    QVector<double> ButterworthFilter(QVector<double>,QVector<double>,QVector<double>);
    QVector<double> ButterworthFilterHP(QVector<double>,QVector<double>,QVector<double>);
    QVector<double> EllipticFilter(QVector<double>,QVector<double>,QVector<double>);
    //dodac metody dla pozostalych filtrow
};


#endif // MODULEBASELINE_H
