#include "modulehrv2.h"

ModuleHrv2::ModuleHrv2()
{

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

void ModuleHrv2::AnalyzeSignal()
{

}

double ModuleHrv2::Histogram()
{
    double x=1;
 return x;
}

double ModuleHrv2::Tinn(QList<double> RRList)
{
    double min = *std::min_element(RRList.begin(), RRList.end());
    double max = *std::max_element(RRList.begin(), RRList.end());
    double x;
    x= max-min;

    return x;
}

double ModuleHrv2::Poincare()
{
    double x=1;
 return x;
}
double ModuleHrv2::HRVindex()
{
    double x=1;
 return x;
}

