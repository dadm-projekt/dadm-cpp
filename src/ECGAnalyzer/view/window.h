#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QMainWindow *parent = 0);
    ~Window();

private:
    Ui::Window *ui;
};

#endif // WINDOW_H
