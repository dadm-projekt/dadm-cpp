#ifndef APPTABCONTROL_H
#define APPTABCONTROL_H

#include <QTabWidget>
#include <QTabBar>
#include <QPalette>
#include <QPainter>
#include <QDebug>
#include "apptabbar.h"

class AppTabControl : public QTabWidget
{
public:
    AppTabControl();
    AppTabControl(QWidget *parent);
    AppTabControl(QWidget *parent, int width, int height);
    AppTabControl(QWidget *parent, QSize size);
    void setTabControlSize(int width, int height);
    void setTabControlSize(QSize tabSize);
    ~AppTabControl();

private:
    int tabWidth, tabHeight;
    QSize tabSize;
};

#endif // APPTABCONTROL_H
