#include <stdio.h>


void main()
{
	int a, b, c, d, e;
	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	c = a + b;
	d = a%b;
	e = -a + b;
	a = a + 1; //a+=1
	//a+=b;

	printf("������� = %d\n", c);
	printf("��������� = %d\n", d);
	printf("����������� = %d\n", e);
	printf("a�� ������ = %d\n", a);
}