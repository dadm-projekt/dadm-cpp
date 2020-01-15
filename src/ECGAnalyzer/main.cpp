#include "mainwindow.h"
#include <QApplication>
#include "modulehrv2.h"

int main(int argc, char *argv[])
{
    ModuleHrv2 dupa;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
