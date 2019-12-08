#ifndef MODULEBASELINE_H
#define MODULEBASELINE_H

#include <QObject>
#include "module.h"

enum FilterType{ Butterworth };// to trzeba uzupelnic filtrami ktore beda uzywane w tym module


class ModuleBaseline : public Module
{
public:

    FilterType filterType;
    QList<double> inputData;
    QList<double> outputData;


    ModuleBaseline();
    ~ModuleBaseline();

    void AnalyzeSignal();
    void ButterworthFilter();
    //dodac metody dla pozostalych filtrow
};


#endif // MODULEBASELINE_H




