#include "mainwindow.h"
#include <QApplication>
#include "modulehrv2.h"

int main(int argc, char *argv[])
{
//    ModuleHrv2 test;
//    QList<double> test2 = {1.0, 2.3, 4.5, 9.0, 6.2, 5.2, 7.8};
//    qInfo() << test.Tinn(test2);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
