#ifndef MODULE_H
#define MODULE_H

#include <QObject>

class Module : public QObject
{
    Q_OBJECT
public:

    QList<double> inputData;

    explicit Module(QObject *parent = 0);
    virtual ~Module();

    //virtual void AnalyzeSignal() = 0;
    virtual void setParams(double &) = 0;
};

#endif // MODULE_H
