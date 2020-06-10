// enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 열거형(enumeration)
// 이름 있는 정수형 상수들을 열거하여 새롭게 만들어진 사용자 정의
//열거형 목록값은 프로그래머가 특별히 지정하지 않으면 0부터 시작

#include <iostream>

using namespace std;

enum colors{black,white, red, green,yellow};

int main()
{
	colors mycolor;
	mycolor = yellow;
	const char *meaning[] = { "어둠","평화","정열","생명","순수" };
	cout << mycolor << endl;
	cout << "당신이 선택한 색상의 의미 : " << meaning[mycolor] << endl;
}