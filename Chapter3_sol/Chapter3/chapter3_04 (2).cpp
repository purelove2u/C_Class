// ������6.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	

	//p = array;// p=&array[0]; ������ ������ �迭�� ���� �ּҸ� ����


	//for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	//{
	//	//printf("%d %d %d \n", *(p + i), *&p[i], p[i]); //��� : *(p+i) == *&p[i] == p[i]
	//	cout << setw(4) << *(p + i) << setw(4) << *&p[i] << setw(4) << p[i] << endl;
	//}

	////printf("--------------------\n");
	//cout << "---------------------" << endl;

	//for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	//{
	//	//printf("%d %d %d \n", *(array + i), *&array[i], array[i]);	//��� : *(array+i)==*&array[i]==array[i]
	//	cout << setw(4) << *(array + i) << setw(4) << *&array[i] << setw(4) << array[i] << endl;
	//}
	//int array[3] = { 10, 20, 30 };
	//int i = 0;
	//int* p = NULL;

	//p = array; 

	//printf("%d %d %d\n", p[0], p[1], p[2]);
	//printf("%d %d %d\n", *p, *(p+1), *(p+2));
	//printf("============================\n");
	//
	//p = array + 1;
	//printf("%d %d %d\n", p[-1], p[0], p[1]);
	//printf("%d %d %d\n", *(p-1),*p , *(p + 1));
	//printf("============================\n");

	//p = array + 2;
	//printf("%d %d %d\n", p[-2], p[-1], p[0]);
	//printf("%d %d %d\n", *(p - 2), *(p-1), *(p+0));
	//int array[3];
	//int i = 0;
	//int* p = NULL;

	//p = array;
	//
	//*p = 10;
	//printf("%d %d %d\n", p[0], p[1], p[2]);
	//printf("============================\n");
	//
	//*(p+1) = 20;
	//printf("%d %d %d\n", p[0], p[1], p[2]);
	//printf("============================\n");
	//
	//*(p+2) = 30;
	//printf("%d %d %d\n", p[0], p[1], p[2]);
	//printf("============================\n");
	//return 0;

	/*int array[3][3] = {10,20,30,40,50,60,70,80,90};

	printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
	printf("%X %X %X \n", &array[2][0], &array[2][1], &array[2][2]);
	printf("============================\n");

	printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
	printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);
	printf("%d %d %d \n", *&array[2][0], *&array[2][1], *&array[2][2]);*/

	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;//int�� ���� ����
	int array[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };// int�� �迭 ����
	int i, j;

	int *pt_a[4] = { &num1,&num2 ,&num3 ,&num4 };
	int (*pt_b)[4] = array;


	cout << setw(4) << *pt_a[0] << setw(4) << *pt_a[1] << setw(4) << *pt_a[2] << setw(4) << *pt_a[3] << endl;

	for (i=0;i<2;i++)
	{
		for (j = 0; j < 4; j++)
			cout << setw(4) << pt_b[i][j];
		cout << endl;

	}


	return 0;



}
