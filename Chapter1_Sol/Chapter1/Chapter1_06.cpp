#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	//int kor, eng, tot, mok;
	//double avg;
	//cout << "국어점수 : ";
	//cin >> kor;
	//cout << "영어점수 : ";
	//cin >> eng;

	//tot = kor + eng;
	//avg = tot / 2.0;
	//mok = avg / 10;

	//switch (mok)
	//{
	//case 10:
	//	cout << "학점 A+";
	//	break;
	//case 9:
	//	cout << "학점 A";
	//	break;
	//case 8:
	//	cout << "학점 B";
	//	break;
	//case 7:
	//	cout << "학점 C";
	//	break;
	//case 6:
	//	cout << "학점 D";
	//	break;
	//default:
	//	cout << "학점 F";
	//	break;
	//}

	//int a, b;
	//char op;
	//cout << "두 수를 입력하세요 : ";
	//cin >> a >> b;
	//cout << "연산자를 입력하세요(+, -, *, /, %) : ";
	//cin >> op;

	//switch (op)
	//{
	//case '+':
	//	cout << "a + b = " << a + b;
	//	break;
	//case '-':
	//	cout << "a - b = " << a - b;
	//	break;
	//case '*':
	//	cout << "a * b = " << a * b;
	//	break;
	//case '/':
	//	cout << "a / b = " << a / b;
	//	break;
	//case '%':
	//	cout << "a % b = " << a % b;
	//	break;
	//default:
	//	cout << "잘못된 연산자를 입력하였습니다.";
	//	break;
	//}

	//int year, op;
	//cout << "연도를 입력하세요 : ";
	//cin >> year;
	//op = year % 4 == 0 && (!(year % 100 == 0) || year % 400) == 0;

	//switch (op)
	//{
	//	case 1:
	//		cout << year << "년은 윤년입니다.";
	//		break;
	//	case 0:
	//		cout << year << "년은 윤년이 아닙니다.";
	//		break;
	//	default:
	//		break;
	//}


	//int han;
	//han = 1;
	//while (han < 5)
	//{
	//	cout << "Good" << endl;
	//	han++;
	//}

	//int n, sum;
	//n = 1;
	//sum = 0;
	//while (n <= 100)
	//{
	//	sum = sum + n;
	//	n++;
	//}
	//cout << "1 - 100까지의 합 : " << sum;

	//int i, sum = 0;
	//i = 1;
	//do
	//{
	//	sum += i;
	//	i++;
	//} while (i <= 100);
	//	cout << "do ~ while = :" << sum << endl;


	//int i, sum = 0;
	//i = 1;
	//for (i = 1; i <= 100; i++) 
	//	sum += i;
	//cout << "for : " << sum << endl;
	//


	//#include <iomanip.h> 사용한 구문
	//int a, b;
	//cout << "다중 for문" << endl;
	//for (a = 1; a <= 2; a++)
	//	for (b = 1; b <= 3; b++)
	//		cout << "a= " << a << setw(5) << "b= " << b << endl;
	//cout << "끝";

	//int a, b;
	//for (int a = 1; a <= 9; a++)
	//	for (int b = 1; b <= 9; b++)
	//		cout << a << " X " << b << " = " << a * b << endl;
	
	//int a, b;
	//cout << "원하는 단을 입력하세요 : ";
	//cin >> a;
	//for (b = 1; b <= 9; b++)
	//	cout << a << " X " << b << " = " << a * b << endl;

	
	//char num;
	//while (1)
	//{
	//	cout << "문자를 입력하세요 : ";
	//	cin >> num;
	//	if (num >= 'A' && num <= 'Z') //65~92
	//	{
	//		cout << "정상입력입니다." << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "잘못 입력하셨습니다. 대문자를 입력하세요." << endl;
	//		continue;
	//	}
	//}


	//int n;
	//while (1)
	//{
	//	cout << "숫자를 입력하세요 : ";
	//	cin >> n;
	//	if (n == EOF)	// -1
	//	{
	//		cout << "종료됩니다." << endl;
	//		break;
	//	}
	//	else
	//		continue;
	//}


	//int a, b;
	//for (int a = 1; a <= 9; a++) 
	//{
	//	for (int b = 2; b <= 9; b++)
	//	{
	//		cout << b << "X" << a << "=" << setw(2) << b * a << "  ";
	//	}
	//	cout << endl;
	//}


	/*int asum = 0, bsum = 0, i = 0, sw = 0;
	while(i < 100){
		i = i + 1;
		if (sw == 0)
		{
			asum = asum + i;
			sw = 1;
		}
		else if(sw == 1)
		{	
			bsum = bsum + i;
			sw = 0;
		}
	} 
	cout << "홀수의 합 : " << asum << endl;
	cout << "짝수의 합 : " << bsum << endl;
*/

	int sum = 0, i = 0, sw = 1;
	while (i < 100) {
		i = i + 1;
		if (sw == 1)
		{
			sum = sum + i;
			sw = -1;
		}
		else if (sw == -1)
		{
			sum = sum - i;
			sw = 1;
		}
	}
	cout << "혼합 연산의 합 : " << sum << endl;
}






