#ifndef ECGANALYZERCONTROLLER_H
#define ECGANALYZERCONTROLLER_H

#include <QObject>
#include "dataloader.h"
#include "modulebaseline.h"
#include "modulehrv1.h"
#include "modulehrv2.h"
#include "modulehrvdfa.h"
#include "modulerpeaks.h"
#include "modulestsegment.h"
#include "modulewaves.h"
#include "module.h"
#include "datafile.h"


class ECGAnalyzerController : public QObject
{
    Q_OBJECT
public:
    explicit ECGAnalyzerController(QObject *parent = 0);
    ~ECGAnalyzerController();

    //data
    ModuleBaseline module_baseline;
    ModuleRPeaks module_rpeaks;
    ModuleHrvDfa module_dfa;
    ModuleHrv1 module_hrv1;
    ModuleHrv2 module_hrv2;
    ModuleStSegment module_stsegment;
    ModuleWaves module_waves;

signals:


public slots:
    void dataLoaded(); // polaczony z sygnalem z dataloader, reaguje na zaladowanie pliku
    void setParamsECGBaseline();
    void setParamsRPeaks();
    void setParamsnWaves();
    void setParamsHRV1();
    void setParamsHRV2();
    void setParamsHRVDFA();
    void setParamsST();

};

#endif // ECGANALYZERCONTROLLER_H
