#ifndef hrvhisto_H
#define hrvhisto_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class hrvhisto; }
QT_END_NAMESPACE

class hrvhisto : public QMainWindow
{
    Q_OBJECT

public:
    hrvhisto(QWidget *parent = nullptr);
    ~hrvhisto();

private slots:
    void makePlot();

private:
    Ui::hrvhisto *ui;
};
#endif // hrvhisto_H
