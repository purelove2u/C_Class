#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	// 문자열의 길이
	char tab[] = "abcde";
	int L;

	L = strlen(tab);

	cout << "문자열 : " << tab << " 의 길이" << L << endl;

	//// 문자열의 복사
	//char tab[] = "abcde";
	//cout << "strcopy 명령이 수행 전 문자열 tab의 내용은 : " << tab << " 입니다." << endl;

	//strcpy_s(tab, "XYZ");
	//cout << "strcopy 명령 수행 후 문자열 tab의 내용은 : " << tab << " 입니다." << endl;

}