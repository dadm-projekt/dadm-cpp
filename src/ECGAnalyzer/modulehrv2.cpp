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

//  for(int i=0; i<RRvector.length(); i++){
//    qDebug()<<RRvector.value(i) ;
//    }

    qInfo() << "konstruktor dziala";
//    qInfo( "C Style Info Message" );

//    qDebug() << "C++ Style Debug Message";
//    qDebug( "C Style Debug Message" );

//    qWarning() << "C++ Style Warning Message";
//    qWarning( "C Style Warning Message" );

//    qCritical() << "C++ Style Critical Error Message";
//    qCritical( "C Style Critical Error Message" );


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

double ModuleHrv2::Poincare()
{
    double x=1; // tu nic nie ma to na razie jest żeby sie nie czepiało
 return x;
}
double ModuleHrv2::HRVindex(QList<double> RRList)
{
   int allNN=RRList.length();
   double max = *std::max_element(RRList.begin(), RRList.end());
   double HRVi = allNN/max;
 return HRVi;
}

