#include "1.h"


void main()
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "국어점수 : ";
	cin >> kor;
	cout << "영어점수 : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;
	switch (mok)
	{
	case 10:
		cout << "학점은 : A+ 입니다" << endl;
		break;
	case 9:
		cout << "학점은 : A 입니다" << endl;
		break;
	case 8:
		cout << "학점은 : B 입니다" << endl;
		break;
	case 7:
		cout << "학점은 : C 입니다" << endl;
		break;
	case 6:
		cout << "학점은 : D 입니다" << endl;
		break;
	default:
		cout << "학점은 : F 입니다" << endl;
		break;*/

		//	int a, b;
		//	char op;
		//	cout << "두수를 입력하세요. ";
		//	cin >> a >> b;
		//	cout << "연산자를 입력하세요(+,-,*,/,%) : ";
		//	cin >> op;
		//
		//	switch (op)
		//	{
		//	case '+':
		//		cout << "두수의 합은" << a + b << " 입니다. ";
		//		break;
		//	case '-':
		//		cout << "두수의 차은 " << a - b << " 입니다. ";
		//		break;
		//	case '*':
		//		cout << "두수의 곱은 " << a * b << " 입니다. ";
		//		break;
		//	case '/':
		//		cout << "두수의 나누기는 " << a / b << " 입니다. ";
		//		break;
		//	case '%':
		//		cout << "두수의 나머지는 " << a % b << " 입니다. ";
		//		break;
		//	default:
		//		cout << "잘못된 연산자를 입력하셨습니다. 다시 입력하세요!" << endl;
		//		break;
		//	}
		//	cout << endl;
		//}

			//int year;
			//cout << "년도를 입력하세요 : ";
			//cin >> year;

			//if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
			//	cout << year << "는 윤년입니다. " << endl;
			//else
			//	cout << year << "는 평년입니다. " << endl;

			/*int han;
			han = 1;
			while (han < 5)
			{
				cout << "Good" << endl;
				han++;
			}*/

			//int i, sum = 0;
			//i = 0;
			//while (i < 100)
			//{
			//	i = i + 1;
			//	sum = sum + i;
			//}
			//cout << " while = : " << sum << endl;
			// ====================================================
			/*int i, sum = 0;
			i = 1;
			do
			{
				sum += i;
				i++;
			} while (i <= 100);
			cout << " do ~ while = :" << sum << endl;*/

			/*int i, sum = 0;
			i = 1;
			for (i = 1; i <= 100; i++)
				sum += i;
			cout << "for : " << sum << endl;
		 */

		 //int a, b;
		 //cout << "다중 for문" << endl;
		 //for (a = 1; a <= 2; a++)
		 //for (b = 1; b <= 3; b++)
		 //cout << "a = " << a << setw(5) << "b = " << b << endl;
		 //cout << "끝!!!";

		 //int i, j;

		 //for (int i = 2; i <= 9; i++)
		 //{
		 //	for (int j = 1; j <= 9; j++)
		 //		cout << i << "*" << j << "=" << i * j << endl;
		 //}

		 //int i, dan;
		 //cout << "원하는 단을 입력하세요: ";
		 //cin >> dan;
		 //for (i = 1; i <= 9; i++)
		 //cout << dan << "*" << i << "=" << dan * i << endl;

		 //char mun;
		 //while (1)
		 //{
		 //	cout << "문자를 입력하세요 : ";
		 //	cin >> mun;
		 //	if (mun >= 'A' && mun <= 'Z')// 65~92
		 //	{
		 //		cout << "정상입력입니다." << endl;
		 //		break;
		 //	}
		 //	else
		 //	{
		 //		cout << "잘못 입력하셨습니다. 대문자를 입력하세요" << endl;
		 //		continue;
		 //	}
		 //}

		 //int n;
		 //
		 //while (1)
		 //{
		 //	cout << "숫자를 입력하세여 : ";
		 //	cin >> n;
		 //
		 //	if (n == EOF) // -1
		 //	{
		 //		cout << "종료됩니다" << endl;
		 //		break;
		 //	}
		 //	else
		 //		continue;
		 //}

		 //int i, j;
		 //for (i = 1; i <= 9; i++)
		 //{
		 //	for (j = 2; j <= 9; j++)
		 //	{
		 //		cout << setw(4) << j << "*" << i << "=" << setw(2) << i * j;
		 //	}
		 //	cout << endl;
		 //}


	//void main()
	//{
	//	char mun, alp;
	//	int i;
	//	cout << "한 문자를 입력하세요 : ";
	//	while (1)
	//	{
	//		cin >> mun;
	//		if (mun >= 'A' && mun <= 'Z')
	//		{
	//			for (i = 1; i <= 26; i++)
	//			{
	//				alp = mun++;
	//				cout << setw(2) << alp;
	//				if (mun > 'Z')
	//					mun = mun - 26;
	//			}
	//			cout << endl;
	//			break;
	//		}
	//		else
	//		{
	//			cout << "대문자를 입력하세요 : ";
	//			continue;
	//		}
	//	}
	//}

	//
	char mun, alp;
	int i;
	cout << "한 문자를 입력하세요 : ";
	while (1)
	{
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z')
		{
			for (i = 1; i <= 26; i++)
			{
				alp = mun++;
				cout << setw(2) << alp;
				if (mun > 'Z')
					mun = mun - 26;
			}
			cout << endl;
			break;
		}
		else
		{
			cout << "대문자를 입력하세요 : ";
			continue;
		}
	}
}


//int u, v, GCM, LCM, m, n;
//cout << "두 수를 입력하세요 : ";
//cin >> u >> v;
//m = u;
//n = v;
//while (m != n)
//{
//	if (m > n)
//		m = m - n;
//	else
//		n = n - m;
//}
//GCM = m;
//LCM = (u*v) / GCM;
//cout << "GCM" << setw(5) << GCM << endl;
//cout << "LCM" << setw(5) << LCM << endl;

//
//	int u, v, GCM, LCM, s, l, na;
//	cout << "두 수를 입력하세요 : ";
//	cin >> u >> v;
//	if (u > v)
//	{
//		s = v; l = u;
//	}
//	else
//	{
//		s = u;l = v;
//	}
//	while (s != 0)
//	{
//		na = l % s; l = s; s = na;
//
//		GCM = l;
//		LCM = (u*v) / GCM;
//		cout << "GCM" << setw(5) << GCM << endl;
//		cout << "LCM" << setw(5) << LCM << endl;
//	}
//
//}