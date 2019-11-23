#ifndef VIEWMODULE_H
#define VIEWMODULE_H

#include <QWidget>

class ViewModule : public QWidget
{
    Q_OBJECT
public:
    explicit ViewModule(QWidget *parent = 0);
    virtual ~ViewModule();

signals:

public slots:
    virtual void onButtonClicked() = 0;
    virtual void visualiseResults() = 0;
};

#endif // VIEWMODULE_H
