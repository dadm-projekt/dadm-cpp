#ifndef VIEWMODULEHRV2_H
#define VIEWMODULEHRV2_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleHrv2 : public ViewModule
{
    Q_OBJECT
    public:

        explicit ViewModuleHrv2();
        ~ViewModuleHrv2();

signals:

public slots:
    void onButtonClicked();
    void visualiseResults();
};

#endif // VIEWMODULEHRV2_H

