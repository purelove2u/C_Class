#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	// ���ڿ��� ����
	char tab[] = "abcde";
	int L;

	L = strlen(tab);

	cout << "���ڿ� : " << tab << " �� ����" << L << endl;

	//// ���ڿ��� ����
	//char tab[] = "abcde";
	//cout << "strcopy ����� ���� �� ���ڿ� tab�� ������ : " << tab << " �Դϴ�." << endl;

	//strcpy_s(tab, "XYZ");
	//cout << "strcopy ��� ���� �� ���ڿ� tab�� ������ : " << tab << " �Դϴ�." << endl;

}