#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QDebug>
#include <QVector>
#include <modulebaseline.h>
#include <modulehrv1.h>
#include "datafile.h"
#include "modulerpeaks.h"
#include "modulehrv2.h"
#include "modulewaves.h"
#include "modulestsegment.h"

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
    filename = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    DataFile *file = new DataFile;
    data = file->openFile(filename);
    qDebug() << data;
}

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
}

void MainWindow::on_comboBox_3_activated(const QString &arg2)
{
//    ModuleHrv1 hrv1();
}

void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "Frequency" << filename;
}

void MainWindow::on_tableWidget_3_cellActivated(int row, int column)
{
    qDebug() << "Frequency" << row;
    qDebug() << "Frequency" << column;
}

void MainWindow::on_baseline_Start_clicked()
{
//    ModuleBaseline *baseline = new ModuleBaseline(data);
//    baseline->AnalyzeSignal();

}
void MainWindow::on_rPeaks_Start_clicked()
{
    ModuleRPeaks *rPeaks = new ModuleRPeaks(data);
    rPeaks->AnalyzeSignal();
    RPeaksData = rPeaks->getoutputData();
}

void MainWindow::on_HRV1_Start_clicked()
{
    ModuleHrv1 *hrv = new ModuleHrv1(RPeaksData);
    hrv->AnalyzeSignal();

}

void MainWindow::on_HRV2_Start_clicked()
{
    ModuleHrv2 *hrv2 = new ModuleHrv2(RPeaksData);
    hrv2->AnalyzeSignal();
}

void MainWindow::on_Waves_Start_clicked()
{
    ModuleWaves *waves = new ModuleWaves(data, RPeaksData);
    waves->AnalyzeSignal();
}



void MainWindow::on_STSegment_Start_clicked()
{
    ModuleStSegment *stSegment = new ModuleStSegment();
    stSegment->AnalyzeSignal();
}

void MainWindow::on_DFA_Start_clicked()
{
    ModuleStSegment *dfa = new ModuleStSegment();
    dfa->AnalyzeSignal();
}
