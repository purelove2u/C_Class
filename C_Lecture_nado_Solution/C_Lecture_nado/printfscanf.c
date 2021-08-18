#include <stdio.h>

int main(void) {
	
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	
	// printf
	// 연산
	//int add = 3 + 7;	//10
	//printf("3 + 7 = %d\n", add);
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	// scanf
	// 키보드 입력을 받아 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/
	
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서작성)
	// 이름, 나이, 몸무게, 키, 범죄명
	char name[256];
	printf("이름이 뭐에요? : ");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("몇살인가요? : ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg인가요? : ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇cm 인가요? : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀는가? : ");
	scanf_s("%s", what, sizeof(what));

	// 조서내용출력
	printf("\n\n---범죄자 정보---\n\n");
	printf("이름     : %s\n", name);
	printf("나이     : %d\n", age);
	printf("몸무게   : %.2f\n", weight);
	printf("키       : %.2f\n", height);
	printf("죄목     : %s\n", what);

	return 0;

}