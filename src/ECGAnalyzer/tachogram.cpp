#include "tachogram.h"
#include "ui_tachogram.h"

tachogram::tachogram(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tachogram)
{
    ui->setupUi(this);
    tachogram::makePlot();
}
tachogram::tachogram(QList<double> inputRPeaks,QList<double> inputQRS,QList<double> inputWaves)
{
   this->inputRPeaks = inputRPeaks;
}

tachogram::~tachogram()
{
    delete ui;
}

void tachogram::makePlot()
{

    // data - pobranie danych

    // utworzenie wykresu i przydzielenie do niego danych
    ui->tachogramplot->addGraph();
    // ui->tachogramplot->graph(0)->setData(x, y);

    // axes
    ui->tachogramplot->xAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->tachogramplot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->tachogramplot->yAxis->setNumberFormat("eb");
    ui->tachogramplot->yAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
    ui->tachogramplot->xAxis->setLabel("Czas [s]");
    ui->tachogramplot->yAxis->setLabel("Odstęp R-R [ms]");

    // ticker
    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui->tachogramplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(200);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker2(new QCPAxisTickerFixed);
    ui->tachogramplot->yAxis->setTicker(fixedTicker2);
    fixedTicker2->setTickStep(500);
    fixedTicker2->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    // axes - zakresy
    //ui->tachogramplot->xAxis->setRange(-1, 1);
    //ui->tachogramplot->yAxis->setRange(0, 1);
    ui->tachogramplot->replot();


}

