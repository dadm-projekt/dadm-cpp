#ifndef VIEWMODULEWAVES_H
#define VIEWMODULEWAVES_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleWaves : public ViewModule
{
    Q_OBJECT
public:
    explicit ViewModuleWaves();
    ~ViewModuleWaves();

signals:

public slots:
void onButtonClicked();
void visualiseResults();
};

#endif // VIEWMODULEWAVES_H


