#include "modulehrv2.h"

ModuleHrv2::ModuleHrv2(QList<double> inputData)
{

     RRvector = inputData.toVector();

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
        for(int i=0; i<RRvector.length();i++){
            RRvector.replace(i, RRvector[i] *1000);
        }
}

ModuleHrv2::~ModuleHrv2()
{

}

void ModuleHrv2::AnalyzeSignal()
{
    this->setSD1(calcSD1());
    this->setSD2(calcSD2());
    this->setHRVi(calcHRVindex());
    this->setTinn(calcTinn());
    this->setPoincareX(calcPoincareX());
    this->setPoincareY(calcPoincareY());
    this->setHistogramX(calcHistogramX());
    this->setHistogramY(calcHistogramY());
}

double ModuleHrv2::getSD1(){
    return SD1;
}
double ModuleHrv2::getSD2(){
    return SD2;
}
double ModuleHrv2::getHRVi(){
    return HRVi;
}
double ModuleHrv2::getTinn(){
    return Tinn;
}
QVector<double> ModuleHrv2::getHistogramY(){
    return HistogramY;
}
QVector<double> ModuleHrv2::getHistogramX(){
    return HistogramX;
}
QVector<double> ModuleHrv2::getPoincareY(){
    return PoincareY;
}
QVector<double> ModuleHrv2::getPoincareX(){
    return PoincareX;
}
void ModuleHrv2::setSD1(double SD1){
    this->SD1 = SD1;
}
void ModuleHrv2::setSD2(double SD2){
    this->SD2 = SD2;
}
void ModuleHrv2::setHRVi(double HRVi){
    this->HRVi = HRVi;
}
void ModuleHrv2::setTinn(double Tinn){
    this->Tinn = Tinn;
}
void ModuleHrv2::setHistogramX(QVector<double> HistogramX){
    this->HistogramX = HistogramX;
}
void ModuleHrv2::setHistogramY(QVector<double> HistogramY){
    this->HistogramY = HistogramY;
}
void ModuleHrv2::setPoincareX(QVector<double> PoincareX){
    this->PoincareX = PoincareX;
}
void ModuleHrv2::setPoincareY(QVector<double> PoincareY){
    this->PoincareY = PoincareY;
}

QVector<double> ModuleHrv2::calcHistogramY()
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

QVector<double> ModuleHrv2::calcHistogramX(){
    QVector<double> dataX(40);

    int a=25;
    for(int i=0; i<40; i++){
        dataX.replace(i,a);
        a +=50;
    }

    return dataX;
}


double ModuleHrv2::calcTinn()
{
    double min = *std::min_element(RRvector.begin(), RRvector.end());
    double max = *std::max_element(RRvector.begin(), RRvector.end());
    double TINN;
    TINN= max-min;

    return TINN;
}

QVector<double> ModuleHrv2::calcPoincareX()
{
    QVector<double> P1 = RRvector;
    P1.pop_back();
    return P1;
}
QVector<double> ModuleHrv2::calcPoincareY()
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
        double ui1 = ((P1[i]-W1[0])*(W2[0]-W1[0])+(P2[i]-W1[1])*(W2[1]-W1[1]));
        double ui2=  (qPow((W1[0]-W2[1]),2))+(qPow((W1[1]-W2[1]),2));
        double ui= ui1/ui2;
        R2x.replace(i,(W1[0]-((W1[0]-W2[0])*ui)));
//         R1y.replace(i,(W1.value(2)-((W1.value(2)-W2.value(2))*ui2)));
    }
    QVector<double>R2od;
//    R2od.fill(0);
    for(int i=1; i<P1.length();i++){
         R2od.push_back(qFabs(R2x[i]-R2x[0])*qSqrt(2));
    }

    int sum2 = 0;
    for(int i=0; i<R2od.length(); i++){
           sum2 += R2od[i];
    }

    double mean2 = static_cast<double>(sum2) / R2od.count();
    int sum3 =0;
    for(int i=0; i<R2od.length(); i++){
        sum3 += qPow((R2od[i]-mean2),2);
    }

    SD1 = qSqrt(sum3/R2od.length());

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
         double ui1 = ((P1[i]-V1[0])*(V2[0]-V1[0])+(P2[i]-V1[1])*(V2[1]-V1[1]));
         double ui2 = ((qPow((V1[0]-V2[1]),2))+(qPow((V1[1]-V2[1]),2)));
         double ui = ui1/ui2;
         R1x.replace(i,(V1[0]-((V1[0]-V2[0])*ui)));
//         R1y.replace(i,(V1.value(2)-((V1.value(2)-V2.value(2))*ui)));
     }
    QVector<double>R1od;
    R1od.fill(0);
    for(int i=0; i<P1.length();i++){
        R1od.push_back(qFabs(R1x[i]-R1x[0])*qSqrt(2));
    }

    int sum4 = 0;
    for(int i=0; i<R1od.length(); i++){
           sum4 += R1od[i];
    }

    double mean3 = static_cast<double>(sum4) / R1od.count();
    int sum5 =0;
    for(int i=0; i<R1od.length(); i++){
        sum5 += qPow((R1od[i]-mean3),2);
    }

    SD2 = qSqrt(sum5/R1od.length());

     return SD2;
}
double ModuleHrv2::calcHRVindex()
{
   int allNN=RRvector.length();
   double max = *std::max_element(RRvector.begin(), RRvector.end());
   double HRVi = allNN/max;
 return HRVi;
}

