#ifndef APPTABBAR_H
#define APPTABBAR_H

#include <QTabBar>
#include <QStylePainter>
#include <QStyleOptionTab>

class AppTabBar : public QTabBar
{
public:
    AppTabBar();
    AppTabBar(int tabWidth, int tabHeight);
    AppTabBar(QSize tabSize);
    AppTabBar(QWidget *parent);
    AppTabBar(QWidget *parent, int tabWidth, int tabHeight);
    AppTabBar(QWidget *parent, QSize tabSize);
    QSize tabSizeHint(int index) const override;
    ~AppTabBar();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int width, height;
};

#endif // APPTABBAR_H
