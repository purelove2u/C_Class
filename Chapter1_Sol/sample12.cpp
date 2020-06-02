// sample12.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

void main()
{
	int mit, no, dol;
	double s;

	printf("밑변을 입력 하시오 : ");
	scanf_s("%d", &mit);
	printf("높이을 입력 하시오 : ");
	scanf_s("%d", &no);

	s = (mit*no) / 2;
	dol = mit * 3;

	printf("삼각형의 넓이는 %6.2f입니다.\n", s);
	printf("삼각형의 둘레는 %d입니다.\n", dol);
}


