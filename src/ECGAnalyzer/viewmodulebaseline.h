#ifndef VIEWMODULEBASELINE_H
#define VIEWMODULEBASELINE_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleBaseline : public ViewModule
{
    Q_OBJECT
public:
    explicit ViewModuleBaseline();
    ~ViewModuleBaseline();

signals:


public slots:
    void onButtonClicked();
    void onFilterChange();
    void visualiseResults();
};

#endif // VIEWMODULEBASELINE_H


//nalezy utworzyc UI dla modulow i podpiac je do plikow viewmodule
