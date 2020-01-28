#include "plotdfa1.h"
#include "ui_plotdfa1.h"
#include "maindfa.cpp"

plotdfa1::plotdfa1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::plotdfa1)
{
    ui->setupUi(this);
    plotdfa1::makePlot();

}

plotdfa1::~plotdfa1()
{
    delete ui;
}

void plotdfa1::makePlot()
{
    ui->dfa1plot->addGraph();
    //ui->dfa2plot->graph(0)->setData(x, y);

    // axes
    ui->dfa1plot->xAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa1plot->xAxis2->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa1plot->xAxis->setNumberFormat("eb");
    ui->dfa1plot->xAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
    ui->dfa1plot->xAxis->grid()->setSubGridVisible(true);

    ui->dfa1plot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa1plot->yAxis2->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa1plot->yAxis->setNumberFormat("eb");
    ui->dfa1plot->yAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
    ui->dfa1plot->yAxis->grid()->setSubGridVisible(true);

    ui->dfa1plot->xAxis->grid()->setVisible(true);
    ui->dfa1plot->yAxis->grid()->setVisible(true);
    ui->dfa1plot->xAxis->setLabel("F(Δm)");
    ui->dfa1plot->yAxis->setLabel("(Δm)");

    // ticker
    QSharedPointer<QCPAxisTickerLog> logTicker(new QCPAxisTickerLog);
    ui->dfa1plot->yAxis->setTicker(logTicker);
    ui->dfa1plot->yAxis2->setTicker(logTicker);
    ui->dfa1plot->xAxis->setTicker(logTicker);
    ui->dfa1plot->xAxis2->setTicker(logTicker);

    // axes - zakresy
    ui->dfa1plot->xAxis->setRange(1e0, 1e10);
    ui->dfa1plot->yAxis->setRange(1e0, 1e10);

    ui->dfa1plot->replot();

}
