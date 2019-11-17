#ifndef DATA_LOADER
#define DATA_LOADER

#include <QThread>

class DataLoader : public QThread{

    Q_OBJECT;

public:
    DataLoader();
    //void run();
};


#endif // DATA_LOADER

