// chapter2_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
// 배열 기본 실습1
//void main()
//{
//	char c[6] = { 'C', '&', 'C', '+', '+','\0' };//C&C++(="C&C++")
//	char ch[3][4] = {  { 'A', 'B', 'C','\0' },//ABC
//	                   {'D', 'E', 'F','\0'},//DEF
//	                   {'G','H', 'I','\0'}  };//GHI
//	cout << "1차원 배열 : "<<c << endl;
//	cout << "***** 2차원 배열(3행3열) *****" << endl;
//	cout << ch[0] << endl;
//	cout << ch[1] << endl;
//	cout << ch[2] << endl;
//}

// 배열 기본 실습2

//int a[5] = { 1,2,3,4,5 };
//
//void main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		a[i] = i + 1;
//		cout << a[i] << ", ";
//	}
//}

//int b[3][3], i, j, cnt;
//
//void main()
//{
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[i][j] = ++cnt;
//			cout << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//int i, tab[10];
//void print()
//{
//	for (i = 0; i < 10; i++)
//		cout << tab[i] << " ";//cout <<setw(3)<< tab[i];
//	cout << endl;
//
//}
//void main()
//{
//	//입력
//	for (i = 0; i < 10; i++)
//		tab[i] = i + 1;
//	print();
//}
//
//int tab[10], i, sum;
//void main()
//{
//	for (i = 0; i < 10; i++)
//	{
//		tab[i] = i + 1;
//		sum = sum + tab[i];
//	}
//	cout << "tab=";
//	for (i = 0; i < 10; i++)
//		//cout << tab[i];
//		cout << setw(3) << tab[i] << setw(2);
//	cout << endl;
//	cout << "sum = " << sum << endl;
//}
//

int i, j, cnt, tab[4][4];
void sum()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			//각행의 합
			tab[i][3] = tab[i][3] + tab[i][j];
			//각열의 합
			tab[3][j] = tab[3][j] + tab[i][j];
			//3,3열의 총합
			tab[3][3] = tab[3][3] + tab[i][j];
		}
	}
}
void print()
{
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			cout << setw(3) << tab[i][j];
		cout << endl;
	}
}
void main()
{
	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 3; j++)
			tab[i][j] = ++cnt;
	}
	sum();
	print();
}

int k;
void main()
{
	while (1)
	{
		cout << "The Four Type of Matrix <1> <2> <3> <4>" << endl;
		cout << "프로그램 종료 하시려면  0을 누르세요" << endl;
		k = _getch();
		if....
			switch ...
	}

















