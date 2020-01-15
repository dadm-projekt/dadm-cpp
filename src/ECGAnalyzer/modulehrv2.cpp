#include "modulehrv2.h"

ModuleHrv2::ModuleHrv2()
{

    qInfo() << "konstruktor dziala";
    qInfo( "C Style Info Message" );

    qDebug() << "C++ Style Debug Message";
    qDebug( "C Style Debug Message" );

    qWarning() << "C++ Style Warning Message";
    qWarning( "C Style Warning Message" );

    qCritical() << "C++ Style Critical Error Message";
    qCritical( "C Style Critical Error Message" );

}

ModuleHrv2::~ModuleHrv2()
{

}

void ModuleHrv2::AnalyzeSignal()
{

}

void ModuleHrv2::Histogram()
{

}

void ModuleHrv2::Tinn()
{

}

