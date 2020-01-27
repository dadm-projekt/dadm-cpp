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
    //ui->periodogramplot->graph(0)->setData(x, y);

    // linia do wyrysowania prostych
    QPen pen;
    pen.setWidth(1);
    pen.setColor(QColor(237,28,36));
    //ui->periodogramplot->graph(0)->setPen(pen);

    // wyrysowanie prostych (infinite)
    QCPItemStraightLine *infLine = new QCPItemStraightLine(ui->periodogramplot);
    //infLine->point1->setCoords(2, 0);  // lokacje punktów
    //infLine->point2->setCoords(2, 1);
    QCPItemStraightLine *infLine2 = new QCPItemStraightLine(ui->periodogramplot);
    //infLine->point1->setCoords(2, 0);  // lokacje punktów
    //infLine->point2->setCoords(2, 1);
    QCPItemStraightLine *infLine3 = new QCPItemStraightLine(ui->periodogramplot);
    //infLine->point1->setCoords(2, 0);  // lokacje punktów
    //infLine->point2->setCoords(2, 1);

    // grid
    ui->periodogramplot->xAxis->grid()->setVisible(false);
    ui->periodogramplot->yAxis->grid()->setVisible(false);

    // axis labels
    ui->periodogramplot->xAxis->setLabel("Częstotliwość [Hz]");
    ui->periodogramplot->yAxis->setLabel("PSD");

    // axis ranges
    ui->periodogramplot->xAxis->setRange(0, 15);
    ui->periodogramplot->yAxis->setRange(0,0.6);
    ui->periodogramplot->replot();

    // ticker
    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui-> periodogramplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(0.05);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker2(new QCPAxisTickerFixed);
    ui-> periodogramplot->yAxis->setTicker(fixedTicker2);
    fixedTicker2->setTickStep(1);
    fixedTicker2->setScaleStrategy(QCPAxisTickerFixed::ssNone);
}
