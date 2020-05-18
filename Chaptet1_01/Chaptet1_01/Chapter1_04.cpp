#include <stdio.h>		// C 표준 입출력
#include <iostream>		// C++ 표준 입출력

#include <string>		// 문자열
#include <sstream>		// 클래스형 객체를 만듦

#include <iomanip>		// 입출력 기본 form
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
//	// C 출력
//	printf("***************C언어 출력 함수****************\n");
//	printf("      name     kor eng mat tot avg \n");
//	printf("%8s %3d %3d %3d %3d %4.1f \n",name, kor, eng, mat, tot, avg);
//
//	// C++ 출력
//	cout << endl << "****************C++ 언어 출력 객체*******************" << endl;
//	cout << "      name     kor eng mat tot avg " << endl;
//	cout << setw(14) << name << setw(4) << kor << setw(4) << eng << setw(4) << mat << setw(4) << tot << setw(5) << setprecision(3) << avg << endl;
//
//}

//void main()
//{
//	int number;
//	cout << "숫자 입력받기 : ";
//	cin >> number;
//	cout << "출력 : " << number << endl;
//
//	char dan[15];
//	cout << "문자 입력받기 : ";
//	cin >> dan;
//	cout << "출력 : " << dan << endl;
//	cout << "멈추려면 0을 누르세요";
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
//	cout << resetiosflags(ios::left); // 왼쪽정렬해제
//	cout << setw(10) << "World" << "I" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "I" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "이름을 입력하세요 : ";
//	cin.get(Name, 15);
//	cin.ignore();		// 엔터를 무시하여 연속 입력
//	cout << "address : ";
//	cin.get(address, 20);
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//}

void main() {
	char Name[15];
	char address[20];
	cout << "이름을 입력하세요 : ";
	cin.getline(Name, 15);
	//cin.ignore();		// 엔터를 무시하여 연속 입력
	cout << "address : ";
	cin.getline(address, 20);
	cout << "\nName : " << Name << endl;
	cout << "address : " << address << endl;
}