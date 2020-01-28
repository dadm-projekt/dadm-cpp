#ifndef HRVPOINCARE_H
#define HRVPOINCARE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class hrvpoincare; }
QT_END_NAMESPACE

class hrvpoincare : public QMainWindow
{
    Q_OBJECT

public:
    hrvpoincare(QWidget *parent = nullptr);
    ~hrvpoincare();

private slots:
    void makePlot();

private:
    Ui::hrvpoincare *ui;
};
#endif // HRVPOINCARE_H
