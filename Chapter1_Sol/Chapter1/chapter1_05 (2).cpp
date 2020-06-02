#include <iostream>

using namespace std;

void main()
{
	////짝수
	//int n;
	//cout << "숫자를 입력하세요 : ";
	//cin >> n;
	//if (n % 2 == 0)
	//	cout << n << " 은 짝수입니다." << endl;
	//else
	//	cout << n << "은 홀수 입니다." << endl;

	////10의 배수
	//int dat;
	//cout << "숫자를 입력하세요 : ";
	//cin >> dat;
	//if (dat % 10 == 0)
	//	cout << dat << ": 10의 배수 입니다." << endl;
	//else
	//	cout << dat << ": 10의 배수가 아닙니다." << endl;

	//int a;
	//cout << "숫자를 입력하세요 : ";
	//cin >> a;
	//if (a > 10)
	//	cout << a << ": 10보다 큰 수 입니다." << endl;
	//else
	//	cout << a << ": 10보다 작은 수 입니다." << endl;


	/*int num1, num2;
	cout << "첫번째 수를 입력 : ";
	cin >> num1;
	cout << "두번쩨 수를 입력 : ";
	cin >> num2;
	cout << "두 수의 비교 분석 결과는 : ";

	if (num1 >= num2)
	{
		if (num1 == num2)
			cout << num1 << "과 " << num2 << " 은(는) 같은 수 입니다." << endl;
		else 
			cout << num1 << "은 " << num2 << " 보다 큰 수 입니다." << endl;
	}
	else
		cout << num1 << "(는)이 " << num2 << " 보다 작은 수 입니다." << endl;
*/

	/*int num, num2, num3;
	cout << "숫자를 입력하세요 : ";
	cin >> num;
	num2 = 5 - (num % 5); 
	num3 = num % 5;

	if (num % 5 == 0) {
		cout << "5의 배수 입니다";
	}
	else {
		cout << num << " 는(이) 5의 배수가 되려면" << num2 << " 만큼 필요!!" << endl;
		cout << " 또는 " << num3 << " 만큼 버려야 합니다!!" << endl;
	}*/


	//char ch;
	//cout << "문자를 입력하세요 : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z') //65~94
	//	cout << "Upper case" << endl;
	//else if (ch >= 'a'&&ch <= 'z')
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;


	int kor, eng, tot;
	double avg;
	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 :";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;

	    if (avg >= 90)
	        cout << "학점은 : " << "A " << "입니다." << endl;
		else if (avg >= 80)
			cout << "학점은 : " << "B " << "입니다." << endl;
		else if (avg >= 70)
			cout << "학점은 : " << "C " << "입니다." << endl;
		else if (avg >= 60)
			cout << "학점은 : " << "D " << "입니다." << endl;
		else
			cout << "학점은 : " << "F " << "입니다." << endl;
}

