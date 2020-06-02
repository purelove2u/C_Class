#include <stdio.h>


void main()
{
	int a, b, c, d, e;
	printf("첫번째 값을 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 값을 입력하세요 : ");
	scanf_s("%d", &b);
	c = a + b;
	d = a%b;
	e = -a + b;
	a = a + 1; //a+=1
	//a+=b;

	printf("덧셈결과 = %d\n", c);
	printf("나머지결과 = %d\n", d);
	printf("음수덧셈결과 = %d\n", e);
	printf("a의 증가값 = %d\n", a);
}