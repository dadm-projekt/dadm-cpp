#include "mainwindow.h"
#include <QApplication>
#include "modulehrv2.h"

int main(int argc, char *argv[])
{

    QList<double> test2 = {3,1.0,1840.0, 2.3, 4.5,132, 9.0, 400,980,1051, 1101, 1201,1401,1402,1701,1751, 1801,1950,1840};
//    QVector<double> test2 = {1.0, 2.0};
//    QVector<double> test3 = {2.0, 3.0};
    ModuleHrv2 *test = new ModuleHrv2(test2);

    qInfo() << test->HistogramX();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
