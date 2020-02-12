#ifndef MODULEHRV1_H
#define MODULEHRV1_H

#include <QObject>
#include "module.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <numeric>
#include <spline.h>
#include <fftw3.h>
#include <QVector>
#define REAL 0
#define IMAG 1
class ModuleHrv1 : public Module
{
public:

    QList<double> inputRPeaks; //z R_Peaks

    //outputs:
    QList<double> timeParams;
    QList<double> freqParams;

    QList<double>psdx;
    QList<double> fxx;

    QList<double> x;
    QList<double> y;

    QVector<double> hrvy;
    QVector<double> hrvx;

    ModuleHrv1();
    ModuleHrv1(QList<double> inputRPeaks);
    ~ModuleHrv1();


    QList<double> getInputRPeaks();
    QList<double> getTimeParams();
    QList<double> getFreqParams();
    QList<double> getpsdx();
    QList<double> getfxx();
    QList<double> getx();
    QList<double> gety();
    QVector<double> gethrvx();
    QVector<double> gethrvy();

    void setInputRPeaks(QList<double> inputRPeaks);
    void settimeParams(QList<double> timeParams);
    void setfreqParams(QList<double> freqParams);
    void setpsdx(QList<double> psdx);
    void setfxx(QList<double> fxx);
    void setx(QList<double> x);
    void sety(QList<double> y);
    void sethrvx(QVector<double> hrvx);
    void sethrvy(QVector<double> hrvy);

    QVector<double> gethrvx_fromRR(QList<double> inputRPeaks);
    QVector<double> gethrvy_fromRR(QList<double> inputRPeaks);

    void FindTimeParams();
    void FindFreqParams();
    void AnalyzeSignal();

};

#endif // MODULEHRV1_H

