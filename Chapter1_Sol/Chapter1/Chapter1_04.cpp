#include <iostream>

using namespace std;

void main()
{
	//int a, b, MAX, MIN;
	//cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	//cin >> a;
	//cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	//cin >> b;
	//cout << "a= " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "��(��) �� ũ��" << endl	// ? �����ϸ�
	//	: cout << b << "(��)�� �� ũ��" << endl;	// : �������� ������

	//int i, j, k, MAX, MIN;
	//cout << "���� 3���� �Է��ϼ��� : ";
	//cin >> i >> j >> k;
	//MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "MAX = " << MAX << endl;
	//cout << "MIN = " << MIN << endl;

	int n, n1, n2, n3, n4, n5, n6;
	cout << "�ټ��ڸ� ���� �Է��ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000;
	n2 = (n - (n1 * 10000)) / 5000;
	n3 = (n - (n1 * 10000) - (n2 * 5000)) / 1000;
	n4 = (n - (n1 * 10000) - (n2 * 5000) - (n3 * 1000)) / 500;
	n5 = (n - (n1 * 10000) - (n2 * 5000) - (n3 * 1000) - (n4 * 500)) / 100;
	n6 = (n - (n1 * 10000) - (n2 * 5000) - (n3 * 1000) - (n4 * 500) - (n5 * 100)) / 10;
	cout << "����¥�� : " << n1 << "��" << endl;
	cout << "��õ��¥�� : " << n2 << "��" << endl;
	cout << "õ��¥�� : " << n3 << "��" << endl;
	cout << "�����¥�� : " << n4 << "��" << endl;
	cout << "���¥�� : " << n5 << "��" << endl;
	cout << "�ʿ�¥�� : "<< n6 << "��" << endl;

}
