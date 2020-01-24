#include "mainwindow.h"
#include <QApplication>
#include "modulehrv2.h"

int main(int argc, char *argv[])
{

    QList<double> test2 = {0.1 ,0.02,0.020,1.050,1.05, 1.25, 1.1, 1.111 ,0.140,0.0180,0.0340,0.0450,0.0580,0.0324,1.95};


    ModuleHrv2 *test3 = new ModuleHrv2(test2);

    double SD2 = test3->calcSD2();
    double SD1 = test3->calcSD1();
    qInfo() << "histogram Y " << test3->calcHistogramY();
    qInfo() << "histogram X" << test3->calcHistogramX();
    qInfo() << "PoincareX" << test3->calcPoincareX();
    qInfo() << "PoincareY" << test3->calcPoincareY();
    double Tinn = test3->calcTinn();
    double HRVi = test3->calcHRVindex();
    qInfo() <<"Tinn"<< Tinn;
    qInfo() <<"HRVi"<< HRVi;
    qInfo() <<"SD1"<< SD1;
    qInfo() <<"SD2"<< SD2;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
