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
    // data - LOGARYTMICZNA SKALA
    // x - wektor a4
    // y - wektor a3

    // utworzenie wykresu i przydzielenie do niego danych
    ui->dfa2plot->setNoAntialiasingOnDrag(true);
    ui->dfa2plot->addGraph();
    // ui->dfa2plot->graph(0)->setData(x, y);

    // axes
    ui->dfa2plot->xAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa2plot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    ui->dfa2plot->yAxis->setNumberFormat("eb");
    ui->dfa2plot->yAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
    ui->dfa2plot->xAxis->setLabel("F(Δm)");
    ui->dfa2plot->yAxis->setLabel("(Δm)");

    // axes - zakresy
    //ui->dfa2plot->xAxis->setRange(-1, 1);
    //ui->dfa2plot->yAxis->setRange(0, 1);
    ui->dfa2plot->replot();

}

