#ifndef PLOTDFA1_H
#define PLOTDFA1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class plotdfa1; }
QT_END_NAMESPACE

class plotdfa1 : public QMainWindow
{
    Q_OBJECT

public:
    plotdfa1(QWidget *parent = nullptr);
    ~plotdfa1();

private slots:
    void makePlot1();

private:
    Ui::plotdfa1 *ui;
};
#endif // PLOTDFA1_H
