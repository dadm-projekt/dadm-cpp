/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLabel *label_5;
    QGraphicsView *graphicsView_8;
    QWidget *tab2;
    QWidget *tab3;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QGraphicsView *graphicsView_6;
    QGraphicsView *graphicsView_7;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *tab4;
    QTabWidget *tabWidget_3;
    QWidget *tab_3;
    QGraphicsView *graphicsView_9;
    QGraphicsView *graphicsView_10;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tab_4;
    QTableWidget *tableWidget_3;
    QListView *listView;
    QWidget *tab5;
    QGraphicsView *graphicsView_11;
    QTableWidget *tableWidget_4;
    QWidget *tab6;
    QGraphicsView *graphicsView_4;
    QWidget *tab7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(858, 560);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 100, 801, 391));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        comboBox_2 = new QComboBox(tab1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(510, 50, 101, 22));
        QFont font;
        font.setPointSize(9);
        comboBox_2->setFont(font);
        comboBox_3 = new QComboBox(tab1);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(510, 140, 101, 22));
        comboBox_3->setFont(font);
        label_4 = new QLabel(tab1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 20, 91, 21));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_5 = new QLabel(tab1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 110, 111, 31));
        label_5->setFont(font1);
        graphicsView_8 = new QGraphicsView(tab1);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(50, 40, 361, 251));
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        tabWidget_2 = new QTabWidget(tab3);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 801, 371));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        graphicsView_6 = new QGraphicsView(tab);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(20, 50, 361, 251));
        graphicsView_7 = new QGraphicsView(tab);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(400, 50, 361, 251));
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 50, 211, 251));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->rowCount() < 6)
            tableWidget_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem13);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(390, 50, 256, 191));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 30, 47, 14));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 30, 71, 16));
        label_7->setFont(font2);
        tabWidget_2->addTab(tab_2, QString());
        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QString::fromUtf8("tab4"));
        tabWidget_3 = new QTabWidget(tab4);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 801, 371));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        graphicsView_9 = new QGraphicsView(tab_3);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(20, 60, 361, 251));
        graphicsView_10 = new QGraphicsView(tab_3);
        graphicsView_10->setObjectName(QString::fromUtf8("graphicsView_10"));
        graphicsView_10->setGeometry(QRect(410, 60, 361, 251));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 40, 71, 16));
        label_8->setFont(font2);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(560, 40, 71, 16));
        label_9->setFont(font2);
        tabWidget_3->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_3 = new QTableWidget(tab_4);
        if (tableWidget_3->rowCount() < 4)
            tableWidget_3->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem17);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(80, 90, 256, 131));
        listView = new QListView(tab_4);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(490, 80, 256, 192));
        tabWidget_3->addTab(tab_4, QString());
        tabWidget->addTab(tab4, QString());
        tab5 = new QWidget();
        tab5->setObjectName(QString::fromUtf8("tab5"));
        graphicsView_11 = new QGraphicsView(tab5);
        graphicsView_11->setObjectName(QString::fromUtf8("graphicsView_11"));
        graphicsView_11->setGeometry(QRect(30, 60, 361, 251));
        tableWidget_4 = new QTableWidget(tab5);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(490, 60, 256, 192));
        tabWidget->addTab(tab5, QString());
        tab6 = new QWidget();
        tab6->setObjectName(QString::fromUtf8("tab6"));
        graphicsView_4 = new QGraphicsView(tab6);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(180, 30, 351, 241));
        tabWidget->addTab(tab6, QString());
        tab7 = new QWidget();
        tab7->setObjectName(QString::fromUtf8("tab7"));
        tabWidget->addTab(tab7, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 21));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(true);
        label->setFont(font3);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 31, 21));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(true);
        label_2->setFont(font4);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 50, 31, 21));
        label_3->setFont(font4);
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 50, 62, 22));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(180, 50, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setValue(20);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 20, 111, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 20, 141, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 858, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Butterworth", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "ButterworthHP", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Blackmann", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Eliptic", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "100", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "150", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "200", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "250", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "360", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Filter type", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Sampel frequency", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("MainWindow", "ECG Baseline", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("MainWindow", "R_Peaks", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("MainWindow", "Plots", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "RR[ms]", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "SDNN[ms]", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "RMSSD[ms]", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "NN50[-]", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "pNN50[%]", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "SDANNsrstd[ms]", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "SDANNstdsr[ms]", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "SDSD[ms]", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Power[ms^2]", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "HV[ms^2]", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "LF[ms^2]", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "VLF[ms^2]", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "ULF[ms^2]", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "LF/HF[-]", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tables", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QCoreApplication::translate("MainWindow", "HRV 1", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Histogram", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Poincare", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Plots", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "HRV Index", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Nowy wiersz", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "SD1", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "SD2", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Table", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QCoreApplication::translate("MainWindow", "HRV 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab5), QCoreApplication::translate("MainWindow", "Waves", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab6), QCoreApplication::translate("MainWindow", "ST Segment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab7), QCoreApplication::translate("MainWindow", "HRV DFA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Patient", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sex", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "CHOOSE DATA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
