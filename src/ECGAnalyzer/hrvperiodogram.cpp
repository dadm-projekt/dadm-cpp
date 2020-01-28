#include "hrvperiodogram.h"
#include "ui_hrvperiodogram.h"

hrvperiodogram::hrvperiodogram(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hrvperiodogram)
{
    ui->setupUi(this);
    hrvperiodogram::makePlot();
}

hrvperiodogram::~hrvperiodogram()
{
    delete ui;
}

void hrvperiodogram::makePlot()
{
    // pobranie danych do periodogramu

    // utworzenie wykresu
    ui->periodogramplot->addGraph();
    ui->periodogramplot->setNoAntialiasingOnDrag(true);
    //ui->periodogramplot->graph(0)->setData(x, y);


    // grid
    ui->periodogramplot->xAxis->grid()->setVisible(true);
    ui->periodogramplot->yAxis->grid()->setVisible(true);

    // axis labels
    ui->periodogramplot->xAxis->setLabel("Częstotliwość [Hz]");
    ui->periodogramplot->yAxis->setLabel("Gęstość widmowa mocy - PSD");

    // zapewnienie skali logarytmicznej
    ui->periodogramplot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->periodogramplot->yAxis2->setScaleType(QCPAxis::stLogarithmic);
    ui->periodogramplot->yAxis->setNumberFormat("eb");
    ui->periodogramplot->yAxis->setNumberPrecision(0);
    ui->periodogramplot->yAxis->grid()->setSubGridVisible(true);

    // axis ranges
    ui->periodogramplot->xAxis->setRange(0, 9000);
    ui->periodogramplot->yAxis->setRange(1e0, 1e10);

    // ticker
    QSharedPointer<QCPAxisTickerLog> logTicker(new QCPAxisTickerLog);
    ui->periodogramplot->yAxis->setTicker(logTicker);
    ui->periodogramplot->yAxis2->setTicker(logTicker);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui-> periodogramplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(1000);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    ui->periodogramplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->periodogramplot->replot();

}
