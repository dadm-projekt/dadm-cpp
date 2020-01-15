#ifndef MODULEHRV2_H
#define MODULEHRV2_H

#include <QObject>
#include <QVector>
#include <QDebug>
#include "module.h"

class ModuleHrv2 : public Module
{
    QVector<double> RRvector;
    double HRVi;
    double SD1;
    double SD2;
    double TINN;



public:


    QList<double> inputData; //R_Peaks
    //outputs:


    ModuleHrv2(QList<double>);
    ~ModuleHrv2();

//    void AnalyzeSignal(); // wywoluje ponizsze metody
    QVector<double> HistogramY();
    double Tinn(QList<double>);
    double Poincare();
    double HRVindex(QList<double>);

};

#endif // MODULEHRV2_H

