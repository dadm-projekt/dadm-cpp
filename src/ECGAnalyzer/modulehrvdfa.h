#ifndef MODULEHRVDFA_H
#define MODULEHRVDFA_H

#include <QObject>
#include "module.h"

class ModuleHrvDfa : public Module
{
public:
    QList<double> inputData;

    //otputs:
    // (tabela z wynikami itp)

    ModuleHrvDfa();
    ~ModuleHrvDfa();

    void AnalyzeSignal();
};

#endif // MODULEHRVDFA_H

