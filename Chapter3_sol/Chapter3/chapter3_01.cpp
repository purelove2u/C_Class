// chapter3_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

//int  *p, *q, a = 10, b = 20, tmp;
//
//void main()
//{
//	p = &a;//p는 a의 주소를 받음
//	q = &b;
//
//	tmp = *p;//*p는 주소에 있는 값
//	*p = *q;
//	*q = tmp;
//	cout << a <<",  "<< b;
//}

//int main()
//{
	//#1.
	//int a;
	//a = 10;

	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;
	
	//#2.
	/*int a;
	int* pA;

	a = 10;
	pA = &a;

	cout << "변수 a의 값은 : " << a << endl;
	cout << "변수 a의 주소는 : " << &a << endl;
	cout << "포인트 pA의 값은 : " << pA << endl;
	cout <<  "pA의 값은 : " << *pA << endl;*/
	
	//#3.
//	int a = 10;
//	int *pa;
//	// a변수방을 이용하여 출력
//	cout << "변수 a의 값은 : " << a << endl;
//	cout << "변수 a의 주소는 : " << &a << endl;
//	// pa를 이용하여 출력
//	pa = &a;
//
//	cout << "변수 pa의 값은 : " << *pa << endl;
//	cout << "변수 pa의 주소는 : " << pa << endl;
//
//	*pa = 50;
//	cout << "변수 pa의 값은 : " << *pa << endl;
//	cout << "변수 pa의 주소는 : " << pa << endl;
//} 

void sw(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;

}


int main()
{
	int a = 10;
	int b = 100;

	cout << "변수 a의 값 : " << a << endl;
	cout << "변수 b의 값 : " << b << endl;
	cout << "변수 a,b값 교환합니다~~~ "<< endl;
	sw(&a, &b);
	cout << "교체 후 변수 a의 값 : " << a << endl;
	cout << "교체 후 변수 b의 값 : " << b << endl;
}