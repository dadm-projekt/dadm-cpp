#ifndef MODULEHRV1_H
#define MODULEHRV1_H

#include <QObject>
#include "module.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include<numeric>
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

    void AnalyzeSignal();
    void FindTimeParams();
    void FindFreqParams();

    QVector<double> gethrvx_fromRR(QList<double> inputRPeaks);
    QVector<double> gethrvy_fromRR(QList<double> inputRPeaks);
    QVector<double> gethrvx();
    QVector<double> gethrvy();
    void sethrvx(QVector<double> hrvx);
    void sethrvy(QVector<double> hrvy);

    QList<double> getx();
    QList<double> gety();
    QList<double> getTimeParams();
    QList<double> getpsdx();
    QList<double> getfxx();
    QList<double> getFreqParams();
    void setx(QList<double> x);
    void sety(QList<double> y);
    void settimeParams(QList<double> timeParams);
    void setpsdx(QList<double> psdx);
    void setfxx(QList<double> fxx);
    void setfreqParams(QList<double> freqParams);

};

#endif // MODULEHRV1_H

