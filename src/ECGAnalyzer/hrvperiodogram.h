#ifndef HRVPERIODOGRAM_H
#define HRVPERIODOGRAM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class hrvperiodogram; }
QT_END_NAMESPACE

class hrvperiodogram : public QMainWindow
{
    Q_OBJECT

public:
    hrvperiodogram(QWidget *parent = nullptr);
    ~hrvperiodogram();

private slots:
    void makePlot();

private:
    Ui::hrvperiodogram *ui;
};
#endif // HRVPERIODOGRAM_H
