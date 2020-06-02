#include "1.h"

//int a;

//void add(int i)
//{
//	if (i >= 10)
//		return;
//	i++;
//	a++;
//	cout << a << endl;
//	add(i); //재귀
//}
//
//int main()
//{
//	add(0);
//	cout << "res : " << a << endl;
//}
// 재귀함수 5회전
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
//// for제어문 5회전
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
//// while제어문 5회전
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

// 팩토리얼 알고리즘 

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
//	cout << "1부터 20까지의 팩토리얼 총 합 : " <<S<< endl;
//
//}

// 팩토리얼 재귀함수

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
	cout << "숫자를 입력하세요 : ";
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





















