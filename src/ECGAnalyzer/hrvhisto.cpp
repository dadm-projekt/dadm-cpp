#include "hrvhisto.h"
#include "ui_hrvhisto.h"
#include <algorithm>
#include <iostream>

hrvhisto::hrvhisto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hrvhisto)
{
    ui->setupUi(this);
    hrvhisto::makePlot();
}

hrvpoincare::hrvpoincare(QList<double> , QList<double>  HistogramY)
{
   this->HistogramX = HistogramX;
   this->HistogramY = HistogramY;
}
hrvhisto::~hrvhisto()
{
    delete ui;
}

void hrvhisto::makePlot()
{
    // wytworzenie pustych obiektów bar chart
    QCPBars *odstep = new QCPBars(ui->histoplot->xAxis, ui->histoplot->yAxis);
    odstep->setAntialiased(false);

    // kolory, nazwa (bar charts)
    odstep->setName("Odstęp NN");
    odstep->setPen(QPen(QColor(2, 95, 166).lighter(156)));
    odstep->setBrush(QColor(2, 95, 166));

    // x axis - pobieramy wektor

    // x axis
    ui->histoplot->xAxis->setLabel("Odstęp NN [ms]");
    ui->histoplot->xAxis->setSubTicks(false);
    ui->histoplot->xAxis->setTickLength(0, 200);
    ui->histoplot->xAxis->setRange(0, 2000);

    // y axis
    ui->histoplot->yAxis->setRange(0, 20000);
    ui->histoplot->yAxis->setTickLength(0, 2000);

    //Add data
    QVector<double> odstepData;
    // odstepData <<
}
