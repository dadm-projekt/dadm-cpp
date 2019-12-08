#include "dataloader.h"
#include "datafile.h"




DataLoader::DataLoader(QObject *parent) : QObject(parent)
{

    file = new DataFile;
}

DataLoader::~DataLoader()
{
    delete file;
}

void  DataLoader:: loadData()
{
        //uzupelnienie pol obiektu file, kiedy to bedzie gotowe emitujemy sygnal
    emit dataLoaded();
}







