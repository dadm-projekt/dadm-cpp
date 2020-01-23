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
    qInfo() << "ujebiecie";

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
       qInfo() << "error message here";
    }
    QList<double> wynik;
    while (!file.atEnd()) {
        QString line = file.readLine();
        //milivoltageResults.push_back(extractMilivoltage(line));
        QString result = extractMilivoltage(line);
        bool ok = false;
        double Dresult = result.toDouble(&ok);
        qInfo() << Dresult;
        wynik.push_back(Dresult);
    }
    return wynik;
}


void DataFile::setAge(){
       //
}

void DataFile::setGender(){
       //
}

//void DataFile::setData(){
   // data = new QList<double>();
       //

//}


QString DataFile::extractMilivoltage (QString line){

        //int whiteSpaceCounter = 0;
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



