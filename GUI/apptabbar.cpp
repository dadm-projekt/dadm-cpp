#include "apptabbar.h"

AppTabBar::AppTabBar() : QTabBar(),
width(300),
height(415)
{

}

AppTabBar::AppTabBar(int tabWidth, int tabHeight) : QTabBar(),
width(tabWidth),
height(tabHeight)
{

}

AppTabBar::AppTabBar(QSize tabSize) : QTabBar(),
width(tabSize.width()),
height(tabSize.height())
{

}

AppTabBar::AppTabBar(QWidget *parent) : QTabBar(parent),
width(300),
height(415)
{

}

AppTabBar::AppTabBar(QWidget *parent, int tabWidth, int tabHeight) : QTabBar(parent),
width(tabWidth),
height(tabHeight)
{

}

AppTabBar::AppTabBar(QWidget *parent, QSize tabSize) : QTabBar(parent),
width(tabSize.width()),
height(tabSize.height())
{

}

AppTabBar::~AppTabBar()
{

}

QSize AppTabBar::tabSizeHint(int index) const
{
    QSize s = QTabBar::tabSizeHint(index);
    s.setWidth(width);
    s.setHeight(height);
    s.transpose();
    return s;
}

void AppTabBar::paintEvent(QPaintEvent *event)
{
    QStylePainter painter(this);
    QStyleOptionTab opt;

    for (int i = 0; i < this->count(); i++) {
        initStyleOption(&opt, i);
        painter.drawControl(QStyle::CE_TabBarTabShape, opt);
        painter.save();

        QSize s = opt.rect.size();
        s.transpose();
        QRect r(QPoint(), s);
        r.moveCenter(opt.rect.center());
        opt.rect = r;

        QPoint c = tabRect(i).center();
        painter.translate(c);
        painter.rotate(90);
        painter.translate(-c);
        painter.drawControl(QStyle::CE_TabBarTabLabel, opt);
        painter.restore();
    }

    QWidget::paintEvent(event);
}

