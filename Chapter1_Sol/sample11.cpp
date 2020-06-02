// sample11.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

void main()

{
	int kor, eng, tot;
	printf("국어점수 : ");
	scanf_s("%d",&kor);
	printf("영어점수 : ");
	scanf_s("%d",&eng);
	tot=kor+eng;
	printf("총점은 %d 입니다.\n", tot);
}

