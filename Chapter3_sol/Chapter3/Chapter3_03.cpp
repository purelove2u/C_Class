#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string> //strlen()

using namespace std;

/*int main(void)
{
	int array[3] = { 10, 20, 30 };
	int* p = NULL;

	// �迭�� 0��° ����� �ּ�
	//cout << setw(15) << array << setw(15) << &array + 0 << setw(15) << &array[0] << endl;
	//cout << setw(15) << array + 1 << setw(15) << &array + 1 << setw(15) << &array[1] << endl;
	//cout << setw(15) << array + 2 << setw(15) << &array + 2 << setw(15) << &array[2] << endl;

	//cout << setw(15) << sizeof(array) << setw(15) << sizeof(&array) + 0 << setw(15) << sizeof(&array[0]) << endl;

	//cout << setw(15) << *array << setw(15) << *(array + 0) << setw(15) << *&array[0] << endl;
	//cout << setw(15) << *(array + 1) << setw(15) << *(array + 1) << setw(15) << *&array[1] << endl;
	//cout << setw(15) << *(array + 2) << setw(15) << *(array + 2) << setw(15) << *&array[2] << endl;

	//cout << setw(15) << sizeof(*array) << setw(15) << sizeof(*(&array)) + 0 << setw(15) << sizeof(*(&array[0])) << endl;

	p = array; //&array[0]; //array+0

	cout << setw(15) << p << setw(15) << &p + 0 << setw(15) << &p[0] << endl;
	cout << setw(15) << p + 1 << setw(15) << &p[1] << endl;
	cout << setw(15) << p + 2 << setw(15) << &p[2] << endl;

	cout << setw(15) << *p << setw(15) << *(&p + 0) << setw(15) << *&p[0] << endl;
	cout << setw(15) << *p + 1 << setw(15) << *&p[1] << endl;
	cout << setw(15) << *p + 2 << setw(15) << *&p[2] << endl;

	return 0;
}*/

/*int main(void)
{
	// 5���� ���ڿ��� �� �ִ� �迭
	const char* s[] = { "A", "BB", "CCC", "DDDD", "EEEEE" };

	printf("%d\n", sizeof(s));	// 4����Ʈ�� ����Ʈ���� 5�� : 4 * 5 = 20

	// ��� ���ڿ��� ������ �հ�(null ���ڴ� ����)
	size_t total_size = 0;
	for (size_t i = 0; i < sizeof(s)/sizeof(s[0]); i++)	// ""i < sizeof(s)"" �� 20�������� ���������� 15���̹Ƿ� 20������ �� ���� �����Ƿ� ������ ��
	{													// �׷��� sizeof(s[0]) �� �������� 
		total_size += strlen(s[i]);
	}
	printf("%d\n", total_size);

	return 0;
}*/












