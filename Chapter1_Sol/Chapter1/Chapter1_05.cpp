#include <iostream>

using namespace std;

void main()
{
	//// ¦�� �Ǻ���
	//int n;
	//cout << "���ڸ� �Է��ϼ��� :";
	//cin >> n;
	//if (n % 2 == 0)
	//{
	//	cout << n << "�� ¦��" << endl;
	//}
	//else
	//{
	//	cout << n << "�� ¦���� �ƴϴ�" << endl;
	//}

	//// 10�� ���
	//int dat;
	//cout << "���ڸ� �Է��ϼ��� :";
	//cin >> dat;
	//if (dat % 10 == 0)
	//{
	//	cout << dat << "�� 10�� ���" << endl;
	//}
	//else
	//{
	//	cout << dat << "�� 10�� ����� �ƴϴ�" << endl;
	//}

	//int a;
	//cout << "���ڸ� �Է��ϼ��� :";
	//cin >> a;
	//if (a > 10)
	//{
	//	cout << a << "�� 10���� ũ��" << endl;
	//}
	//else
	//{
	//	cout << a << "�� 10���� �۴�" << endl;
	//}
	
	//int num1, num2;
	//cout << "ù��° ���� �Է� : ";
	//cin >> num1;
	//cout << "�ι�° ���� �Է� : ";
	//cin >> num2;
	//cout << "�� ���� �� �м� ����� : ";

	//if (num1 >= num2)
	//{
	//	if (num1 == num2)
	//	{
	//		cout << num1 << " �� " << num2 << " (��)�� ���� ��.";
	//	}
	//	else
	//	{
	//	cout << num1 << " (��)�� " << num2 << " ���� ũ��.";
	//	}
	//}
	//else
	//{
	//	cout << num1 << " (��)�� " << num2 << " ���� �۴�.";

	//}

	//int n, etc;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> n;
	//if (n % 5 == 0)
	//{
	//	cout << n << "(��)�� 5�� ����̴�." << endl;
	//}
	//else
	//{
	//	etc = 5 - (n % 5);
	//	cout << n << "(��)�� 5�� ����� �Ǳ� ���� " << etc << " �ʿ�";
	//}

	int n, d, etc;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> n;
	cout << "�м��� ����� ���ڸ� �Է��ϼ��� : ";
	cin >> d;
	if (n % d == 0)
	{
		cout << n << "(��)�� "<< d << "�� ����̴�." << endl;
	}
	else
	{
		etc = d - (n % d);
		cout << n << "(��)�� " << d << "�� ����� �Ǳ� ���� " << etc << " �ʿ�";
	}

}

















