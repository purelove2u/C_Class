#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int a = 5;
	double b = 5.5;
	char str[10] = "1000";
	char tmp[10] = { 0, };
	printf("a+str = %d\n", a + atoi(str)); // ���ڿ� -> ������ ��ȯ
	printf("b+str = %.2f\n", b + atof(str));	// ���ڿ� -> �Ǽ��� ��ȯ
	printf("%s\n", str); 
	//return ;


	int first, second, plus, etc, minus, increase;
	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &first);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &second);
	plus = first + second;
	etc = first % second;
	minus = -first + second;
	printf("������� = %d\n", plus);
	printf("��������� = %d\n", etc);
	printf("����������� = %d\n", minus);
	printf("a�� ������ = %d\n", increase = first + 1);

}