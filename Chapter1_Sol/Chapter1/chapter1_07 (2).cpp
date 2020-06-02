#include "1.h"


//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//void main()
//{
//	int m, n, res;
//	cout << "비교할 두 수를 입력하세요 : ";
//	cin >> m >> n;
//	res = max(m, n);
//	cout << "MAX : " << res << endl;
//}


// Call by Value

//void value(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << " a= " << a << endl;
//	cout << " b= " << b << endl;
//}
//
//void main()
//{
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	value(n1, n2);
//	cout << " n1= " << n1 << endl;
//	cout << " n2= " << n2 << endl;
//}



// Call by Reference

//void value(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << " a= " << a << endl;
//	cout << " b= " << b << endl;
//	cout << " a= " << *a << endl;
//	cout << " b= " << *b << endl;
//}
//
//void main()
//{
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	value(&n1, &n2);
//	cout << " n1= " << n1 << endl;
//	cout << " n2= " << n2 << endl;
//}

// 실인수,가인수,return값이 모두 없는 경우
char mun; //전역변수

void dae()
{
	mun = mun - 32;
	cout << mun << endl;
}



void main()
{
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;
	dae();
}

// 실인수,가인수는 있고.return값이 없는 경우
char mun, alp; // 전역변수

void dae(char alp)
{
	alp = alp - 32;
	cout << alp << endl;
}

void main()
{
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;
	dae(mun);
}


// *************************************************
// 실인수,가인수는 없고.return값이 있는 경우
char mun, alp; // 전역변수

char dae()
{
	mun = mun - 32;
	return mun;
}

void main()
{
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;
	alp=dae();
	cout <<alp << endl;
}

// 실인수,가인수,return값이 있는 경우
char mun, alp, res; // 전역변수

char dae(char alp)
{
	alp = alp - 32;
	return alp;
}

void main()
{
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;
	res = dae(mun);
	cout << res << endl;
}





























