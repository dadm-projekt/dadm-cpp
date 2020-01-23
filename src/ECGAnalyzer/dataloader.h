#ifndef DATALOADER_H
#define DATALOADER_H

#include"datafile.h"
#include <QObject>

class DataLoader : public QObject
{
    Q_OBJECT

public:
    DataFile *file;

    explicit DataLoader(QObject *parent = 0);
    ~DataLoader();



signals:
    void dataLoaded(); // do ecganalyzercontroller

public slots:
    void loadData(); // reaguje na sygnal z przycisku 'load data'przy wyborze pliku
    //tylko za bardzo nie wiem skad ma isc ten sygnal


};

#endif // DATALOADER_H



//QFile file("file.txt");
//if(file.open(QIODevice::ReadOnly | QIODevice::Text)){ // metoda open w otwiera plik w trybie tylko do odczytu z zamianą znaków \r\n ma \n
//    QTextStream in(&file);
//    qDebug() << in.readAll();
//    file.close();
//}


