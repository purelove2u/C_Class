#include <iostream>

using namespace std;

void main()
{
	/*int a, b;
	cout << "첫번째 숫자를 입력하세요 :";
	cin >> a;
	cout << "두번째 숫자를 입력하세요 :";
	cin >> b;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "이(가) 더 크다" << endl 
		   : cout << b << "(이)가 더 크다" << endl;*/

	//int i, j, k, MAX, MIN;
	//cout << "숫자 3개를 입력하세요 : ";
	//cin >> i >> j >> k;
	//MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "MAX= " << MAX << endl;
	//cout << "MIN= " << MIN << endl;

	//98860
		int n, n1, n2, n3, n4, n5,n6;
		cout << "다섯자리 수를 입력 하세요 : ";
		cin >> n;
		cout << n << " 원은" << endl;
		n1 = n / 10000; //9
		n = n - n1 * 10000; //8860
		n2 = n / 5000; //1 
		n = n % 5000; //3860
		n3 = n / 1000; //3
		n = n % 1000;//860
		n4 = n / 500;//1
		n = n % 500;//360
		n5 = n/100;//3
		n = n % 100;//60
		n6 = n /10;//6
		cout << "만원짜리 : " << n1 << "개" << endl;
		cout << "오천원짜리 : " << n2 << "개" << endl;
		cout << "천원짜리 : " << n3 << "개" << endl;
		cout << "오백원짜리 : " << n4 << "개" << endl;
		cout << "백원짜리 : " << n5 << "개 입니다." << endl;
		cout << "십원짜리 : " << n6 << "개 입니다." << endl;
}

