#ifndef VIEWMODULESTSEGMENT_H
#define VIEWMODULESTSEGMENT_H

#include <QWidget>
#include "viewmodule.h"

class ViewModuleStSegment : public ViewModule
{
    Q_OBJECT
public:
    explicit ViewModuleStSegment();
    ~ViewModuleStSegment();

signals:

public slots:
void onButtonClicked();
void visualiseResults();
};

#endif // VIEWMODULESTSEGMENT_H


