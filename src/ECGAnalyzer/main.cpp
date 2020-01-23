#include "mainwindow.h"
#include <QApplication>
#include "modulehrv2.h"

int main(int argc, char *argv[])
{

    QList<double> test2 = {1 ,2,20,50,140,180,340,450,580,324};
//    qInfo() << test2.length();
//    QVector<double> test2 = {1.0, 2.0};
//    QVector<double> test3 = {2.0, 3.0};
    ModuleHrv2 *test = new ModuleHrv2(test2);

    //double pot = qFabs(-4);
    double SD2 = test->calcSD2();
    double SD1 = test->calcSD1();
    qInfo() << "histogram Y " << test->HistogramY();
    qInfo() << "histogram X" << test->HistogramX();
    qInfo() << "PoincareX" << test->PoincareX();
    qInfo() << "PoincareY" << test->PoincareY();
    double Tinn = test->Tinn(test2);
    double HRVi = test->HRVindex(test2);
    qInfo() <<"Tinn"<< Tinn;
    qInfo() <<"HRVi"<< HRVi;
    qInfo() <<"SD1"<< SD1;
    qInfo() <<"SD2"<< SD2;
    //qInfo() << pot;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
