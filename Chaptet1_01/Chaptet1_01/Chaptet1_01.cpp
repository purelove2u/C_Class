﻿// Chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream> // C++ 기본 입출력
#include <stdio.h>	/* C 기본 입출력 */

//void main()
//{
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n", M);
//	printf("%c", N);
//}


void main()
{
	//char H, S;
	//H = 65;
	//S = 97;
	//printf("%c\n", H);
	//printf("%c\n", S);
	//H = 'z';
	//S = 'Z';
	//printf("%c\n", H);
	//printf("%c\n", S);

	//float S, W;
	//S = 32.4;
	//W = 21374865.5;
	//printf("%f\n%f\n", S, W);

	//float circum, area;
	//const float PI = 3.141592;	// 상수값
	//float radius = 25;
	//area = PI * radius * radius;
	//circum = 2 * PI * radius;
	//printf("Area fo circle is %f\n", area);
	//printf("Circum of circle is %f\n", circum);

	/*int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.235;
	ch = 'A';
	printf("%d %d\n", i, i + j);
	printf("%f\n", k);
	printf("%c %d\n", ch, ch);

	float i;
	i = 3.141592;
	printf("%15f\n", i);
	printf("%-15f\n", i);
	printf("%15.3f\n", i);*/

	//char ch = 'A';

	//printf("character = %c, ", ch);
	//printf("ASCII = %d\n", ch);
	//printf("character = %c, ASCII = %d\n", ch, ch);
	//
	//printf("%15d\n", 123456789);
	//
	//printf("%-3d", 12);
	//printf("%-3d", 34);
	//printf("%-3d\n", 56);
	//printf("%-3d%-3d%-3d\n", 12, 34, 56);

	//printf("%3d", 12);
	//printf("%3d\n", 34);
	//printf("%3d%3d\n", 12, 34);

	//printf("%06d\n", 3160);
	//printf("the end");

	int java, c, total;
	printf("JAVA : ");
	scanf_s("%d", &java);
	printf("C : ");
	scanf_s("%d", &c);
	total = java + c;
	printf("총점은 %d 입니다.\n", total);


	int width, height, space;	
	printf("사각형의 가로, 세로 길이를 입력하세요 :");
	scanf_s("%d %d", &width, &height);
	space = width * height;
	printf("사각형의 넓이 = %d\n", space);
	printf("==============================================\n");
	printf("이름을 입력하세요 :");
	char name[10];
	scanf_s("%s\n", name, sizeof(name));
	printf("성명 : %s\n", name);


	float width, height, space, circum;
	printf("삼각형의 밑변을 입력하세요 :");
	scanf_s("%f", &width);
	printf("삼각형의 높이을 입력하세요 :");
	scanf_s("%f", &height);
	space = (width * height) / 2;
	circum = width * 3;
	printf("삼각형의 넓이는 %3.2f입니다.\n", space);
	printf("삼각형의 둘레는 %.0f입니다.\n", circum);
}















// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
