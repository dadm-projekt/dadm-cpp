#ifndef TACHOGRAM_H
#define TACHOGRAM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tachogram; }
QT_END_NAMESPACE

class tachogram : public QMainWindow
{
    Q_OBJECT

public:
    QList<double> inputRPeaks; // rpeaks
    tachogram(QWidget *parent = nullptr);
    ~tachogram();

private slots:
    void makePlot();

private:
    Ui::tachogram *ui;
};
#endif // TACHOGRAM_H
