#include "ecgplotting.h"
#include "ui_ecgplotting.h"

ecgplotting::ecgplotting(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ecgplotting)
{
    ui->setupUi(this);
    ecgplotting::makePlot();
}

ecgplotting::~ecgplotting()
{
    delete ui;
}

void ecgplotting::makePlot()
{

    // pobierz dane

    // stwórz graph
    ui->ecgplot->addGraph();
    //ui->ecgplot->graph(0)->setData(x, y);

    // wygląd linii
    QPen pen;
    pen.setWidth(1);
    pen.setColor(QColor(0,0,0));
    ui->ecgplot->graph(0)->setPen(pen);

    // generacja tła
    QColor Background;
    Background = QColor(254,244,249);
    ui->ecgplot->setBackground(QBrush(Background));

    // kustomizacja grid (charakterystyczne dla wydruków EKG)
    ui->ecgplot->xAxis->grid()->setVisible(true);
    ui->ecgplot->yAxis->grid()->setVisible(true);
    ui->ecgplot->xAxis->grid()->setSubGridVisible(true);
    ui->ecgplot->yAxis->grid()->setSubGridVisible(true);

    QPen pen2;
    pen2.setWidth(2);
    pen2.setColor(QColor(254,174,182));

    ui->ecgplot->xAxis->grid()->setPen(pen2);
    ui->ecgplot->yAxis->grid()->setPen(pen2);


    // axis labels
    ui->ecgplot->xAxis->setLabel("Czas [s]");
    ui->ecgplot->yAxis->setLabel("Sygnał EKG [mv]");

    // axis ranges

    // ticker

    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui-> ecgplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(0.2);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker3(new QCPAxisTickerFixed);
    ui-> ecgplot->xAxis2->setTicker(fixedTicker3);
    fixedTicker3->setTickStep(0.04);
    fixedTicker3->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker2(new QCPAxisTickerFixed);
    ui-> ecgplot->yAxis->setTicker(fixedTicker2);
    fixedTicker2->setTickStep(0.5);
    fixedTicker2->setScaleStrategy(QCPAxisTickerFixed::ssNone);


    //ui->ecgplot->xAxis->ticker()->setTickCount(10);
    ui->ecgplot->yAxis->ticker()->setTickCount(2);
    ui->ecgplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    // grid

}
