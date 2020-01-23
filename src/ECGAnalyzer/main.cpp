#include "mainwindow.h"
#include <QApplication>
#include "datafile.h"

//xd2
int main(int argc, char *argv[])
{

    QString path = "C:/Users/marta/OneDrive/Desktop/samples.csv";
    DataFile *test = new DataFile;
    QList<double> wynik = test->openFile(path);
    qInfo() << wynik;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
