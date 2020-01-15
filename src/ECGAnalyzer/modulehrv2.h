#ifndef MODULEHRV2_H
#define MODULEHRV2_H

#include <QObject>
#include <QDebug>
#include "module.h"

class ModuleHrv2 : public Module
{

    double HRVi;
    double SD1;
    double SD2;
    double TINN;



public:


    QList<double> inputData; //R_Peaks
    //outputs:


    ModuleHrv2();
    ~ModuleHrv2();

    void AnalyzeSignal(); // wywoluje ponizsze metody
    double Histogram();
    double Tinn(QList<double>);
    double Poincare();
    double HRVindex();

    //itd
};

#endif // MODULEHRV2_H

