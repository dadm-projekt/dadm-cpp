#ifndef DATAFILE_H
#define DATAFILE_H

#include <QObject>


class DataFile : public QObject
{
    Q_OBJECT

public:

    int age = 0;
    QString gender = "";

   //jezeli sa to tez inne pola mozliwe do wyciagniecia z pliku

    QList<double> *data;

    explicit DataFile(QObject *parent = 0);
    virtual ~DataFile();

    void openFile();
    void setAge();
    void setGender();
    void setData();
};

#endif // DATAFILE_H
