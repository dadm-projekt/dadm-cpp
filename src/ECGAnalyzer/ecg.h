#ifndef ECG_H
#define ECG_H

#include <QMainWindow>
#include <QObject>
#include "module.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ECG; }
QT_END_NAMESPACE

class ECG : public QMainWindow
{
    Q_OBJECT

public:
    QList<double> inputData; //z ecg_baseline
    QList<double> inputRPeaks; // rpeaks
    QList<double> inputQRS; //ecgwaves
    QList<double> inputWaves; //ecgwaves

    ECG(QWidget *parent = nullptr);
    ~ECG();

private slots:
    void makePlot();

private:
    Ui::ECG *ui;
};
#endif // ECG_H
