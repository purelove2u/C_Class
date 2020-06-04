#include <iostream>

using namespace std;

void HAB()
{
	cout << "Let's check" << endl;
}

void HAB(int a)
{
	int gab = 0;
	for (int b = 1; b <= a; gab += b++);
	cout << "1부터 " << a << "까지의 합은 : " << gab << endl;

}

void HAB(int a, int b)
{
	int gab = 0;
	for (int i = a; i <= b; gab += i++);
	cout << a << "부터 " << b << "까지의 합은 : " << gab << endl;
}

void HAB(int a, int b, int c)
{
	int gab = 0;
	for (int i = a; i <= b; i += c); // 다시 계산
	cout << a << "부터 " << b << "까지의 합은 : " << gab << endl;

}


void main()
{
	HAB();
	HAB(10);
	HAB(1, 10);
	HAB(10, 20);
	HAB(1, 10, 2);
	system("pause");

}