#include "modulerpeaks.h"

ModuleRPeaks::ModuleRPeaks()
{

}

ModuleRPeaks::~ModuleRPeaks()
{

}

QList<double> ModuleRPeaks::getInputData()
{
    return inputData;
}

QList<double> ModuleRPeaks::getRPeaks()
{
    return RPeaks;
}

void ModuleRPeaks::setRPeaks(QList<double> RPeaks)
{
    this->RPeaks=RPeaks;
}

void ModuleRPeaks::setInputData(QList<double> inputData)
{
    this->inputData=inputData;
}

void ModuleRPeaks::PanTompkins()
{

}

void ModuleRPeaks::AnalyzeSignal()
{
    this->PanTompkins();
}

