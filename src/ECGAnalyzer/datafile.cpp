#include "datafile.h"


DataFile::DataFile(QObject *parent):QObject(parent)
{
}

DataFile::~DataFile(){
    delete this->data;
}


QList<double> DataFile::openFile(QString path)
{
    QFile file(path);
    qDebug() << file.exists();

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
       qInfo() << "error";
    }
    QList<double> wynik;
    while (!file.atEnd()) {
        QString line = file.readLine();
        QString result = extractMilivoltage(line);
        bool ok = false;
        double double_result = result.toDouble(&ok);
        qInfo() << double_result;
        wynik.push_back(double_result);
    }
    for (auto&& num: wynik) {
            qInfo() << num;
        }
    return wynik;

}


QString DataFile::extractMilivoltage (QString line){

        QString milivoltageResult;
        bool comaEncountered = false;

        for(int i = 0; i <= line.length(); i++) {
            if(line[i] == ",") {
                comaEncountered=true;
            }
            if(comaEncountered == true) {
                QString converter(1, line[i]);
                milivoltageResult.append(converter);
                            }
        }
        QStringRef subString(&milivoltageResult, 0, milivoltageResult.size()-1);
        QString result = subString.toString();
        result.remove(0,1);

        return result;
    }


void DataFile::writeToFile(QVector<double> fileInputData, QString filename) {

    QFile file(filename+".txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        for (double fileInput : fileInputData) {
             out << fixed << fileInput << endl;
        }
    }

    file.close();
}



