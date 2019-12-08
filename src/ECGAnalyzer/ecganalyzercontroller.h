#ifndef ECGANALYZERCONTROLLER_H
#define ECGANALYZERCONTROLLER_H


// #include <--- naglowki klas modulow

#include <QObject>

class ECGAnalyzerController : public QObject
{
    Q_OBJECT
public:
    explicit ECGAnalyzerController(QObject *parent = 0);
    ~ECGAnalyzerController();

signals:

public slots:
    void dataLoaded(); // polaczony z sygnalem z dataloader, reaguje na zaladowanie pliku
};

#endif // ECGANALYZERCONTROLLER_H
