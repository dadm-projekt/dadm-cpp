#ifndef VIEWMODULEHRV1_H
#define VIEWMODULEHRV1_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleHrv1 : public ViewModule
{
    Q_OBJECT
    public:

        explicit ViewModuleHrv1();
        ~ViewModuleHrv1();

signals:

public slots:
    void onButtonClicked();
    void visualiseResults();

};

#endif // VIEWMODULEHRV1_H

