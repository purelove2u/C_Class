#include <stdio.h>
#include "stdafx.h"


void main()
{
	int w, h;
	printf("�簢���� ����, ���� ���̸� �Է��ϼ��� : ");
	scanf_s("%d %d", &w, &h);
	printf("�簢�� ���� = %d\n", w*h);
	printf("===========================================\n");
	
	char irum[10];
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", irum);
	printf("���� : %s\n ",irum);
}