#include "dfa.h"

// Constructor
DFA::DFA(QList<double> y, int x) {
    this->y = y;
    this->x = x;
}

// Getters
QList<double> DFA::getY() {
    return this->y;
}

int DFA::getX() {
    return this->x;
}

QList<double> DFA::getWiz1() {
    return this->Wiz1;
}

QList<double> DFA::getWiz2() {
    return this->Wiz2;
}

QList<double> DFA::getWiz3() {
    return this->Wiz3;
}

QList<double> DFA::getWiz4() {
    return this->Wiz4;
}

QList<double> DFA::getGui1() {
    return this->gui1;
}

QList<double> DFA::getGui2() {
    return this->gui2;
}

QList<double> DFA::getGui3() {
    return this->gui3;
}

QList<double> DFA::getGui4() {
    return this->gui4;
}

// Setters
void DFA::setY(QList<double> _y) {
    this->y = _y;
}

void DFA::setX(int _x) {
    this->x = _x;
}

void DFA::setWiz1(QList<double> _Wiz1) {
    this->Wiz1 = _Wiz1;
}

void DFA::setWiz2(QList<double> _Wiz2) {
    this->Wiz2 = _Wiz2;
}

void DFA::setWiz3(QList<double> _Wiz3) {
    this->Wiz3 = _Wiz3;
}

void DFA::setWiz4(QList<double> _Wiz4) {
    this->Wiz4 = _Wiz4;
}

void DFA::setGui1(QList<double> _gui1) {
    this->gui1 = _gui1;
}

void DFA::setGui2(QList<double> _gui2) {
    this->gui2 = _gui2;
}

void DFA::setGui3(QList<double> _gui3) {
    this->gui3 = _gui3;
}

void DFA::setGui4(QList<double> _gui4) {
    this->gui4 = _gui4;
}

//double &DFA(vector<double> data, double &win_length, int order);
double &analyze(std::vector<double> data, double &win_length, int order) {
    double n, N1;
    int N;
    N = data.size();
    n = floor(N / win_length);
    N1 = n * win_length;

    std::vector<double> y(N1);
    std::vector<double> Yn;
    std::vector<double> v(order + 1, 0);
    std::vector<std::vector<double>> fitcoef(N, v);

    Eigen::MatrixXd fitcoef2(N, order + 1);

    for (int i = 0; i < N; i++) {
        fitcoef2.row(i) = Eigen::VectorXd::Map(&fitcoef[i][0], fitcoef[i].size());
    }

    int suma;
    suma = 0;

    for (int i = 0; i < N1; i++) {
        suma = suma + data[i];
    }

    double average;
    average = suma / N1;
    double suma2;

    for (int i = 1; i <= N1; i++) {
        suma2 = 0;
        for (int j = 0; j < i; j++) {
            suma2 = suma2 + data[j] - average;
        }
        y[i - 1] = suma2;
    }

    std::vector<double> P1(win_length);

    for (int i = 1; i <= win_length; i++) {
        P1[i - 1] = i;
    }

    Eigen::VectorXd Poli1 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(P1.data(), P1.size());
    std::vector<double> P2(win_length);

    for (int i = 1; i <= n; i++) {
        int x1 = (i - 1) * win_length;
        int x2 = i * win_length - 1;
        int x3 = 0;

        for (int j = x1; j <= x2; j++) {
            P2[x3] = y[j];
            x3 = x3 + 1;
        }

        Eigen::VectorXd Poli2 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(P2.data(), P2.size());
        fitcoef2 = polyfit(Poli1, Poli2, order);

        for (int x = 1; x <= win_length; x += 1) {
            Yn.push_back(polyeval(fitcoef2, x));
        }
    }

    if (Yn.size() > 0) {
        for (unsigned int x = 0; x < Yn.size(); x += 1) {
        }
    }

    std::vector<double> suma1;

    for (int k = 0; k < N1; k++) {
        suma1.push_back((y[k] - Yn[k]) * (y[k] - Yn[k]));
    }

    double sum = 0;

    for (unsigned int i = 0; i < suma1.size(); i++) {
        sum += suma1[i];
    }

    double output;
    output = sqrt(sum / N1);

    return output;
}

void DFA::prepare() {
    QList<double> y = this->getY();
    int x = this->getX();

    std::vector<double> vec;

    for (int i = 0; i < y.size(); i++) {
        vec.push_back(y.at(i));
    }

    std::vector<double> tk(x);

    double tmp;
    tmp = 0;

    for (int i = 0; i < x; i++) {
        tk[i] = (vec[i] + tmp);
        tmp = tk[i];
    }

    for (int i = 0; i < x; i++) {
        vec[i] = vec[i] * 1000;
    }

    for (int i = 0; i < x; i++) {
        tk[i] = tk[i] / 3600;
    }

    std::vector<double> delta_m = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64};
    int N1;
    N1 = delta_m.size();
    std::vector<double> Fn(N1);

    for (int i = 0; i < N1; i++) {
        Fn[i] = analyze(vec, delta_m[i], 1);
    }

    std::vector<double> a1(4);
    std::vector<double> a2(4);
    std::vector<double> A1(2);

    for (int i = 0; i <= 3; i++) {
        a1[i] = log10(delta_m[i]);
    }

    Eigen::VectorXd a11 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a1.data(), a1.size());

    for (int i = 0; i <= 3; i++) {
        a2[i] = log10(Fn[i]);
    }

    this->setWiz1(QList<double>::fromVector(QVector<double>(a1.begin(), a1.end())));
    this->setWiz2(QList<double>::fromVector(QVector<double>(a2.begin(), a2.end())));

    Eigen::VectorXd a22 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a2.data(), a2.size());

    std::vector<double> A11(2, 0);
    std::vector<std::vector<double>> fitting(2, A11);

    Eigen::MatrixXd fitting2(2, 2);

    for (int i = 0; i < 2; i++) {
        fitting2.row(i) = Eigen::VectorXd::Map(&fitting[i][0], fitting[i].size());
    }

    fitting2 = polyfit(a11, a22, 1);
    /////////////////////////////////////////////////////////////////////////////////////////////
    double alpha1small, alpha2small;
    alpha1small = fitting2(1);
    alpha2small = fitting2(0);

    QList<double> gui1 = QList<double>();
    gui1.append(alpha1small);

    this->setGui1(gui1);

    QList<double> gui2 = QList<double>();
    gui2.append(alpha2small);

    this->setGui2(gui2);

    /////////////////////////////////////////////////////////////////////////////////////////////
    std::vector<double> a3(13);
    std::vector<double> a4(13);
    std::vector<double> A2(2);

    for (int i = 0; i <= 12; i++) {
        a3[i] = log10(delta_m[i + 3]);
    }

    Eigen::VectorXd a33 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a3.data(), a3.size());

    for (int i = 0; i <= 12; i++) {
        a4[i] = log10(Fn[i + 3]);
    }
    this->setWiz3(QList<double>::fromVector(QVector<double>(a3.begin(), a3.end())));
    this->setWiz4(QList<double>::fromVector(QVector<double>(a4.begin(), a4.end())));

    Eigen::VectorXd a44 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a4.data(), a4.size());

    std::vector<double> A22(2, 0);
    std::vector<std::vector<double>> fitting3(2, A11);

    Eigen::MatrixXd fitting4(2, 2);

    for (int i = 0; i < 2; i++) {
        fitting4.row(i) = Eigen::VectorXd::Map(&fitting3[i][0], fitting3[i].size());
    }

    fitting4 = polyfit(a33, a44, 1);
    /////////////////////////////////////////////////////////////////////////////////////////////
    double alpha1big, alpha2big;
    alpha1big = fitting4(1);
    alpha2big = fitting4(0);

    QList<double> gui3 = QList<double>();
    gui3.append(alpha1big);

    this->setGui3(gui3);

    QList<double> gui4 = QList<double>();
    gui4.append(alpha2big);

    this->setGui4(gui4);
}

