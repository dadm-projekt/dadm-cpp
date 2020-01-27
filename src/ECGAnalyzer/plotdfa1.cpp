#include "plotdfa1.h"
#include "ui_plotdfa1.h"


plotdfa1::plotdfa1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::plotdfa1)
{
    ui->setupUi(this);
    plotdfa1::makePlot1();

}

plotdfa1::~plotdfa1()
{
    delete ui;
}

void plotdfa1::makePlot1()
{
        // data - LOGARYTMICZNA SKALA
        // x - wektor a2
        // y - wektor a1

        // utworzenie wykresu i przydzielenie do niego danych
        ui->dfa1plot->setNoAntialiasingOnDrag(true);
        ui->dfa1plot->addGraph();
        // ui->dfa1plot->graph(0)->setData(x, y);

        // axes
        ui->dfa1plot->xAxis->setScaleType(QCPAxis::stLogarithmic);
        ui->dfa1plot->yAxis->setScaleType(QCPAxis::stLogarithmic);
        ui->dfa1plot->yAxis->setNumberFormat("eb");
        ui->dfa1plot->yAxis->setNumberPrecision(0); // NIE wyświetlamy 1*(10^x) tylko samo (10^x)
        ui->dfa1plot->xAxis->setLabel("F(Δm)");
        ui->dfa1plot->yAxis->setLabel("(Δm)");

        // axes - zakresy
        //ui->dfa1plot->xAxis->setRange(-1, 1);
        //ui->dfa1plot->yAxis->setRange(0, 1);
        ui->dfa1plot->replot();
}
