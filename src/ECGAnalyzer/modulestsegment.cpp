/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * detectingMorfology.cpp
 *
 * Code generation for function 'detectingMorfology'
 *
 */

/* Include files */
#include "detectingMorfology.h"


/* Function Definitions */
DetectingMorfology::detectingMorfology()
{

}

DetectingMorfology::DetectingMorfology(QList<double> inputData, QList<double> inputqrsEnd,  QList<double> inputtOnset)
{
    this->inputData = inputData;
    this->inputqrsEnd = inputqrsEnd;
    this->inputtOnset = inputtOnset;
}

DetectingMorfology::~DetectingMorfology()
{

}

QList<double> DetectingMorfology::getInputData()
{
    return inputData;
}

QList<double> DetectingMorfology::getInputQRSEnd()
{
    return inputqrsEnd;
}

QList<double> DetectingMorfology::getInputTOnset()
{
    return inputtOnset;
}


QList<double> DetectingMorfology::getMorfology()
{
    return morfology;
}



void DetectingMorfology::setInputData(QList<double> inputData)
{
    this->inputData = inputData;
}

void DetectingMorfologys::setInputQRSEnd(QList<double> inputqrsEnd)
{
    this->inputqrsEnd = inputqrsEnd;
}

void DetectingMorfology::setInputTOnset(QList<double> inputtOnset)
{
    this->inputtOnset = inputtOnset;
}


void DetectingMorfology::setMorfology(QList<double> morfology)
{
    this->morfology = morfology;
}

void DetectingMorfology::detectMorfology()
{
    int i;
    int j;
    int temp = 0;
    QList<double> t;
    //wektor czasu
    for(i = 0; i < inputData.length() - 1; i++)
    {
        temp=temp+1/500;
        t.insert(i, sum);
    }
    QList<double> betweenQRSendiTonset;
    QList<double> distanceSTpoint;
    QList<double> STmiddle;
    QList<double> dslopeI;
    QList<double> mV;
    QList<double> mVinterpolacja;
    QList<double> morfology;
    QList<double> wherenormal;
    QList<double> whereelevation;
    QList<double> wheredepression;

    for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
            if(this->inputqrsEnd.at(i) < this->inputtOnset.at(i))
            {
                 for(j = 0; j < this->inputtOnset.length()-1; j++)
                    {
                     betweenQRSendiTonset.insert(i, this->inputtOnset.at(i)-this->inputqrsEnd.at(i));
                     distanceSTpoint.insert(j,round((this->inputtOnset.at(i)-this->inputqrsEnd.at(i))/2));
                    }
            }
        }

    for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
        STmiddle.insert(i, this->inputtOnset.at(i) - distanceSTpoint.at(i));
        }



        for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
            temp=this->inputData.at(this->inputqrsEnd.at(i));
            j=0;
                    while(temp < this->inputData.at(this->inputtOnset.at(i)))
                    {
                     mV.insert(j, temp);
                     temp=temp+betweenQRSendiTonset.at(i);
                     j=j+1;
                    }
            mVinterpolacja.insert(i, mV.at(distanceSTpoint.at(i));
        }


    for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
            if(this->inputqrsEnd.at(i) < this->inputtOnset.at(i))
            {
                 for(j = 0; j < this->inputtOnset.length()-1; j++)
                    {
                     dslopeI.insert(i, (this->inputData.at(this->inputtOnset.at(j))-this->inputData.at(this->inputqrsEnd.at(j)))/(t.at(this->inputtOnset.at(j))-t.at(this->inputqrsEnd.at(j))));
                    }
            }
        }

    //classification
        for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
            if(-0.05<=this->inputData.at(this->inputqrsEnd.at(i))) && this->inputData.at(this->inputqrsEnd.at(i)))<=0.1)
            {
                 wherenormal.insert(i,1);
            }
            else {
            wherenormal.insert(i,0);
            }
        }


        for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
            if(this->inputData.at(this->inputqrsEnd.at(i)))>0.1)
            {
                 whereelevation.insert(i,1);
            }
            else {
            whereelevation.insert(i,0);
            }
        }

        for(i = 0; i < this->inputtOnset.length() - 1; i++)
        {
            if(this->inputData.at(this->inputqrsEnd.at(i)))<-0.05)
            {
                 wheredepression.insert(i,1);
            }
            else {
            wheredepression.insert(i,0);
            }
        }



   //if normal 0, if elevation convax 2...
 for(i = 0; i < this->inputtOnset.length() - 1; i++){
    if (wherenormal.at(i) == 1) {
        morfology.insert = (i,0);}
    else if (whereelevation.at(i) == 1){
        if (this->inputData.at(STmiddle.at(i))-mVinterpolacja.at(i)>=0){
          morfology.insert = (i,1);
        }
        if (this->inputData.at(STmiddle.at(i))-mVinterpolacja.at(i)<0){
         //display('concave elevation')
         morfology.insert = (i,2);
        }
    }
    else if (wheredepression.at(i) == 1)  {
        if (-0.4 <= dslopeI.at(i) &&  dslopeI.at(i)<= 0.5){
        //display('hotizontal depression')
         morfology.insert = (i,3);
        }
        if (dslopeI.at(i) > 0.5){
       //display('upsloping depression')
         morfology.insert = (i,4);}

        if (dslopeI.at(i) < -0.4){
       //display('downsloping depression')
         morfology.insert = (i,5);
        }
     }
 }
    this->setMorfology(morfology);


void DetectingMorfology::AnalyzeSignal()
{
    this->detectMorfology();
}


/* End of code generation (detectingMorfology.cpp) */
