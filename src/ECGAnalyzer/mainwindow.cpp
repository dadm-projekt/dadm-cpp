#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
   // ui->label->
}

void MainWindow::on_pushButton_2_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    QMessageBox::information(this, "..", file_name);
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    printf("Halko");
}

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
    QMessageBox::information(this, "..", arg1);
}

void MainWindow::on_comboBox_3_activated(int index)
{
    QMessageBox::information(this, "..", index);
}
