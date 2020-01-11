#include "apptabcontrol.h"

AppTabControl::AppTabControl()
{

}

AppTabControl::AppTabControl(QWidget *parent) : QTabWidget(parent)
{
    this->setTabBar(new AppTabBar(parent, tabWidth, tabHeight));
    this->setTabPosition(QTabWidget::West);
}

AppTabControl::AppTabControl(QWidget *parent, int width, int height) : QTabWidget(parent),
tabWidth(width),
tabHeight(height)
{
    this->setTabBar(new AppTabBar(parent, tabWidth, tabHeight));
    this->setTabPosition(QTabWidget::West);
}

AppTabControl::AppTabControl(QWidget *parent, QSize size) : QTabWidget(parent),
tabSize(size)
{
    this->setTabBar(new AppTabBar(parent, tabSize));
    this->setTabPosition(QTabWidget::West);
}

void AppTabControl::setTabControlSize(int width, int height)
{
    tabWidth = width;
    tabHeight = height;
}

void AppTabControl::setTabControlSize(QSize size)
{
    tabSize = size;
}

AppTabControl::~AppTabControl()
{

}
