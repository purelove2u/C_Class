#include <stdio.h>

int main(void) {
	
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	
	// printf
	// ����
	//int add = 3 + 7;	//10
	//printf("3 + 7 = %d\n", add);
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	// scanf
	// Ű���� �Է��� �޾� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/
	
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// ������Ʈ
	// �������� �������� ������ �Լ� (�����ۼ�)
	// �̸�, ����, ������, Ű, ���˸�
	char name[256];
	printf("�̸��� ������? : ");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("����ΰ���? : ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ��kg�ΰ���? : ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��cm �ΰ���? : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� �������°�? : ");
	scanf_s("%s", what, sizeof(what));

	// �����������
	printf("\n\n---������ ����---\n\n");
	printf("�̸�     : %s\n", name);
	printf("����     : %d\n", age);
	printf("������   : %.2f\n", weight);
	printf("Ű       : %.2f\n", height);
	printf("�˸�     : %s\n", what);

	return 0;

}