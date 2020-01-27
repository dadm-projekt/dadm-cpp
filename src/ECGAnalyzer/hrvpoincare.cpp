#include "hrvpoincare.h"
#include "ui_hrvpoincare.h"

hrvpoincare::hrvpoincare(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hrvpoincare)
{
    ui->setupUi(this);
    hrvpoincare::makePlot();

}

hrvpoincare::hrvpoincare(QList<double> PoincareX, QList<double>  PoincareY)
{
   this->PoincareX = PoincareX;
   this->PoincareY =PoincareY;
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
    //ui->poincareplot->graph(0)->setData(x, y);

    //linia do wyrysowania prostych
    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(0,0,0));
    ui->poincareplot->graph(0)->setPen(pen);

    // wyrysowanie prostych (infinite)
    QCPItemStraightLine *infLine = new QCPItemStraightLine(ui->poincareplot);
    //infLine->point1->setCoords(2, 0);  // lokacje punktów
    //infLine->point2->setCoords(2, 1);
    QCPItemStraightLine *infLine2 = new QCPItemStraightLine(ui->poincareplot);
    //infLine->point1->setCoords(2, 0);  // lokacje punktów
    //infLine->point2->setCoords(2, 1);

    // grid
    ui->poincareplot->xAxis->grid()->setVisible(false);
    ui->poincareplot->yAxis->grid()->setVisible(false);

    // axis labels
    ui->poincareplot->xAxis->setLabel("RRn(s)");
    ui->poincareplot->yAxis->setLabel("RRn+1(s)");

    // axis ranges
    // ui->poincareplot->xAxis->setRange(0, 1);
    //ui->poincareplot->yAxis->setRange(0,1);
    ui->poincareplot->replot();

    // ticker
    QSharedPointer<QCPAxisTickerFixed> fixedTicker1(new QCPAxisTickerFixed);
    ui-> poincareplot->xAxis->setTicker(fixedTicker1);
    fixedTicker1->setTickStep(0.1);
    fixedTicker1->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    QSharedPointer<QCPAxisTickerFixed> fixedTicker2(new QCPAxisTickerFixed);
    ui-> poincareplot->yAxis->setTicker(fixedTicker2);
    fixedTicker2->setTickStep(0.1);
    fixedTicker2->setScaleStrategy(QCPAxisTickerFixed::ssNone);
}
