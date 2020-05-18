#include <iostream>

using namespace std;

void main()
{
	int a, b, MAX, MIN;
	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요 : ";
	cin >> b;
	cout << "a= " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "이(가) 더 크다" << endl	// ? 만족하면
		  : cout << b << "(이)가 더 크다" << endl;	// : 만족하지 않으면
/*
	int i, j, k, MAX, MIN;
	cout << "숫자 3개를 입력하세요 : ";
	cin >> i >> j >> k;
	MAX = ;
	MIN = ;
	cout << "MAX = " << MAX << endl;
	cout << "MIN = " << MIN << endl;
*/
}
