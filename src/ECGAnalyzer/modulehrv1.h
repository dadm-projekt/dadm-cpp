#ifndef MODULEHRV1_H
#define MODULEHRV1_H

#include <QObject>
#include "module.h"

class ModuleHrv1 : public Module
{
public:

    QList<double> inputData; //z R_Peaks
    //outputs:
    QList<double> timeParams;
    QList<double> freqParams;
    //dodac jesli potrzebne


    ModuleHrv1();
    ~ModuleHrv1();

    void AnalyzeSignal();
    void FindTimeParams();
    void FindFreqParams();
};

#endif // MODULEHRV1_H

