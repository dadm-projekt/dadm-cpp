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
  case fp100:

      B_coeffA={1,-0.782095198023338,0.679978526916300,-0.182675697753032,0.0301188750431693};
      B_coeffB={0.0465829066364437,0.186331626545775,0.279497439818662,0.186331626545775,0.0465829066364437};

      HP_coeffA={1, -0.2553033983, -0.0919923704, 0.0919923704,  0.2553033983};
      HP_coeffB={0, -0.2926562854, -0.1212222025, 0.1212222025, 0.2926562854};

      E_coeffA={1,-1.54441809103770,1.73767123307837,-1.00214749664254,0.311016948508913};
      E_coeffB={0.0442115784420919,0.107455871720074,0.144182332553464,0.107455871720074,0.0442115784420918};

      ow={-1.26036968968289e-17,0.0787099797786283,0.117871649757369,0.200000000000000,0.117871649757369,0.0787099797786283,-1.26036968968289e-17};

    break;

  case fp150:

      B_coeffA={1,-1.83542168892829,1.56975407176622,-0.635723378097985,0.103539503775964};
      B_coeffB={0.0126342817822442,0.0505371271289769,0.0758056906934654,0.0505371271289769,0.0126342817822442};

      HP_coeffA={1, -0.1779285821, -0.0667438444, 0.0667438444,  0.1779285821};
      HP_coeffB={0, -0.1942073035, -0.0804432990, 0.0804432990, 0.1942073035};

      E_coeffA={1,-2.58981301895500,3.05367728996517,-1.80643450386343,0.455269676171612};
      E_coeffB={0.0170841625260108,0.0180706967482007,0.0301337660362138,0.0180706967482007,0.0170841625260108};

      ow={-1.26036968968289e-17,0.0615030896521034,0.0815650255754681,0.133333333333333,0.0815650255754681,0.0615030896521034,-1.26036968968289e-17};

      break;

  case fp200:

      B_coeffA={1,-2.36951300718204,2.31398841441588,-1.05466540587857,0.187379492368185};
      B_coeffB={0.00482434335771623,0.0192973734308649,0.0289460601462974,0.0192973734308649,0.00482434335771623};

      HP_coeffA={1,-0.1363632322,-0.0523053619,0.0523053619,0.1363632322};
      HP_coeffB={0,-0.1454217922,-0.0602356786,0.0602356786,0.1454217922};

      E_coeffA={1,-3.04248829236597,3.81983648103167,-2.29228489663573,0.553374433767192};
      E_coeffB={0.0100507540027636,9.90100649028820e-05,0.0139581310411128,9.90100649028669e-05,0.0100507540027636};

      ow={-1.07213449535116e-17 ,0.0486454427570092 ,0.0619687935142583 ,0.100000000000000 ,0.0619687935142584 ,0.0486454427570092 ,-1.07213449535116e-17};

      break;

  case fp250:

      B_coeffA={1,-2.69261098701744,2.86739910911139,-1.40348467136814,0.264454816443504};
      B_coeffB={0.00223489169808232,0.00893956679232927,0.0134093501884939,0.00893956679232927,0.00223489169808232};

      HP_coeffA={1,-0.1104932278,-0.0429855360,0.0429855360,0.1104932278};
      HP_coeffB={0,-0.1162511467,-0.0481528016,0.0481528016,0.1162511467};

      E_coeffA={1,-3.28610162606729,4.28911339012583,-2.60904124659081,0.622555312793480};
      E_coeffB={0.00724285774968199,-0.00565193868986535,0.0115468236041134,-0.00565193868986535,0.00724285774968200};

      ow={-9.07183126018247e-18 ,0.0398702088647044 ,0.0498710832974579 ,0.0800000000000000 ,0.0498710832974580 ,0.0398702088647044 ,-9.07183126018247e-18};
    break;

  case fp360:

      B_coeffA={1,-3.08999069584561,3.66165022183220,-1.96134365255222,0.399459451778259};
      B_coeffB={0.000610957825788808,0.00244383130315523,0.00366574695473285,0.00244383130315523,0.000610957825788808};

      HP_coeffA={1, -0.0779224547, -0.0308675595,   0.0308675595,  0.0779224547};
      HP_coeffB={0, -0.0806749030, -0.0334166390, 0.0334166390, 0.0806749030};

      E_coeffA={ 1,-3.55137083731031,4.85420964359043,-3.01806273249019,0.719315722907984};
      E_coeffB={0.00491962871395761,-0.00947871694675808,0.0127649941112728,-0.00947871694675808,0.00491962871395761};

      ow={-6.62615558638233e-18 ,0.0283057821525849 ,0.0348225769515854 ,0.0555555555555555 ,0.0348225769515855 ,0.0283057821525849 ,-6.62615558638233e-18};

      break;
}

  switch(filterType){

  case Butterworth:
{
    QVector<double> outputData = ButterworthFilter(B_coeffA, B_coeffB,inputData);
    break;
}
  case ButterworthHP:
{
    QVector<double> outputData = ButterworthFilterHP(HP_coeffA, HP_coeffB,inputData);
    break;
}
  case Elliptic:
{
    QVector<double> outputData = EllipticFilter(E_coeffA, E_coeffB,inputData);
    break;
  }
  case FIRBlackman:
{
    QVector<double> outputData = FIR_Blackman(inputData, ow);
    break;
  }
}

}



QVector<double> ModuleBaseline::ButterworthFilter(QVector<double> a,QVector<double> b,QVector<double> inputData)
{
  int i,j;
  int ord = 4; //filtr 4 rzędu



    QVector<double> outputData(inputData.size()); // wektor output który bedzie wypełniany
    int np=inputData.size()-1;

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
  int ord = 4; //filtr 4 rzędu



    QVector<double> outputData(inputData.size()); // wektor output który bedzie wypełniany
    int np=inputData.size()-1;

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
  int ord = 4; //filtr 4 rzędu
  int np=inputData.size()-1;



    QVector<double> outputData(inputData.size()); // wektor output który bedzie wypełniany

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

QVector<double> ModuleBaseline::FIR_Blackman(QVector<double> inputData, QVector<double> ow)
{
  int n;
  int inputDataLen = inputData.size();
  int owLen = ow.size();
    QVector<double> outputData(inputDataLen);

  for (n = 0; n < inputDataLen; n++)
  {
    int kmin, kmax, k;



    kmin = (n >= owLen - 1) ? n - (owLen - 1) : 0;
    kmax = (n < inputDataLen - 1) ? n : inputDataLen - 1;

    for (k = kmin; k <= kmax; k++)
    {
      outputData[n] += inputData[k] * ow[n - k];
    }
  }
  return outputData;
}
