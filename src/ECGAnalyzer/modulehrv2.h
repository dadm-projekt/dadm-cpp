#ifndef MODULEHRV2_H
#define MODULEHRV2_H

#include <QObject>
#include <QDebug>
#include "module.h"

class ModuleHrv2 : public Module
{
public:

    QList<double> inputData; //R_Peaks
    //outputs:


    ModuleHrv2();
    ~ModuleHrv2();

    void AnalyzeSignal(); // wywoluje ponizsze metody
    void Histogram();
    void Tinn();
    //itd
};

#endif // MODULEHRV2_H

