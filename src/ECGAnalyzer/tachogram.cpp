#include "tachogram.h"
#include "ui_tachogram.h"

tachogram::tachogram(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tachogram)
{
    ui->setupUi(this);
    tachogram::makePlot();
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
    ui->tachogramplot->xAxis->setLabel("Czas [s]");
    ui->tachogramplot->yAxis->setLabel("Odstęp R-R [ms]");

    // axes - zakresy
    ui->tachogramplot->xAxis->setRange(0, 5000);
    ui->tachogramplot->yAxis->setRange(0,3000);

    //tickers
    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui->tachogramplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(500);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssPowers);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker2(new QCPAxisTickerFixed);
    ui->tachogramplot->yAxis->setTicker(fixedTicker2);
    fixedTicker2->setTickStep(500);
    fixedTicker2->setScaleStrategy(QCPAxisTickerFixed::ssPowers);

    ui->tachogramplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->tachogramplot->replot();


}

