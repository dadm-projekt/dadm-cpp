#ifndef hrvpoincare_H
#define hrvpoincare_H

#include <QMainWindow>
#include <QObject>
#include "module.h"


QT_BEGIN_NAMESPACE
namespace Ui { class hrvpoincare; }
QT_END_NAMESPACE

class hrvpoincare : public QMainWindow
{
    Q_OBJECT

public:
    hrvpoincare(QWidget *parent = nullptr);
    ~hrvpoincare();
    QVector<double> PoincareX;
    QVector<double> PoincareY;

private slots:
    void makePlot();

private:
    Ui::hrvpoincare *ui;
};
#endif // hrvpoincare_H
