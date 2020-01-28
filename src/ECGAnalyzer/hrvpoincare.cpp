#include "hrvpoincare.h"
#include "ui_hrvpoincare.h"

hrvpoincare::hrvpoincare(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hrvpoincare)
{
    ui->setupUi(this);
    hrvpoincare::makePlot();

}

hrvpoincare::~hrvpoincare()
{
    delete ui;
}

void hrvpoincare::makePlot()
{
    // pobranie danych do poincare


    // utworzenie wykresu
    ui->poincareplot->addGraph();
    // ui->poincareplot->graph(0)->setData(x, y);

    //linia do wyrysowania elipsy
    QPen penelipse;
    penelipse.setWidth(2);
    penelipse.setColor(QColor(237,28,36));
    ui->poincareplot->graph(0)->setPen(penelipse);

    // grid
    ui->poincareplot->xAxis->grid()->setVisible(false);
    ui->poincareplot->yAxis->grid()->setVisible(false);

    // axis labels
    ui->poincareplot->xAxis->setLabel("RRn(s)");
    ui->poincareplot->yAxis->setLabel("RRn+1(s)");

    // axis ranges
    ui->poincareplot->xAxis->setRange(0.9, 1.2);
    ui->poincareplot->yAxis->setRange(0.9,1.2);

    // axis box
    ui->poincareplot->axisRect()->setupFullAxesBox();
    connect(ui->poincareplot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->poincareplot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->poincareplot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->poincareplot->yAxis2, SLOT(setRange(QCPRange)));


    // ticker
    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui-> poincareplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(0.05);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker2(new QCPAxisTickerFixed);
    ui-> poincareplot->yAxis->setTicker(fixedTicker2);
    fixedTicker2->setTickStep(0.05);
    fixedTicker2->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    ui->poincareplot->setInteractions(QCP::iRangeZoom);
    ui->poincareplot->replot();
}
