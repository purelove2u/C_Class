#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int a = 10; //int�� ������ ����� �ʱ�ȭ (a1111110)
	int *pi; //������ ���� (a2222220)
	int **ppi; //2�� ������ ���� (a3333330)

		pi = &a; //int�� ������ �ּҸ� �����ͷ� ���� (a,pi=a1111110)
		ppi = &pi;

		cout << "------------------------------------------" << endl;
		cout << "����" << setw(12)  << "&����"
			<< setw(10) << "*����" << setw(10) << "**����" << endl;
		cout << "------------------------------------------" << endl;
		cout << a << setw(16) << &a << endl;
		cout << pi << setw(10)<<&pi<<setw(10) << setw(10) <<*pi<<endl;
		cout << ppi << setw(10) << setw(10) << &ppi << setw(10) << *ppi << setw(10)<<**ppi<<endl;

		return 0;

}