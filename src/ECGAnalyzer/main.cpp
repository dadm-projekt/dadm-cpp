#include "mainwindow.h"
#include <QApplication>
#include "modulehrv2.h"

int main(int argc, char *argv[])
{

//     QList<double> test2 = {1.0, 2.3, 4.5,132, 9.0, 6.2, 5.2, 7.8};
//     ModuleHrv2 *test = new ModuleHrv2(test2);
//    qInfo() << test.HRVindex(test2);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
