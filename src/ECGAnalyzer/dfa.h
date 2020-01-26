#ifndef DFA_H
#define DFA_H
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <numeric>
#include "Eigen/Dense"
#include "modulehrv1.h"
class DFA : public Module
{
public:
    //input
    QList<double> y; //z modulehrv1
    int x; //tutaj wybieramy ile probek chcemy analizowac wybierane przez użytkownika
    //outputs
    QList<double> Wiz1;
    QList<double> Wiz2;

    QList<double> Wiz3;
    QList<double> Wiz4;

    QList<double> gui1;
    QList<double> gui2;

    QList<double> gui3;
    QList<double> gui4;

    double polyfit();
    double polyval();
    int main2();
};
#endif // DFA_H
