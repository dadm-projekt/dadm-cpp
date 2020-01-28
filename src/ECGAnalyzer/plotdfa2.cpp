#include "plotdfa2.h"
#include "ui_plotdfa2.h"

plotdfa2::plotdfa2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::plotdfa2)
{
    ui->setupUi(this);
    plotdfa2::makePlot();
}

plotdfa2::~plotdfa2()
{
    delete ui;
}

void plotdfa2::makePlot()
{
    ui->dfa2plot->addGraph();
    //ui->dfa2plot->graph(0)->setData(x, y);

    // axes
    ui->dfa2plot->xAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa2plot->xAxis2->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa2plot->xAxis->setNumberFormat("eb");
    ui->dfa2plot->xAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
    ui->dfa2plot->xAxis->grid()->setSubGridVisible(true);

    ui->dfa2plot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa2plot->yAxis2->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa2plot->yAxis->setNumberFormat("eb");
    ui->dfa2plot->yAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
    ui->dfa2plot->yAxis->grid()->setSubGridVisible(true);

    ui->dfa2plot->xAxis->grid()->setVisible(true);
    ui->dfa2plot->yAxis->grid()->setVisible(true);
    ui->dfa2plot->xAxis->setLabel("F(Δm)");
    ui->dfa2plot->yAxis->setLabel("(Δm)");

    // ticker
    QSharedPointer<QCPAxisTickerLog> logTicker(new QCPAxisTickerLog);
    ui->dfa2plot->yAxis->setTicker(logTicker);
    ui->dfa2plot->yAxis2->setTicker(logTicker);
    ui->dfa2plot->xAxis->setTicker(logTicker);
    ui->dfa2plot->xAxis2->setTicker(logTicker);


    // axes - zakresy
    ui->dfa2plot->xAxis->setRange(1e0, 1e10);
    ui->dfa2plot->yAxis->setRange(1e0, 1e10);

    ui->dfa2plot->replot();

}

