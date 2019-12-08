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
