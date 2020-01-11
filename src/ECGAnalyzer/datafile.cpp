#include "datafile.h"
#include <QString>






DataFile::DataFile(QObject *parent):QObject(parent)
{

}

DataFile::~DataFile(){
    delete this->data;
}

void DataFile::openFile()
{

}

void DataFile::setAge(){
       //
}

void DataFile::setGender(){
       //
}

void DataFile::setData(){
    data = new QList<double>();
       //

}





