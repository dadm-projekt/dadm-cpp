/********************************************************************************
** Form generated from reading UI file 'ecg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECG_H
#define UI_ECG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ECG
{
public:
    QWidget *centralwidget;
    QWidget *ecgplot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ECG)
    {
        if (ECG->objectName().isEmpty())
            ECG->setObjectName(QString::fromUtf8("ECG"));
        ECG->resize(800, 600);
        centralwidget = new QWidget(ECG);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ecgplot = new QWidget(centralwidget);
        ecgplot->setObjectName(QString::fromUtf8("ecgplot"));
        ecgplot->setGeometry(QRect(100, 100, 631, 421));
        ECG->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ECG);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ECG->setMenuBar(menubar);
        statusbar = new QStatusBar(ECG);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ECG->setStatusBar(statusbar);

        retranslateUi(ECG);

        QMetaObject::connectSlotsByName(ECG);
    } // setupUi

    void retranslateUi(QMainWindow *ECG)
    {
        ECG->setWindowTitle(QCoreApplication::translate("ECG", "ECG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECG: public Ui_ECG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECG_H
