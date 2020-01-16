#ifndef MODULEBASELINE_H
#define MODULEBASELINE_H

#include <QObject>
#include "module.h"

enum FilterType{ Butterworth, ButterworthHP, Elliptic };
enum SampleFrequency { '100', '200', '250', '360', '500' };


class ModuleBaseline : public Module
{
public:

 //Testuje QT

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

};


#endif // MODULEBASELINE_H
