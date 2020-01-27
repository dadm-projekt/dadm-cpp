#include "modulerpeaks.h"

ModuleRPeaks::ModuleRPeaks(QList<double> inputData)
{
this->inputData=inputData;
}

ModuleRPeaks::~ModuleRPeaks()
{

}

QList<double> ModuleRPeaks::getInputRPeaks()
{
    return inputData;
}

QList<double> ModuleRPeaks::getoutputData()
{
    return outputData;
}

void ModuleRPeaks::setInputRPeaks(QList<double> inputRPeaks)
{
    this->inputData = inputData;
}

void ModuleRPeaks::setoutputData(QList<double> outputData)
{
    this->outputData=outputData;
}
void ModuleRPeaks::PanTompkins()
{

        QList<unsigned int>Pomocniczy;
        QList<unsigned int>Rpiki;
        // kopiowanie wektora
        /*---------------------------------------------------*/
        QList<double>pomiar;
        unsigned int p0 = this->inputData.size();
        
            for (unsigned int i = 0; i < p0; i++)
        {
            double p1 = this->inputData.at(i);
            pomiar.push_back(p1);
        }

        /*----------------------------------------------------*/

        // RÓŻNICZKOWANIE
        for (int i = 2; i < pomiar.size() - 2; i++) {
            double z = (-(pomiar[i - 2]) - ((pomiar[i - 1]) * 2) + ((pomiar[i + 1]) * 2) + (pomiar[i + 2])) / 8;
            pomiar[i] = z;
        }
        // POTĘGOWANIE
        for (int i = 0; i < pomiar.size(); i++) {
            pomiar[i] *= pomiar[i];

        }
        // CAŁKOWANIE
        int okno = 10;
        double sum;
        for (int i = okno - 1; i < pomiar.size(); i++) {
            sum = 0;
            for (int j = 1; j < okno; j++) {
                sum += pomiar[i - (j - 1)];
            }
            pomiar[i] = sum / okno;
        }
        // PROGOWANIE
        double prog = 0.00345; // Należy dobrać dla poszczegulnego sygału
        int kompensacja_filtracji = 8; // To samo co poprzednie
        for (int i = 0; i < pomiar.size(); i++) {
            if (pomiar[i] >= prog) {
                while (pomiar[i] >= prog && i < pomiar.size())
                {
                    Pomocniczy.push_back(i);
                    ++i;
                }
                std::sort(Pomocniczy.begin(), Pomocniczy.end());
                Rpiki.push_back((Pomocniczy.at(0) + kompensacja_filtracji)*360); // TO JEST WYJŚCIE!
                Pomocniczy.clear();
            }
        }
}

void ModuleRPeaks::AnalyzeSignal()
{
    this-> PanTompkins();
}
