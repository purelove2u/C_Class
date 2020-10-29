//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main()
//{
//	int i = 0, j = 0;
//
//	printf("Input two integers\n");
//	scanf("%d%d", &i, &j);	// & : ampersand
//	printf("i = %d, j = %d\n", i, j);

//	printf("%d + %d = %d\n", i, j, i + j);
//	printf("%d * %d = %d\n", i, j, i * j);
//
//	return 0;
//}

//int main()
//{
//	float won = 0.0f;
//	float dollar = 0.0f;
//
//	printf("Input won\n");
//	scanf("%f", &won);
//
//	dollar = won * 0.00089f;
//
//	printf("Dollar = %.2f\n", dollar);	
//}

int main(void) {
	int a;

	scanf("%i", &a); //011을 입력하면 9
	printf("%i\n", a);

	scanf("%d", &a); //011을 입력하면 11
	printf("%d\n", a);

}