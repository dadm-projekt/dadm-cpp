#include "dfa.h"

using namespace std;


Eigen::VectorXd polyfit(const Eigen::VectorXd xvals,const Eigen::VectorXd yvals,const signed& order)
{
  assert(xvals.size() == yvals.size());
  assert(order >= 1 && order <= xvals.size() - 1);
  Eigen::MatrixXd A(xvals.size(), order + 1);

  for (int i = 0; i < xvals.size(); i++) {
    A(i, 0) = 1.0;
  }

  for (int j = 0; j < xvals.size(); j++) {
    for (int i = 0; i < order; i++) {
      A(j, i + 1) = A(j, i) * xvals(j);
    }
  }

  auto Q = A.householderQr();
  auto result = Q.solve(yvals);
  return result;
}



/////////////////////////////////////////////////////////////////////////////////////////////
// Evaluate a polynomial.
double polyeval(const Eigen::VectorXd coeffs, const int& x) {
  double result = 0.0;
  for (int i = 0; i < coeffs.size(); i++) {
    result += coeffs[i] * pow(x, i);
  }
  return result;
}

//double &DFA(vector<double> data, double &win_length, int order);
double &DFA(vector<double> data, double &win_length, int order) {
    double n, N1;
    int N;
    N = data.size();
    n = floor(N / win_length);
    N1 = n * win_length;
    vector<double> y(N1);
    vector<double> Yn;
    vector<double> v(order + 1, 0);
    vector<vector<double>> fitcoef(N, v);

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
    vector<double> P1(win_length);

    //cout << "win len" << win_length << endl;

    for (int i = 1; i <= win_length; i++) {

        P1[i - 1] = i;
    }

    Eigen::VectorXd Poli1 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(P1.data(), P1.size());
    vector<double> P2(win_length);
    for (int i = 1; i <= n; i++) {
        int x1 = (i - 1) * win_length;
        int x2 = i * win_length - 1;
        int x3 = 0;
        for (int j = x1; j <= x2; j++) {
            P2[x3] = y[j];
            x3 = x3 + 1;
            cout << P2[i-1];
        }

        Eigen::VectorXd Poli2 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(P2.data(), P2.size());
        fitcoef2 = polyfit(Poli1, Poli2, order);
        for (int x = 1; x <= win_length; x += 1) {
            //Yn.push_back(polyeval(fitcoef2, x));
        }

    }

    if (Yn.size() > 0) {
        for (unsigned int x = 0; x < Yn.size(); x += 1) {
        }
    }

    vector<double> suma1;
    for (int k = 0; k < N1; k++) {
        suma1.push_back((y[k] -Yn[k])*(y[k] -Yn[k]));
    }
    double sum = 0;
    for (unsigned int i=0; i<suma1.size(); i++){
        sum += suma1[i];
    }
    double output;
    output = sqrt(sum/N1);
    return output;
}


int main2() {
    ifstream fin("C:\\Users\\Daria AKIN\\Desktop\\LAB3\\nsr001.dat");
    double num;
    vector<double> vec;
    int x;
    //Tutaj mamy ile probek chcemy analizowac, gdzie max to jest max ilosc probek w sygnale, WEJ do GUI
    //Optymalnie ladnie wykresy wygladaja od 5000
    //jak damy za duzo probek do liczenia zajmie to okolo 10 min ale policzy
    //mam tu na mysli 100000 probek
    x = 5000;

    while (fin >> num) {
        vec.push_back(num);
    }

    for (int i = 1; i < 1000; i++) vec.push_back(i);

    vec.resize(x);
    //qliste y trzeba zamienic na wektor vec

    vector<double> tk(x);

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

    vector<double> delta_m = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64};
    int N1;
    N1 = delta_m.size();
    vector<double> Fn(N1);

    for (int i = 0; i < N1; i++) {
        Fn[i] = DFA(vec, delta_m[i], 1);
    }

    vector<double> a1(4);
    vector<double> a2(4);
    vector<double> A1(2);

    for (int i = 0; i <= 3; i++) {

        a1[i] = log10(delta_m[i]);
    }


    Eigen::VectorXd a11 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a1.data(), a1.size());
    for (int i = 0; i <= 3; i++) {

        a2[i] = log10(Fn[i]);
    }
    QList<double> Wiz1 = QList<double>::fromVector(QVector<double>(a1.begin(), a1.end()));
    QList<double> Wiz2 = QList<double>::fromVector(QVector<double>(a2.begin(), a2.end()));

    //DO WIZUALIZACJI
    //MALE OKNA
    /*plot(log10(delta_m(1:4)),log10(F_n(1:4)));
    title('4<=m<=16');
    xlabel('logdelta_m')
    ylabel('logFdelta_m')*/
    // tutaj a1 jest wektorem, ktory odpowiada log10(delta_m(1:4)) a a2 log10(F_n(1:4))
    Eigen::VectorXd a22 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a2.data(), a2.size());

    vector<double> A11(2, 0);
    vector<vector<double>> fitting(2, A11);

    Eigen::MatrixXd fitting2(2, 2);
    for (int i = 0; i < 2; i++) {
        fitting2.row(i) = Eigen::VectorXd::Map(&fitting[i][0], fitting[i].size());
    }
    fitting2 = polyfit(a11, a22, 1);
    /////////////////////////////////////////////////////////////////////////////////////////////
    double alpha1small,alpha2small;
    alpha1small = fitting2(1);
    alpha2small = fitting2(0);

    QList<double> gui1 = QList<double>();
    gui1.append(alpha1small);
    QList<double> gui2 = QList<double>();
    gui2.append(alpha2small);

    cout << "test" << gui1.at(0) << endl;
    cout << "test2" << gui2.at(0) << endl;

    //cout << alpha1small << endl;
    //cout << alpha2small << endl;
    //Tutaj mamy wartosci wspolczynnikow dla malych okien alpha1small i alpa2small, WYJ do GUI
/////////////////////////////////////////////////////////////////////////////////////////////
    vector<double> a3(13);
    vector<double> a4(13);
    vector<double> A2(2);

    for (int i = 0; i <= 12; i++) {

        a3[i] = log10(delta_m[i+3]);
    }

    Eigen::VectorXd a33 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a3.data(), a3.size());

    for (int i = 0; i <= 12; i++) {
        a4[i] = log10(Fn[i+3]);
    }
    QList<double> Wiz3 = QList<double>::fromVector(QVector<double>(a3.begin(), a3.end()));
    QList<double> Wiz4 = QList<double>::fromVector(QVector<double>(a4.begin(), a4.end()));
//DO WIZUALIZACJI
    //DUZE OKNA
    /*plot(log10(delta_m(4:end)),log10(F_n(4:end)));
    title('4<=m<=16');
    xlabel('16<=m<=64')
    ylabel('logFdelta_m')*/
    // tutaj a3 jest wektorem, ktory odpowiada log10(delta_m(4:end)) a a4 log10(F_n(4:end)))
    Eigen::VectorXd a44 = Eigen::Map<Eigen::VectorXd, Eigen::Unaligned>(a4.data(), a4.size());

    vector<double> A22(2, 0);
    vector<vector<double>> fitting3(2, A11);

    Eigen::MatrixXd fitting4(2, 2);
    for (int i = 0; i < 2; i++) {
        fitting4.row(i) = Eigen::VectorXd::Map(&fitting3[i][0], fitting3[i].size());
    }
    fitting4 = polyfit(a33, a44, 1);
    /////////////////////////////////////////////////////////////////////////////////////////////
    double alpha1big,alpha2big;
    alpha1big = fitting4(1);
    alpha2big = fitting4(0);
    QList<double> gui3 = QList<double>();
    gui3.append(alpha1big);
    QList<double> gui4 = QList<double>();
    gui4.append(alpha2big);
    cout << "test3" << gui3.at(0) << endl;
    cout << "test4" << gui4.at(0) << endl;

    //cout << alpha1big << endl;
    //cout << alpha2big << endl;
    //Tutaj mamy wartosci wspolczynnikow dla duzych okien alpha1big i alpa2big, WYJ do GUI
    /////////////////////////////////////////////////////////////////////////////////////////////
    system("pause");

}

