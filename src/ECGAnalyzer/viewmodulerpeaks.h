#ifndef VIEWMODULERPEAKS_H
#define VIEWMODULERPEAKS_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleRPeaks : public ViewModule
{
    Q_OBJECT
    public:
        explicit ViewModuleRPeaks();
        ~ViewModuleRPeaks();

signals:

public slots:
    void onButtonClicked();
    void onFilterChange();
    void visualiseResults();
};

#endif // VIEWMODULERPEAKS_H

