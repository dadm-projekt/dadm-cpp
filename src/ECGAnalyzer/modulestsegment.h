/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * detectingMorfology.h
 *
 * Code generation for function 'detectingMorfology'
 *
 */

#ifndef DETECTINGMORFOLOGY_H
#define DETECTINGMORFOLOGY_H

/* Include files */
#include <QObject>
#include "module.h"

/* Type Definitions */
class DetectingMorfology : public Module
{
public:
    QList<double> inputData; //z ecg_baseline
    QList<double> inputqrsEnd; //z modulu module waves
    QList<double> inputtOnset; //z modulu module waves

    QList<double> morfology;

    DetectingMorfology();

    DetectingMorfology(QList<double> inputData, QList<double> inputRPeaks);

    ~DetectingMorfology();


    QList<double> getInputData();

    QList<double> getInputQRSEnd();

    QList<double> getInputTOnset();

    QList<double> getMorfology();

    void setInputData(QList<double> inputData);

    void setInputQRSEnd(QList<double> inputqrsEnd);

    void setInputTOnset(QList<double> inputtOnset);

    void setMorfology(QList<double> morfology);

    void AnalyzeSignal();
};

#endif // DETECTINGMORFOLOGY_H
