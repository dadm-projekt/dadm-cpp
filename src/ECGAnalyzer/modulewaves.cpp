#include "modulewaves.h"

ModuleWaves::ModuleWaves()
{

}

ModuleWaves::ModuleWaves(QList<double> inputData, QList<double> inputRPeaks)
{
    this->inputData = inputData;
    this->inputRPeaks = inputRPeaks;
}

ModuleWaves::~ModuleWaves()
{

}


QList<double> ModuleWaves::getInputData()
{
    return inputData;
}

QList<double> ModuleWaves::getInputRPeaks()
{
    return inputRPeaks;
}

QList<double> ModuleWaves::getQRSOnset()
{
    return qrsOnset;
}

QList<double> ModuleWaves::getQRSEnd()
{
    return qrsEnd;
}

QList<double> ModuleWaves::getTOnset()
{
    return tOnset;
}

QList<double> ModuleWaves::getTEnd()
{
    return tEnd;
}

QList<double> ModuleWaves::getPOnset()
{
    return pOnset;
}

QList<double> ModuleWaves::getPEnd()
{
    return pEnd;
}

void ModuleWaves::setInputData(QList<double> inputData)
{
    this->inputData = inputData;
}

void ModuleWaves::setInputRPeaks(QList<double> inputRPeaks)
{
    this->inputRPeaks = inputRPeaks;
}

void ModuleWaves::setQRSOnset(QList<double> qrsOnset)
{
    this->qrsOnset = qrsOnset;
}

void ModuleWaves::setQRSEnd(QList<double> qrsEnd)
{
    this->qrsEnd = qrsEnd;
}

void ModuleWaves::setTOnset(QList<double> tOnset)
{
    this->tOnset = tOnset;
}

void ModuleWaves::setTEnd(QList<double> tEnd)
{
    this->tEnd = tEnd;
}

void ModuleWaves::setPOnset(QList<double> pOnset)
{
    this->pOnset = pOnset;
}

void ModuleWaves::setPEnd(QList<double> pEnd)
{
    this->pEnd = pEnd;
}

QList<double> ModuleWaves::differentiation(QList<double> inputD)
{
    int i;
    QList<double> differ;
    double temp;
    for(i = 2; i < inputD.length() - 2; i++)
    {
        temp = 1 / 9 * (-inputD.at(i-2) - (2 * inputD.at(i-1)) + (2 * inputD.at(i+1)) + inputD.at(i+2));
        differ.insert(i, temp);
    }
    return differ;
}

QList<double> ModuleWaves::integration(QList<double> inputD, int M)
{
    int i;
    for(i = 0; i < M; i++)
    {
        inputD.prepend(0);
    }
    int j;
    int k;
    QList<double> integr;
    double temp;
    int sum;
    for(j = M; j < inputD.length(); j++)
    {
        sum = 0;
        for(k = j; k < j+M; k++)
            sum = sum + inputD.at(k);
        temp = 1 / M * sum;
        integr.insert(j, temp);
    }
    return integr;
}

void ModuleWaves::detectQRS()
{
    //detekcja QRSonset
    int i;
    QList<double> qrsOnset;
    for(i = 0; i < this->inputRPeaks.length(); i++)
    {
        int N = 30;
        if(this->inputRPeaks.at(i) - N >= 0)
        {
            //szukanie minimum po lewej stronie R
            int j;
            int minIndex = this->inputRPeaks.at(i) - N;
            for(j = this->inputRPeaks.at(i) - N; j < this->inputRPeaks.at(i); j++)
            {
                if(this->inputData.at(minIndex) > this->inputData.at(j+1))
                    minIndex = j+1;
            }
            int qTemp = minIndex;
            double diff = this->inputData.at(qTemp - 1) - this->inputData.at(qTemp);
            diff = abs(diff);
            while(diff > 0.01)
            {
                qTemp = qTemp-1;
                double diff = this->inputData.at(qTemp - 1) - this->inputData.at(qTemp);
                diff = abs(diff);
            }
            qrsOnset.insert(i, diff);
        }
    }
    this->setQRSOnset(qrsOnset);

    //detekcja QRSend
    int k;
    QList<double> qrsEnd;
    for(k = 0; k < this->inputRPeaks.length(); k++)
    {
        int N = 30;
        if(this->inputRPeaks.at(k) + N < this->inputData.length())
        {
            //szukanie minimum po lewej stronie R
            int l;
            int minIndex = this->inputRPeaks.at(i);
            for(l = this->inputRPeaks.at(k); l < this->inputRPeaks.at(k) + N; l++)
            {
                if(this->inputData.at(minIndex) > this->inputData.at(l+1))
                    minIndex = l+1;
            }
            int sTemp = minIndex+5;
            double diff = this->inputData.at(sTemp + 1) - this->inputData.at(sTemp);
            diff = abs(diff);
            while(diff > 0.01)
            {
                sTemp = sTemp + 1;
                double diff = this->inputData.at(sTemp + 1) - this->inputData.at(sTemp);
                diff = abs(diff);
            }
            qrsEnd.insert(k, diff);
        }
    }
    this->setQRSEnd(qrsEnd);
}

void ModuleWaves::detectWaves()
{
    int i;
    QList<double> tOnset;
    for(i = 0; i < this->qrsEnd.length() - 1; i++)
    {
        double length_temp =this->qrsOnset.at(i+1) - this->qrsEnd.at(i);
        QList<double> s_temp = this->inputData.mid(this->qrsEnd.at(i), length_temp);
        int h;
        for(h = 10; h < s_temp.length() - 1; h++)
        {
            if(s_temp.at(h+1) > s_temp.at(h))
            {
                tOnset.insert(i, h);
                break;
            }
        }
        this->setTOnset(tOnset);

        s_temp = this->differentiation(s_temp);

        double value;
        for(h = 0; h < s_temp.length(); h++)
        {
            value = s_temp.at(h) * s_temp.at(h);
            s_temp.replace(h, value);
        }

        s_temp = this->integration(s_temp, 20);

        double max = 0;
        for(h = 0; h < s_temp.length(); h++)
        {
            if(s_temp.at(h) > max)
            {
                max = s_temp.at(h);
            }

        }
        for(h = 0; h < s_temp.length(); h++)
        {
            value = s_temp.at(h) / max;
            s_temp.replace(h, value);
        }

        //tEnd
        int j;
        int index;
        QList<double> tEnd;
        for(j = 30; j < s_temp.length(); j++)
        {
            if(s_temp.at(j) < 0.02)
            {
                index = j + this->qrsEnd.at(i);
                tEnd.insert(i, index);
                break;
            }
        }
        this->setTEnd(tEnd);

        //pOnset
        QList<double> pOnset;
        int start_index = this->tEnd.at(i) - this->qrsEnd.at(i) + 10;
        for(j = start_index; j < s_temp.length() -1 ; j++)
        {
            if(s_temp.at(j+1) - s_temp.at(j) > 0.03)
            {
                index = j + this->qrsEnd.at(i);
                pOnset.insert(i, index);
                break;
            }
        }
        this->setPOnset(pOnset);

        //pEnd
        QList<double> pEnd;
        start_index = this->pOnset.at(i) - this->qrsEnd.at(i) + 5;
        for(j = start_index; j < s_temp.length() -1 ; j++)
        {
            if(s_temp.at(j) - s_temp.at(j+1) > 0.03)
            {
                index = j + this->qrsEnd.at(i);
                pEnd.insert(i, index);
                break;
            }
        }
        this->setPEnd(pEnd);
    }
}

void ModuleWaves::AnalyzeSignal()
{
    this->detectQRS();
    this->detectWaves();
}
