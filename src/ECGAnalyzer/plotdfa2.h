#ifndef PLOTDFA2_H
#define PLOTDFA2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class plotdfa2; }
QT_END_NAMESPACE

class plotdfa2 : public QMainWindow
{
    Q_OBJECT

public:
    plotdfa2(QWidget *parent = nullptr);
    ~plotdfa2();

private slots:
    void makePlot();

private:
    Ui::plotdfa2 *ui;
};
#endif // PLOTDFA2_H
