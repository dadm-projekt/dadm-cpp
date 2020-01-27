#ifndef DFA_H
#define DFA_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <numeric>
#include "Eigen/Dense"
#include "modulehrv1.h"
#include "polynomial_fitting.cpp"

class DFA : public Module {
public:

    // Constructor
    DFA(QList<double>, int);

    // Input
    QList<double> y; //z modulehrv1
    int x; //tutaj wybieramy ile probek chcemy analizowac wybierane przez użytkownika

    // Outputs
    QList<double> Wiz1;
    QList<double> Wiz2;
    QList<double> Wiz3;
    QList<double> Wiz4;

    QList<double> gui1;
    QList<double> gui2;
    QList<double> gui3;
    QList<double> gui4;
    //end of outputs

    void prepare();

    QList<double> getY();

    int getX();

    QList<double> getWiz1();

    QList<double> getWiz2();

    QList<double> getWiz3();

    QList<double> getWiz4();

    QList<double> getGui1();

    QList<double> getGui2();

    QList<double> getGui3();

    QList<double> getGui4();

    void setY(QList<double>);

    void setX(int);

    void setWiz1(QList<double>);

    void setWiz2(QList<double>);

    void setWiz3(QList<double>);

    void setWiz4(QList<double>);

    void setGui1(QList<double>);

    void setGui2(QList<double>);

    void setGui3(QList<double>);

    void setGui4(QList<double>);
};

#endif // DFA_H
