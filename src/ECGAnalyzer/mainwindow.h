#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString filename;
    QList<double> data;
    QList<double> RPeaksData;

private slots:
    void on_pushButton_clicked();
    //sloty np on_pushButton_clicked(); dla przycisku 'zaladuj dane' itp
    void on_pushButton_2_clicked();
    void on_tableWidget_3_cellActivated(int row, int column);
    void on_baseline_Start_clicked();
    void on_comboBox_2_activated(const QString &arg1);
    void on_comboBox_3_activated(const QString &arg2);
    void on_pushButton_3_clicked();
    void on_rPeaks_Start_clicked();
    void on_HRV1_Start_clicked();
    void on_HRV2_Start_clicked();
    void on_Waves_Start_clicked();
    void on_STSegment_Start_clicked();
    void on_DFA_Start_clicked();
};

#endif // MAINWINDOW_H
