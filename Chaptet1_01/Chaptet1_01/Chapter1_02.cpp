#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int a = 5;
	double b = 5.5;
	char str[10] = "1000";
	char tmp[10] = { 0, };
	printf("a+str = %d\n", a + atoi(str)); // 문자열 -> 정수형 변환
	printf("b+str = %.2f\n", b + atof(str));	// 문자열 -> 실수형 변환
	printf("%s\n", str); 
	//return ;


	int first, second, plus, etc, minus, increase;
	printf("첫번째 값을 입력하세요 : ");
	scanf_s("%d", &first);
	printf("두번째 값을 입력하세요 : ");
	scanf_s("%d", &second);
	plus = first + second;
	etc = first % second;
	minus = -first + second;
	printf("덧셈결과 = %d\n", plus);
	printf("나머지결과 = %d\n", etc);
	printf("음수덧셈결과 = %d\n", minus);
	printf("a의 증가값 = %d\n", increase = first + 1);

}