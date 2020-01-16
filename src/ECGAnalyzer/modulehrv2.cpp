#include "modulehrv2.h"

ModuleHrv2::ModuleHrv2(QList<double> RRList)
{

     RRvector = RRList.toVector();

     int sum = 0;
        for(int i=0; i<RRvector.length(); i++){
            sum += RRvector.value(i);
        }

        double mean = static_cast<double>(sum) / RRvector.count();

        for(int i=0; i<RRvector.length();i++){
            double m2 = mean*2;
            if(RRvector.value(i)>m2){
                RRvector.remove(i);
            }
        }
//    qDebug()<<RRvector.value(i) ;
//    }

    qInfo() << "konstruktor dziala";
//    qInfo( "C Style Info Message" );

//    qDebug() << "C++ Style Debug Message";
//    qDebug( "C Style Debug Message" );

}

ModuleHrv2::~ModuleHrv2()
{

}

//void ModuleHrv2::AnalyzeSignal()
//{

//}

QVector<double> ModuleHrv2::HistogramY()
{
    QVector<double>data(40);
    data.fill(0);

    for(int i=0;i<RRvector.length(); i++){
          if(RRvector.value(i)<50){
            data.replace(1,data.value(1)+1);
          }
          if(RRvector.value(i)>=50 && RRvector.value(i)<100 ){
            data.replace(2,data.value(2)+1);
          }
          if(RRvector.value(i)>=100 && RRvector.value(i)<150 ){
            data.replace(3,data.value(3)+1);
          }
          if(RRvector.value(i)>=150 && RRvector.value(i)<200 ){
            data.replace(4,data.value(4)+1);
          }
          if(RRvector.value(i)>=200 && RRvector.value(i)<250 ){
            data.replace(5,data.value(5)+1);
          }
          if(RRvector.value(i)>=250 && RRvector.value(i)<300 ){
            data.replace(6,data.value(6)+1);
          }
          if(RRvector.value(i)>=300 && RRvector.value(i)<350 ){
            data.replace(7,data.value(7)+1);
          }
          if(RRvector.value(i)>=350 && RRvector.value(i)<400 ){
            data.replace(8,data.value(8)+1);
          }
          if(RRvector.value(i)>=400 && RRvector.value(i)<450 ){
            data.replace(9,data.value(9)+1);
          }
          if(RRvector.value(i)>=450 && RRvector.value(i)<500 ){
            data.replace(10,data.value(10)+1);
          }
          if(RRvector.value(i)>=500 && RRvector.value(i)<550 ){
            data.replace(11,data.value(11)+1);
          }
          if(RRvector.value(i)>=550 && RRvector.value(i)<600 ){
            data.replace(12,data.value(12)+1);
          }
          if(RRvector.value(i)>=600 && RRvector.value(i)<650 ){
            data.replace(13,data.value(13)+1);
          }
          if(RRvector.value(i)>=650 && RRvector.value(i)<700 ){
            data.replace(14,data.value(14)+1);
          }
          if(RRvector.value(i)>=700 && RRvector.value(i)<750 ){
            data.replace(15,data.value(15)+1);
          }
          if(RRvector.value(i)>=750 && RRvector.value(i)<800 ){
            data.replace(16,data.value(16)+1);
          }
          if(RRvector.value(i)>=800 && RRvector.value(i)<850 ){
            data.replace(17,data.value(17)+1);
          }
          if(RRvector.value(i)>=850 && RRvector.value(i)<900 ){
            data.replace(18,data.value(18)+1);
          }
          if(RRvector.value(i)>=900 && RRvector.value(i)<950 ){
            data.replace(19,data.value(19)+1);
          }
          if(RRvector.value(i)>=950 && RRvector.value(i)<1000 ){
            data.replace(20,data.value(20)+1);
          }
          if(RRvector.value(i)>=1000 && RRvector.value(i)<1050 ){
            data.replace(21,data.value(21)+1);
          }
          if(RRvector.value(i)>=1050 && RRvector.value(i)<1100 ){
            data.replace(22,data.value(22)+1);
          }
          if(RRvector.value(i)>=1100 && RRvector.value(i)<1150 ){
            data.replace(23,data.value(23)+1);
          }
          if(RRvector.value(i)>=1150 && RRvector.value(i)<1200 ){
            data.replace(24,data.value(24)+1);
          }
          if(RRvector.value(i)>=1200 && RRvector.value(i)<1250 ){
            data.replace(25,data.value(25)+1);
          }
          if(RRvector.value(i)>=1250 && RRvector.value(i)<1300 ){
            data.replace(26,data.value(26)+1);
          }
          if(RRvector.value(i)>=1300 && RRvector.value(i)<1350 ){
            data.replace(27,data.value(27)+1);
          }
          if(RRvector.value(i)>=1350 && RRvector.value(i)<1400 ){
            data.replace(28,data.value(28)+1);
          }
          if(RRvector.value(i)>=1400 && RRvector.value(i)<1450 ){
            data.replace(29,data.value(29)+1);
          }
          if(RRvector.value(i)>=1450 && RRvector.value(i)<1500 ){
            data.replace(30,data.value(30)+1);
          }
          if(RRvector.value(i)>=1500 && RRvector.value(i)<1550 ){
            data.replace(31,data.value(31)+1);
          }
          if(RRvector.value(i)>=1550 && RRvector.value(i)<1600 ){
            data.replace(32,data.value(32)+1);
          }
          if(RRvector.value(i)>=1600 && RRvector.value(i)<1650 ){
            data.replace(33,data.value(33)+1);
          }
          if(RRvector.value(i)>=1650 && RRvector.value(i)<1700 ){
            data.replace(34,data.value(34)+1);
          }
          if(RRvector.value(i)>=1700 && RRvector.value(i)<1750 ){
            data.replace(35,data.value(35)+1);
          }
          if(RRvector.value(i)>=1750 && RRvector.value(i)<1800 ){
            data.replace(36,data.value(36)+1);
          }
          if(RRvector.value(i)>=1800 && RRvector.value(i)<1850 ){
            data.replace(37,data.value(37)+1);
          }
          if(RRvector.value(i)>=1850 && RRvector.value(i)<1900 ){
            data.replace(38,data.value(38)+1);
          }
          if(RRvector.value(i)>=1900 && RRvector.value(i)<1950 ){
            data.replace(39,data.value(39)+1);
          }
          if(RRvector.value(i)>=1950 && RRvector.value(i)<2000 ){
            data.replace(40,data.value(40)+1);
          }
    }
    return data;
}
QVector<double> HistogramY(){
    QVector<double> dataY;

    int a=25;
    for(int i=0; i<40; i++){
        dataY.push_back(a);
        a=+50;
    }

    return dataY;
}


double ModuleHrv2::Tinn(QList<double> RRList)
{
    double min = *std::min_element(RRList.begin(), RRList.end());
    double max = *std::max_element(RRList.begin(), RRList.end());
    double TINN;
    TINN= max-min;

    return TINN;
}

QVector<double> ModuleHrv2::PoincareX()
{
    QVector<double> P1 = RRvector;
    P1.pop_back();
    return P1;
}
QVector<double> ModuleHrv2::PoincareY()
{
    QVector<double> P2 = RRvector;
    P2.pop_front();
    return P2;
}
double ModuleHrv2::calcSD1(){
    double SD1=0;
    QVector<double> W1 ={2,4};
    QVector<double> W2 ={4,2};
    QVector<double> P1 = RRvector;
    P1.pop_back();
    QVector<double> P2 = RRvector;
    P2.pop_front();
    QVector<double>R2x(P1.length());
    R2x.fill(0);
    QVector<double>R2y(P1.length());
    R2y.fill(0);
    for(int i=0; i<P1.length(); i++){
        double ui2 = ((P1.value(i)-W1.value(1))*(W2.value(1)-W1.value(1))+(P2.value(i)-W1.value(2))*(W2.value(2)-W1.value(2)))/
            (pow((W1.value(1)-W2.value(2)),2))+(pow((W1.value(2)-W2.value(2)),2));

        R2x.replace(i,(W1.value(1)-((W1.value(1)-W2.value(1))*ui2)));
//         R1y.replace(i,(W1.value(2)-((W1.value(2)-W2.value(2))*ui2)));
    }
    QVector<double>R2od;
    R2od.fill(0);
    for(int i=1; i<P1.length();i++){
         R2od.push_back(abs(R2x.value(i)-R2x.value(1))*sqrt(2));
    }

    int sum2 = 0;
    for(int i=0; i<R2od.length(); i++){
           sum2 += R2od.value(i);
    }

    double mean2 = static_cast<double>(sum2) / R2od.count();
    int sum3 =0;
    for(int i=0; i<R2od.length(); i++){
        sum3 += pow((R2od.value(i)-mean2),2);
    }

    SD1 = sqrt(sum3/R2od.length());

    return SD1;
}
double ModuleHrv2::calcSD2(){
     double SD2=0;
     QVector<double> V1 ={1,1};
     QVector<double> V2 ={2,2};
     QVector<double> P1 = RRvector;
     P1.pop_back();
     QVector<double> P2 = RRvector;
     P2.pop_front();
     QVector<double>R1x(P1.length());
     R1x.fill(0);
     QVector<double>R1y(P1.length());
     R1y.fill(0);
     for(int i=0; i<P1.length(); i++){
         double ui = ((P1.value(i)-V1.value(1))*(V2.value(1)-V1.value(1))+(P2.value(i)-V1.value(2))*(V2.value(2)-V1.value(2)))/
                 (pow((V1.value(1)-V2.value(2)),2))+(pow((V1.value(2)-V2.value(2)),2));

         R1x.replace(i,(V1.value(1)-((V1.value(1)-V2.value(1))*ui)));
//         R1y.replace(i,(V1.value(2)-((V1.value(2)-V2.value(2))*ui)));
     }
    QVector<double>R1od;
    R1od.fill(0);
    for(int i=1; i<P1.length();i++){
        R1od.push_back(abs(R1x.value(i)-R1x.value(1))*sqrt(2));
    }

    int sum4 = 0;
    for(int i=0; i<R1od.length(); i++){
           sum4 += R1od.value(i);
    }

    double mean3 = static_cast<double>(sum4) / R1od.count();
    int sum5 =0;
    for(int i=0; i<R1od.length(); i++){
        sum5 += pow((R1od.value(i)-mean3),2);
    }

    SD2 = sqrt(sum5/R1od.length());

     return SD2;
}
double ModuleHrv2::HRVindex(QList<double> RRList)
{
   int allNN=RRList.length();
   double max = *std::max_element(RRList.begin(), RRList.end());
   double HRVi = allNN/max;
 return HRVi;
}

