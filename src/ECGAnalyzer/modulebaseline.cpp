#include "modulebaseline.h"

ModuleBaseline::ModuleBaseline()
{

}

ModuleBaseline::~ModuleBaseline()
{

}


void ModuleBaseline ::AnalyzeSignal()
{

  switch(sampleFrequency){
  case 100:
      QVector< QVector<double> > coeffAB(2,QVector<double>(5,0));
      coeffAB[0][0] = 1;
      coeffAB[0][1] = -1.5704;
      coeffAB[0][2] = 1.2756;
      coeffAB[0][3] = -0.4844;
      coeffAB[0][4] = 0.0762;
      coeffAB[1][0] = 0.0186;
      coeffAB[1][1] = 0.0742;
      coeffAB[1][2] = 0.1114;
      coeffAB[1][3] = 0.0742;
      coeffAB[1][4] = 0.0186;

      QVector< QVector<double> > HPcoeffAB(2,QVector<double>(5,0));
      HPcoeffAB[0][0] = 1;
      HPcoeffAB[0][1] = -3.9589;
      HPcoeffAB[0][2] = 5.8777;
      HPcoeffAB[0][3] = -3.8785;
      HPcoeffAB[0][4] = 0.9597;
      HPcoeffAB[1][0] = 0.9797;
      HPcoeffAB[1][1] = -3.9187;
      HPcoeffAB[1][2] = 5.8781;
      HPcoeffAB[1][3] = -3.9187;
      HPcoeffAB[1][4] = 0.9797;

      QVector< QVector<double> > EEcoeffAB(2,QVector<double>(5,0));
      EEcoeffAB[0][0] = 1;
      EEcoeffAB[0][1] = -3.3434;
      EEcoeffAB[0][2] = 4.4060;
      EEcoeffAB[0][3] = -2.6909;
      EEcoeffAB[0][4] = 0.6412;
      EEcoeffAB[1][0] = 0.0067;
      EEcoeffAB[1][1] = -0.0067;
      EEcoeffAB[1][2] = 0.0115;
      EEcoeffAB[1][3] = -0.0067;
      EEcoeffAB[1][4] = 0.0067;
    break;
  case 150:
      QVector< QVector<double> > coeffAB(2,QVector<double>(5,0));
      coeffAB[0][0] = 0.8949;
      coeffAB[0][1] = -1.7897;
      coeffAB[0][2] = 0.8949;
      coeffAB[0][3] = 1.0000;
      coeffAB[0][4] = -1.7786;
      coeffAB[1][0] = 0.8008;
      coeffAB[1][1] = 0.8949;
      coeffAB[1][2] = -1.7897;
      coeffAB[1][3] = 0.8949;
      coeffAB[1][4] = 1.0000;

      QVector< QVector<double> > HPcoeffAB(2,QVector<double>(5,0));
      HPcoeffAB[0][0] = 0.8949;
      HPcoeffAB[0][1] = -1.7897;
      HPcoeffAB[0][2] = 0.8949;
      HPcoeffAB[0][3] = 1.0000;
      HPcoeffAB[0][4] = -1.7786;
      HPcoeffAB[1][0] = 0.8008;
      HPcoeffAB[1][1] = 0.8949;
      HPcoeffAB[1][2] = -1.7897;
      HPcoeffAB[1][3] = 0.8949;
      HPcoeffAB[1][4] = 1.0000;

      QVector< QVector<double> > EEcoeffAB(2,QVector<double>(5,0));
      EEcoeffAB[0][0] = 0.8949;
      EEcoeffAB[0][1] = -1.7897;
      EEcoeffAB[0][2] = 0.8949;
      EEcoeffAB[0][3] = 1.0000;
      EEcoeffAB[0][4] = -1.7786;
      EEcoeffAB[1][0] = 0.8008;
      EEcoeffAB[1][1] = 0.8949;
      EEcoeffAB[1][2] = -1.7897;
      EEcoeffAB[1][3] = 0.8949;
      EEcoeffAB[1][4] = 1.0000;
    break;

  case 200:
      QVector< QVector<double> > coeffAB(2,QVector<double>(5,0));
      coeffAB[0][0] = 0.8949;
      coeffAB[0][1] = -1.7897;
      coeffAB[0][2] = 0.8949;
      coeffAB[0][3] = 1.0000;
      coeffAB[0][4] = -1.7786;
      coeffAB[1][0] = 0.8008;
      coeffAB[1][1] = 0.8949;
      coeffAB[1][2] = -1.7897;
      coeffAB[1][3] = 0.8949;
      coeffAB[1][4] = 1.0000;

      QVector< QVector<double> > HPcoeffAB(2,QVector<double>(5,0));
      HPcoeffAB[0][0] = 0.8949;
      HPcoeffAB[0][1] = -1.7897;
      HPcoeffAB[0][2] = 0.8949;
      HPcoeffAB[0][3] = 1.0000;
      HPcoeffAB[0][4] = -1.7786;
      HPcoeffAB[1][0] = 0.8008;
      HPcoeffAB[1][1] = 0.8949;
      HPcoeffAB[1][2] = -1.7897;
      HPcoeffAB[1][3] = 0.8949;
      HPcoeffAB[1][4] = 1.0000;

      QVector< QVector<double> > EEcoeffAB(2,QVector<double>(5,0));
      EEcoeffAB[0][0] = 0.8949;
      EEcoeffAB[0][1] = -1.7897;
      EEcoeffAB[0][2] = 0.8949;
      EEcoeffAB[0][3] = 1.0000;
      EEcoeffAB[0][4] = -1.7786;
      EEcoeffAB[1][0] = 0.8008;
      EEcoeffAB[1][1] = 0.8949;
      EEcoeffAB[1][2] = -1.7897;
      EEcoeffAB[1][3] = 0.8949;
      EEcoeffAB[1][4] = 1.0000;

    break;
  case 250:
      QVector< QVector<double> > coeffAB(2,QVector<double>(5,0));
      coeffAB[0][0] = 0.8949;
      coeffAB[0][1] = -1.7897;
      coeffAB[0][2] = 0.8949;
      coeffAB[0][3] = 1.0000;
      coeffAB[0][4] = -1.7786;
      coeffAB[1][0] = 0.8008;
      coeffAB[1][1] = 0.8949;
      coeffAB[1][2] = -1.7897;
      coeffAB[1][3] = 0.8949;
      coeffAB[1][4] = 1.0000;

      QVector< QVector<double> > HPcoeffAB(2,QVector<double>(5,0));
      HPcoeffAB[0][0] = 0.8949;
      HPcoeffAB[0][1] = -1.7897;
      HPcoeffAB[0][2] = 0.8949;
      HPcoeffAB[0][3] = 1.0000;
      HPcoeffAB[0][4] = -1.7786;
      HPcoeffAB[1][0] = 0.8008;
      HPcoeffAB[1][1] = 0.8949;
      HPcoeffAB[1][2] = -1.7897;
      HPcoeffAB[1][3] = 0.8949;
      HPcoeffAB[1][4] = 1.0000;

      QVector< QVector<double> > EEcoeffAB(2,QVector<double>(5,0));
      EEcoeffAB[0][0] = 0.8949;
      EEcoeffAB[0][1] = -1.7897;
      EEcoeffAB[0][2] = 0.8949;
      EEcoeffAB[0][3] = 1.0000;
      EEcoeffAB[0][4] = -1.7786;
      EEcoeffAB[1][0] = 0.8008;
      EEcoeffAB[1][1] = 0.8949;
      EEcoeffAB[1][2] = -1.7897;
      EEcoeffAB[1][3] = 0.8949;
      EEcoeffAB[1][4] = 1.0000;

    break;
  case 360:
      QVector< QVector<double> > coeffAB(2,QVector<double>(5,0));
      coeffAB[0][0] = 0.8949;
      coeffAB[0][1] = -1.7897;
      coeffAB[0][2] = 0.8949;
      coeffAB[0][3] = 1.0000;
      coeffAB[0][4] = -1.7786;
      coeffAB[1][0] = 0.8008;
      coeffAB[1][1] = 0.8949;
      coeffAB[1][2] = -1.7897;
      coeffAB[1][3] = 0.8949;
      coeffAB[1][4] = 1.0000;

      QVector< QVector<double> > HPcoeffAB(2,QVector<double>(5,0));
      HPcoeffAB[0][0] = 0.8949;
      HPcoeffAB[0][1] = -1.7897;
      HPcoeffAB[0][2] = 0.8949;
      HPcoeffAB[0][3] = 1.0000;
      HPcoeffAB[0][4] = -1.7786;
      HPcoeffAB[1][0] = 0.8008;
      HPcoeffAB[1][1] = 0.8949;
      HPcoeffAB[1][2] = -1.7897;
      HPcoeffAB[1][3] = 0.8949;
      HPcoeffAB[1][4] = 1.0000;

      QVector< QVector<double> > EEcoeffAB(2,QVector<double>(5,0));
      EEcoeffAB[0][0] = 0.8949;
      EEcoeffAB[0][1] = -1.7897;
      EEcoeffAB[0][2] = 0.8949;
      EEcoeffAB[0][3] = 1.0000;
      EEcoeffAB[0][4] = -1.7786;
      EEcoeffAB[1][0] = 0.8008;
      EEcoeffAB[1][1] = 0.8949;
      EEcoeffAB[1][2] = -1.7897;
      EEcoeffAB[1][3] = 0.8949;
      EEcoeffAB[1][4] = 1.0000;

    break;
}
{
  switch(filterType){
  case Butterworth:
    QVector<double> outputData = ButterworthFilter(coeffAB[0], coeffAB[1],inputData);
    break;
  case ButterworthHP:
    QVector<double> outputData = ButterworthFilterHP(HPcoeffAB[0], HPcoeffAB[1],inputData);
    break;
  case Elliptic:
    QVector<double> outputData = EllipticFilter(EEcoeffAB[0], EEcoeffAB[1],inputData);
    break;
}
}



QVector<double> ModuleBaseline::ButterworthFilter(QVector<double> a,QVector<double> b,QVector<double> inputData);
{
  int i,j;
  int inputData_size = sizeof(inputData) / sizeof(inputData[0]);
  QVector<double> outputData(inputData_size); // wektor output który bedzie wypełniany
  int np = inputData_size-1;
  int ord = 4; //filtr 4 rzędu

          //y[0]=b[0]*x[0];
          for (i=1;i<ord+1;i++)
          {

          for (j=0;j<i+1;j++)
                  outputData[i]=outputData[i]+b[j]*inputData[i-j];
          for (j=0;j<i;j++)
                  outputData[i]=outputData[i]-a[j+1]*outputData[i-j-1];
          }

          for (i=ord+1;i<np+1;i++)
          {
                          for (j=0;j<ord+1;j++)
                                  outputData[i]=outputData[i]+b[j]*inputData[i-j];
                          for (j=0;j<ord;j++)
                                  outputData[i]=outputData[i]-a[j+1]*outputData[i-j-1];
          }

return outputData;
}

QVector<double> ModuleBaseline::ButterworthFilterHP(QVector<double> a,QVector<double> b,QVector<double> inputData)
{
  int i,j;
  int inputData_size = sizeof(inputData) / sizeof(inputData[0]);
  QVector<double> outputData(inputData_size); // wektor output który bedzie wypełniany
  int np = inputData_size-1;
  int ord = 4; //filtr 4 rzędu

          //y[0]=b[0]*x[0];
          for (i=1;i<ord+1;i++)
          {

          for (j=0;j<i+1;j++)
                  outputData[i]=outputData[i]+b[j]*inputData[i-j];
          for (j=0;j<i;j++)
                  outputData[i]=outputData[i]-a[j+1]*outputData[i-j-1];
          }

          for (i=ord+1;i<np+1;i++)
          {
                          for (j=0;j<ord+1;j++)
                                  outputData[i]=outputData[i]+b[j]*inputData[i-j];
                          for (j=0;j<ord;j++)
                                  outputData[i]=outputData[i]-a[j+1]*outputData[i-j-1];
          }

return outputData;
}



QVector<double> ModuleBaseline::EllipticFilter(QVector<double> a,QVector<double> b,QVector<double> inputData)
{
  int i,j;
  int inputData_size = sizeof(inputData) / sizeof(inputData[0]);
  QVector<double> outputData(inputData_size); // wektor output który bedzie wypełniany
  int np = inputData_size-1;
  int ord = 4; //filtr 4 rzędu
  
          //y[0]=b[0]*x[0];
          for (i=1;i<ord+1;i++)
          {

          for (j=0;j<i+1;j++)
                  outputData[i]=outputData[i]+b[j]*inputData[i-j];
          for (j=0;j<i;j++)
                  outputData[i]=outputData[i]-a[j+1]*outputData[i-j-1];
          }

          for (i=ord+1;i<np+1;i++)
          {
                          for (j=0;j<ord+1;j++)
                                  outputData[i]=outputData[i]+b[j]*inputData[i-j];
                          for (j=0;j<ord;j++)
                                  outputData[i]=outputData[i]-a[j+1]*outputData[i-j-1];
          }

return outputData;
}
}
