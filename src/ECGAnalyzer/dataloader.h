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
    void dataLoaded();

public slots:
    void loadData();

};

#endif // DATALOADER_H
