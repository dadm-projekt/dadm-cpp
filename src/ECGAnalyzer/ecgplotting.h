#ifndef ECGPLOTTING_H
#define ECGPLOTTING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ecgplotting; }
QT_END_NAMESPACE

class ecgplotting : public QMainWindow
{
    Q_OBJECT

public:
    ecgplotting(QWidget *parent = nullptr);
    ~ecgplotting();

private slots:
    void makePlot();

private:
    Ui::ecgplotting *ui;
};
#endif // ECGPLOTTING_H
