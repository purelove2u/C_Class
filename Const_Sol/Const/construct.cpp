#include <iostream>
using namespace std;

class Dataprocess {
public:
	Dataprocess() {
		digit1 = 10;
	}
	int getData_info() const;
	void setData_info(int a);
private:
	int digit1;
};

int Dataprocess::getData_info() const {
	return digit1;
}

void Dataprocess::setData_info(int a) {
	digit1 = a;
}

int main() {
	Dataprocess dsample;
	dsample.setData_info(5);
	cout << "계산결과" << dsample.getData_info() << endl;
}