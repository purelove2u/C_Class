#include <stdio.h>		// C ǥ�� �����
#include <iostream>		// C++ ǥ�� �����

#include <string>		// ���ڿ�
#include <sstream>		// Ŭ������ ��ü�� ����

#include <iomanip>		// ����� �⺻ form
#include <conio.h>

using namespace std;
//char str;

//void main()
//{
//	cout << "Hello C++" << endl;
//	
//	char name[] = "Seo Myoung Won";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//
//	// C ���
//	printf("***************C��� ��� �Լ�****************\n");
//	printf("      name     kor eng mat tot avg \n");
//	printf("%8s %3d %3d %3d %3d %4.1f \n",name, kor, eng, mat, tot, avg);
//
//	// C++ ���
//	cout << endl << "****************C++ ��� ��� ��ü*******************" << endl;
//	cout << "      name     kor eng mat tot avg " << endl;
//	cout << setw(14) << name << setw(4) << kor << setw(4) << eng << setw(4) << mat << setw(4) << tot << setw(5) << setprecision(3) << avg << endl;
//
//}

//void main()
//{
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number;
//	cout << "��� : " << number << endl;
//
//	char dan[15];
//	cout << "���� �Է¹ޱ� : ";
//	cin >> dan;
//	cout << "��� : " << dan << endl;
//	cout << "���߷��� 0�� ��������";
//	_getch();
//	cout << endl;
//
//}

//int main()
//{
//	int n;
//	stringstream ss;
//	ss.str("12 345 6778 0 -12");
//
//	for (int i = 0; i < 5; i++) {
//		ss >> n;
//		cout << n << endl;
//	}
//	return 0;
//}

//void main() {
//	cout << setw(10) << "753-9510" << "I" << endl;
//	cout << setiosflags(ios::left);
//	cout << setw(10) << "753-9510" << "I" << endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6);
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
//	cout << resetiosflags(ios::left); // ������������
//	cout << setw(10) << "World" << "I" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "I" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "�̸��� �Է��ϼ��� : ";
//	cin.get(Name, 15);
//	cin.ignore();		// ���͸� �����Ͽ� ���� �Է�
//	cout << "address : ";
//	cin.get(address, 20);
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//}

void main() {
	char Name[15];
	char address[20];
	cout << "�̸��� �Է��ϼ��� : ";
	cin.getline(Name, 15);
	//cin.ignore();		// ���͸� �����Ͽ� ���� �Է�
	cout << "address : ";
	cin.getline(address, 20);
	cout << "\nName : " << Name << endl;
	cout << "address : " << address << endl;
}