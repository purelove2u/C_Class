#include <iostream>

using namespace std;

void main()
{
	//int a, b, MAX, MIN;
	//cout << "첫번째 숫자를 입력하세요 : ";
	//cin >> a;
	//cout << "두번째 숫자를 입력하세요 : ";
	//cin >> b;
	//cout << "a= " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "이(가) 더 크다" << endl	// ? 만족하면
	//	: cout << b << "(이)가 더 크다" << endl;	// : 만족하지 않으면

	//int i, j, k, MAX, MIN;
	//cout << "숫자 3개를 입력하세요 : ";
	//cin >> i >> j >> k;
	//MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "MAX = " << MAX << endl;
	//cout << "MIN = " << MIN << endl;

	int n, n1, n2, n3, n4, n5, n6;
	cout << "다섯자리 수를 입력하세요 : ";
	cin >> n;
	cout << n << "은" << endl;
	n1 = n / 10000;
	n2 = (n - (n1 * 10000)) / 5000;
	n3 = (n - (n1 * 10000) - (n2 * 5000)) / 1000;
	n4 = (n - (n1 * 10000) - (n2 * 5000) - (n3 * 1000)) / 500;
	n5 = (n - (n1 * 10000) - (n2 * 5000) - (n3 * 1000) - (n4 * 500)) / 100;
	n6 = (n - (n1 * 10000) - (n2 * 5000) - (n3 * 1000) - (n4 * 500) - (n5 * 100)) / 10;
	cout << "만원짜리 : " << n1 << "개" << endl;
	cout << "오천원짜리 : " << n2 << "개" << endl;
	cout << "천원짜리 : " << n3 << "개" << endl;
	cout << "오백원짜리 : " << n4 << "개" << endl;
	cout << "백원짜리 : " << n5 << "개" << endl;
	cout << "십원짜리 : "<< n6 << "개" << endl;

}
