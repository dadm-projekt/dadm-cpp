#ifndef DATAFILE_H
#define DATAFILE_H

#include <QObject>
#include <QMetaType>
#include <QVector>
#include <QDataStream>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QStringRef>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <iomanip>
#include <vector>
#include <QDebug>

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

    QString extractMilivoltage(QString);
    void setAge();
    void setGender();
    void setData(int, char);
    QList<double> openFile(QString);
    void writeToFile(QVector<double>, QString);
};

#endif // DATAFILE_H



