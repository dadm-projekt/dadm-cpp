#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_pushButton_clicked();
    //sloty np on_pushButton_clicked(); dla przycisku 'zaladuj dane' itp
    void on_pushButton_2_clicked();
    void on_tableWidget_3_cellActivated(int row, int column);
    void on_comboBox_2_activated(const QString &arg1);
    void on_comboBox_3_activated(const QString &arg2);
};

#endif // MAINWINDOW_H
