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
//	cout << "���� �� ���� �Է��ϼ��� : ";
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

// ���μ�,���μ�,return���� ��� ���� ���
char mun; //��������

void dae()
{
	mun = mun - 32;
	cout << mun << endl;
}



void main()
{
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> mun;
	dae();
}

// ���μ�,���μ��� �ְ�.return���� ���� ���
char mun, alp; // ��������

void dae(char alp)
{
	alp = alp - 32;
	cout << alp << endl;
}

void main()
{
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> mun;
	dae(mun);
}


// *************************************************
// ���μ�,���μ��� ����.return���� �ִ� ���
char mun, alp; // ��������

char dae()
{
	mun = mun - 32;
	return mun;
}

void main()
{
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> mun;
	alp=dae();
	cout <<alp << endl;
}

// ���μ�,���μ�,return���� �ִ� ���
char mun, alp, res; // ��������

char dae(char alp)
{
	alp = alp - 32;
	return alp;
}

void main()
{
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> mun;
	res = dae(mun);
	cout << res << endl;
}





























