#ifndef MODULEHRV2_H
#define MODULEHRV2_H

#include <QObject>
#include <QVector>
#include <QDebug>
#include "module.h"
#include <QtMath>
#include <cstdlib>

class ModuleHrv2 : public Module
{
    QVector<double> RRvector;
    double HRVi;
    double SD1;
    double SD2;
    double Tinn;
    QVector<double> PoincareX;
    QVector<double> PoincareY;
    QVector<double> HistogramX;
    QVector<double> HistogramY;



public:


    QList<double> inputData; //R_Peaks
    //outputs:


    ModuleHrv2(QList<double>);
    ~ModuleHrv2();

  void AnalyzeSignal(); // wywoluje ponizsze metody


  double getSD1();
  double getSD2();
  double getHRVi();
  double getTinn();
  void setSD1(double);
  void setSD2(double);
  void setHRVi(double);
  void setTinn(double);
  QVector<double> getHistogramY();
  QVector<double> getHistogramX();
  QVector<double> getPoincareY();
  QVector<double> getPoincareX();
  void setHistogramY(QVector<double>);
  void setHistogramX(QVector<double>);
  void setPoincareY(QVector<double>);
  void setPoincareX(QVector<double>);
  QVector<double> calcHistogramY();
  QVector<double> calcHistogramX();
  QVector<double> calcPoincareX();
  QVector<double> calcPoincareY();
  double calcTinn();
  double calcSD1();
  double calcSD2();
  double calcHRVindex();

};

#endif // MODULEHRV2_H
