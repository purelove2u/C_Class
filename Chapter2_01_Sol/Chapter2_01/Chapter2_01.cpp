
#include <iostream>
using namespace std;

//void main()
//{
//	char str[6] = "C&C++";
//	char str2[3][4] = { {'a', 'b', 'c'} , {'d', 'e', 'f'} ,  {'g','h','i'} };
//
//	cout << str << endl;
//	cout << str2[0] << endl;
//	cout << str2[1] << endl;
//	cout << str2[2] << endl;
//
//}


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


int i, tab[10];

void print()
{
	for (i = 0; i < 10; i++)
	{
		cout << tab[i] << " "; 
	}
	cout << endl;
}

void main()
{
	for (i = 0; i < 10; i++)
	{
		tab[i] = i + 1;
	}
	print();
}







