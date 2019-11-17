#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class R_PEAKS {
protected:
	int ecg;
public:
	void setData(int data);
	int getR_PEAKS();
};
void R_PEAKS::setData(int data) {
	ecg = data;
};
int R_PEAKS::getR_PEAKS() {
	return ecg = ecg + 1;
};

class HRV1 : public R_PEAKS {
public:
	int processed_data;
	//HRV1();
	double getHRV1();
};
double HRV1::getHRV1() {
	ecg = ecg + 2;
	return ecg;
};

class HRV3: public HRV1 {
public:
	int processed_data;
	//HRV1();
	double getHRV3();
};
double HRV3::getHRV3() {
	ecg = ecg + 2;
	return ecg;
};

int main() {
	R_PEAKS* R1;
	HRV1 hr;
	HRV3 hr3;
	R1 = &hr;
	
	R1->setData(1);
	R1->getR_PEAKS();
	cout << hr.getHRV1() << endl;
	hr=&hr3


	cout << hr3.getHRV3() << endl;
}
