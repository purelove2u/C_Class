#include "1.h"

//int a;

//void add(int i)
//{
//	if (i >= 10)
//		return;
//	i++;
//	a++;
//	cout << a << endl;
//	add(i); //���
//}
//
//int main()
//{
//	add(0);
//	cout << "res : " << a << endl;
//}
// ����Լ� 5ȸ��
//void countNum(int num)
//{
//	if (num == 1)
//	{
//		cout << "Num : " << num << endl;
//		return;
//	}
//	else
//	{
//		cout << "Num : " << num << endl;
//		countNum(num-1);
//	}
//}
//
//int main()
//{
//	countNum(5);
//	return 0;
//}
//
//// for��� 5ȸ��
//void countNum_for(int num)
//{
//	for (int i = num; i > 0; i--)
//	{
//		cout << "Num : " << i << endl;
//	}
//}
//
//int main()
//{
//	countNum_for(5);
//	return 0;
//}
//
//// while��� 5ȸ��
//void countNum_while(int num)
//{
//	while (num > 0)
//	{
//		cout << "Num : " << num << endl;
//		num--;
//	}
//}
//
//int main()
//{
//	countNum_while(5);
//	return 0;
//}

// ���丮�� �˰��� 

//void main()
//{
//	int N = 1;
//	long long F = 1;
//	long long S = 0;
//	while (N < 20) {
//		N++;
//		F = F * N;
//		S = S + F;
//
//		cout << N << "! : " << F << endl;
//	}
//	cout << "1���� 20������ ���丮�� �� �� : " <<S<< endl;
//
//}

// ���丮�� ����Լ�

int n,i; 
long long result, dap;
int fact(int x)
{
	if (x == 1)
		return(1);
	else
		dap = x * fact(x - 1);
	return(dap);
}

void main()
{
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> n;
	result = fact(n);
	cout << n << "!=";
	for (i = n; i > 1; i--)
		cout << i << "! * ";
	cout << i << "=" << result << endl;
}


//
//
//
//





















