#include "hrvhisto.h"
#include "ui_hrvhisto.h"


hrvhisto::hrvhisto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hrvhisto)
{
    ui->setupUi(this);
    hrvhisto::makePlot();
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
    //ui->histoplot->addPlottable(odstep);
    odstep->setName("Odstęp NN");
    odstep->setPen(QPen(QColor(2, 95, 166).lighter(156)));
    odstep->setBrush(QColor(2, 95, 166));

    // x axis
    ui->histoplot->xAxis->setLabel("Odstęp NN [ms]");

    QVector<double> ticks;
    ticks << 200 << 400 << 600 << 800 << 1000 << 1200 << 1400 << 1600 << 1800<< 2000;

    QSharedPointer<QCPAxisTickerText> newTicker(new QCPAxisTickerText);
    ui->histoplot->xAxis->setTicker(newTicker);
    ui->histoplot->xAxis->setSubTicks(false);
    ui->histoplot->xAxis->setTickLength(0, 200);
    ui->histoplot->xAxis->setRange(0, 2400);

    // y axis
    ui->histoplot->yAxis->setRange(0, 18000);
    ui->histoplot->yAxis->setTickLength(0, 2000);
    ui->histoplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->histoplot->replot();

}
