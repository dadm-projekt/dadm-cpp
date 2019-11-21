#include "window.h"
#include "ui_window.h"

Window::Window(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
}

Window::~Window()
{
    delete ui;
}
