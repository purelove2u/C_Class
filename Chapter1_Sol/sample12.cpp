// sample12.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

void main()
{
	int mit, no, dol;
	double s;

	printf("�غ��� �Է� �Ͻÿ� : ");
	scanf_s("%d", &mit);
	printf("������ �Է� �Ͻÿ� : ");
	scanf_s("%d", &no);

	s = (mit*no) / 2;
	dol = mit * 3;

	printf("�ﰢ���� ���̴� %6.2f�Դϴ�.\n", s);
	printf("�ﰢ���� �ѷ��� %d�Դϴ�.\n", dol);
}


