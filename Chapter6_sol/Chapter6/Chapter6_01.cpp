#include <iostream>
using namespace std;

struct people
{
private:
		//구조체의 멤버변수
		string irum;
		int age;
		string job;
		int pay;

public:
		//동작정의(behavior)
		void init(string n, int a, string j, int p);
		void calc_pay();
};

void people::init(string n, int a, string j, int p)
{
	people::irum = n;
	people::age = a;
	people::job = j;
	people::pay = p - (p * 0.033);
}

void people::calc_pay()
{
	cout << "성 명 : " << people::irum << endl;
	cout << "나 이 : " << people::age << endl;
	cout << "직 업 : " << people::job << endl;
	cout << "실수령액 : " << people::pay << endl;
}

int main()
{
	//people p = { "홍길동", 30, "회사원", 3000000 };
	//people p2 = { "장길산", 40, "산적", 3500000 };
	people p;
	people p2;
	//c에서는 struct::p.irum p.age p.job p.pay 일일히 초기화해야함.

	p.init("홍길동", 30, "회사원", 3000000);
	p.calc_pay();
	cout << "-------------------------" << endl;

	p2.init("장길산", 40, "산적", 3500000);
	p2.calc_pay();
	return 1;
}