// chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <string.h>
#include <string>
#include <iostream> // C++ 기본 입출력
#include <stdio.h> /* C 기본 입출력 */


//void main()
//{
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n",M);
//	printf("%c\n", N);
//}

void main()
{
	/*char H, S;
	H = 65;
	S = 97;
	printf("%c\n", H);
	printf("%c\n", S);
	H = 'z';
	S = 'Z';
	printf("%c\n", H);
	printf("%c\n", S);*/

	/*float S, W;
	S = 32.4;
	W = 213748565.5;
	printf("%f\n%f\n", S, W);*/


	//float circum, area;
	//const float PI = 3.141592; //상수값
	//float radius = 25;
	//area = PI * radius*radius;
	//circum = 2 * PI*radius;
	//printf("Area of circle is : %f\n", area);
	//printf("Circum of circle is : %f\n", circum);

	/*int i, j; 
	float k; 
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d %d\n",i, i + j);
	printf("%f\n",k);
	printf("%c %d\n", ch, ch);*/

	/*char k, b, s;
	k = 'k';
	b = 66;
	s = 's';
	printf("%c, %c, %c\n", k, b, s);
	printf("%d, %d, %d\n", k, b, s);*/

	//printf("%15f\n", 3.141592);
	//printf("%-15f\n", 3.141592);
	//printf("%15.3f\n", 3.141592);

	/*char ch = 'A';
	printf("character = %c, ASCII = %d\n\n", ch, ch);

	printf("%12d\n", 123456789);
	printf("%-3d%-3d%-3d\n", 12, 34, 56);
	printf("%3d%3d\n", 12, 34);
	printf("%03d%3d\n", 3, 160);
	printf("the  " "end  \n");*/

	/*scanf_s : double(lf), float:f, int:d, 문자열:s*/
	//int java, c, tot;
	//printf("JAVA : ");
	//scanf_s("%d",&java); //표준 입력 &:메모리에 접근
	//printf("C : ");
	//scanf_s("%d", &c);
	//tot = java + c;
	//printf("총점은 %d 입니다\n", tot);


	/*int w, h;
	printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	scanf_s("%d %d", &w, &h);
	printf("사각형 넓이 = %d\n", w*h);
	printf("===========================================\n");*/

	double mit, no, dol;
	double s;

	printf("밑변을 입력 하시오 : ");
	scanf_s("%f", &mit);
	printf("높이을 입력 하시오 : ");
	scanf_s("%f", &no);

	//s = (mit*no) / 2;
	s = (sqrt(3) / 4)*mit*mit;
	dol = mit * 3;

	printf("삼각형의 넓이는 %6.2f입니다.\n", s);
	printf("삼각형의 둘레는 %d입니다.\n", dol);

	printf("이름를 입력하세요");
	char irum[10];
	scanf_s("%s\n", irum, sizeof(irum));
	printf("성명 : %s\n", irum);


}





