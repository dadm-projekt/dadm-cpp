#ifndef VIEWMODULEHRVDFA_H
#define VIEWMODULEHRVDFA_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleHrvDfa : public ViewModule
{
    Q_OBJECT
    public:
    explicit ViewModuleHrvDfa();
    ~ViewModuleHrvDfa();

signals:


public slots:
void onButtonClicked();
void visualiseResults();
};

#endif // VIEWMODULEHRVDFA_H
