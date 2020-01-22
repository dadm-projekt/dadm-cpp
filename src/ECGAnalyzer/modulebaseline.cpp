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

      HP_coeffA={1,-3.95895331864708,5.87770027353614,-3.87853054905173,0.959783653811498};
      HP_coeffB={0.979685487190403,-3.91874194876161,5.87811292314242,-3.91874194876161,0.979685487190403};

      E_coeffA={1,-1.54441809103770,1.73767123307837,-1.00214749664254,0.311016948508913};
      E_coeffB={0.0442115784420919,0.107455871720074,0.144182332553464,0.107455871720074,0.0442115784420918};

    break;

  case fp150:

      B_coeffA={1,-1.83542168892829,1.56975407176622,-0.635723378097985,0.103539503775964};
      B_coeffB={0.0126342817822442,0.0505371271289769,0.0758056906934654,0.0505371271289769,0.0126342817822442};

      HP_coeffA={1,-3.97263546992883,5.91828019705743,-3.91865100043769,0.973006285171916};
      HP_coeffB={0.986410809537241,-3.94564323814897,5.91846485722345,-3.94564323814897,0.986410809537241};

      E_coeffA={1,-2.58981301895500,3.05367728996517,-1.80643450386343,0.455269676171612};
      E_coeffB={0.0170841625260108,0.0180706967482007,0.0301337660362138,0.0180706967482007,0.0170841625260108};

    break;

  case fp200:

      B_coeffA={1,-2.36951300718204,2.31398841441588,-1.05466540587857,0.187379492368185};
      B_coeffB={0.00482434335771623,0.0192973734308649,0.0289460601462974,0.0192973734308649,0.00482434335771623};

      HP_coeffA={1,-3.97947658253818,5.93864009075581,-3.93884917328088,0.979685668829534};
      HP_coeffB={0.989790719712775,-3.95916287885110,5.93874431827665,-3.95916287885110,0.989790719712775};

      E_coeffA={1,-3.04248829236597,3.81983648103167,-2.29228489663573,0.553374433767192};
      E_coeffB={0.0100507540027636,9.90100649028820e-05,0.0139581310411128,9.90100649028669e-05,0.0100507540027636
};

    break;
  case fp250:

      B_coeffA={1,-2.69261098701744,2.86739910911139,-1.40348467136814,0.264454816443504};
      B_coeffB={0.00223489169808232,0.00893956679232927,0.0134093501884939,0.00893956679232927,0.00223489169808232};

      HP_coeffA={1,-3.98358125865852,5.95087842926670,-3.95101243657283,0.983715267510478};
      HP_coeffB={0.991824212000533,-3.96729684800213,5.95094527200320,-3.96729684800213,0.991824212000533};

      E_coeffA={1,-3.28610162606729,4.28911339012583,-2.60904124659081,0.622555312793480};
      E_coeffB={0.00724285774968199,-0.00565193868986535,0.0115468236041134,-0.00565193868986535,0.00724285774968200};

    break;
  case fp360:

      B_coeffA={1,-3.08999069584561,3.66165022183220,-1.96134365255222,0.399459451778259};
      B_coeffB={0.000610957825788808,0.00244383130315523,0.00366574695473285,0.00244383130315523,0.000610957825788808};

      HP_coeffA={1,-3.98859809157841,5.96585923153528,-3.96592397177119,0.988662832174726};
      HP_coeffB={0.994315257941225,-3.97726103176490,5.96589154764735,-3.97726103176490,0.994315257941225};

      E_coeffA={ 1,-3.55137083731031,4.85420964359043,-3.01806273249019,0.719315722907984};
      E_coeffB={0.00491962871395761,-0.00947871694675808,0.0127649941112728,-0.00947871694675808,0.00491962871395761};

    break;
}
{
  switch(filterType){

  case Butterworth:
{
    QVector<double> outputData = ButterworthFilter(B_coeffA, B_coeffB,inputData,np);
    break;
}
  case ButterworthHP:
{
    QVector<double> outputData = ButterworthFilterHP(HP_coeffA, HP_coeffB,inputData,np);
    break;
}
  case Elliptic:
{
    QVector<double> outputData = EllipticFilter(E_coeffA, E_coeffB,inputData,np);
    break;
  }
}
}
}



QVector<double> ModuleBaseline::ButterworthFilter(QVector<double> a,QVector<double> b,QVector<double> inputData, int np)
{
  int i,j;
  int ord = 4; //filtr 4 rzędu

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

QVector<double> ModuleBaseline::ButterworthFilterHP(QVector<double> a,QVector<double> b,QVector<double> inputData, int np)
{
  int i,j;
  int ord = 4; //filtr 4 rzędu

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



QVector<double> ModuleBaseline::EllipticFilter(QVector<double> a,QVector<double> b,QVector<double> inputData, int np)
{
  int i,j;
  int ord = 4; //filtr 4 rzędu

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

