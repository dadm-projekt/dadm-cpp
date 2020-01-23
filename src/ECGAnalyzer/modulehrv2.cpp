#include "modulehrv2.h"

ModuleHrv2::ModuleHrv2(QList<double> RRList)
{

     RRvector = RRList.toVector();

     int sum = 0;
        for(int i=0; i<RRvector.length(); i++){
            sum += RRvector[i];
        }

        double mean = static_cast<double>(sum) / RRvector.count();

        for(int i=0; i<RRvector.length();i++){
            double m2 = mean*2;
            if(RRvector[i]>m2){
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

void ModuleHrv2::AnalyzeSignal()
{

}

QVector<double> ModuleHrv2::HistogramY()
{
    QVector<double>data(40);
    data.fill(0);

    for(int i=0;i<RRvector.length(); i++){
        int a=0;
        for(int j=0;j<data.size(); j++){
            if(RRvector[i]>=a && RRvector[i] <a+50){
              data.replace(j,data[j]+1);
            }
            a +=50;
        }
    }
    return data;
    }

QVector<double> ModuleHrv2::HistogramX(){
    QVector<double> dataX(40);

    int a=25;
    for(int i=0; i<40; i++){
        dataX.replace(i,a);
        a +=50;
    }

    return dataX;
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
        double ui2 = ((P1[i]-W1[1])*(W2[1]-W1[1])+(P2[i]-W1[2])*(W2[2]-W1[2]))/
            (pow((W1[1]-W2[2]),2))+(pow((W1[2]-W2[2]),2));

        R2x.replace(i,(W1[1]-((W1[1]-W2[1])*ui2)));
//         R1y.replace(i,(W1.value(2)-((W1.value(2)-W2.value(2))*ui2)));
    }
    QVector<double>R2od;
    R2od.fill(0);
    for(int i=1; i<P1.length();i++){
         R2od.push_back(abs(R2x[i]-R2x[1])*sqrt(2));
    }

    int sum2 = 0;
    for(int i=0; i<R2od.length(); i++){
           sum2 += R2od[i];
    }

    double mean2 = static_cast<double>(sum2) / R2od.count();
    int sum3 =0;
    for(int i=0; i<R2od.length(); i++){
        sum3 += pow((R2od[i]-mean2),2);
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
         double ui = ((P1[i]-V1[1])*(V2[1]-V1[1])+(P2[i]-V1[2])*(V2[2]-V1[2]))/
                 (pow((V1[1]-V2[2]),2))+(pow((V1[2]-V2[2]),2));

         R1x.replace(i,(V1[1]-((V1[1]-V2[1])*ui)));
//         R1y.replace(i,(V1.value(2)-((V1.value(2)-V2.value(2))*ui)));
     }
    QVector<double>R1od;
    R1od.fill(0);
    for(int i=1; i<P1.length();i++){
        R1od.push_back(abs(R1x[i]-R1x[1])*sqrt(2));
    }

    int sum4 = 0;
    for(int i=0; i<R1od.length(); i++){
           sum4 += R1od[i];
    }

    double mean3 = static_cast<double>(sum4) / R1od.count();
    int sum5 =0;
    for(int i=0; i<R1od.length(); i++){
        sum5 += pow((R1od[i]-mean3),2);
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

