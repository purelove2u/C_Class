#include <stdio.h>
#include "stdafx.h"


void main()
{
	int w, h;
	printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	scanf_s("%d %d", &w, &h);
	printf("사각형 넓이 = %d\n", w*h);
	printf("===========================================\n");
	
	char irum[10];
	printf("이름을 입력하세요 : ");
	scanf("%s", irum);
	printf("성명 : %s\n ",irum);
}