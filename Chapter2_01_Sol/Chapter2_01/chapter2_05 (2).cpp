#include <iostream>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;

//int arr[10][10], x = -1, y = 0, su = 0, i,k;
//char ox;
//
//void dal(int k, int num)//num는 스위치
//{
//	if (k == 0)
//		return;
//	for (i = 0; i < 2 * k - 1; i++)
//	{
//		if (i < k)
//			x += num;
//		else
//			y += num;
//		arr[y][x] = ++su;
//	}
//	dal(k - 1, num * (-1));//자기자신 호출-재귀함수
//
//}
//void clear()
//{
//	for (i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//			arr[i][j] = 0;
//	}
//	x = -1;
//	y = 0;
//
//}
//void print(int n)
//{
//	cout << endl;
//	for (int a = 0; a < n; a++)
//	{
//		for (int b = 0; b < n; b++)
//
//			cout << setw(4) << arr[a][b];
//		cout << endl;
//		su = 0;
//	}
//	clear();
//
//}
//
//void main()
//{
//	int n;
//	while (1)
//	{
//		cout << "1~10까지의 수를 입력하세요 : ";
//		cin >> n;
//		if (n > 10)
//		{
//			cout << "다시 입력하세요!" << endl;
//			continue;
//		}
//		else
//		{
//			dal(n, 1);
//			print(n);
//			cout << "계속 하시겠습니까?(Y/N) : ";
//			cin >> ox;
//			if (ox == 'y' || ox == 'Y')
//				continue;
//			else
//				break;
//		}
//	}
//}

int tab[100][100], i, j, x, y, n;

void print()
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << setw(4) << tab[i][j];
		}
		cout << endl;
	}

}

void main()
{
	cout << "홀수를 입력하세요 : ";
	cin >> n;
	x = -1;//행
	y = n / 2;//열 가운데
	for (i = 1; i <= n * n; i++)
	{
		if (i%n == 1)
			x = x + 1;//[x][y]-->[0][2] 배수일때 규칙
		else
		{
			x = x - 1;
			y = y + 1;
		}
		if (x < 0)//행을 벗어났을때 
			x = n - 1;
		if (y > n - 1)//열을 벗어났을때
			y = 0;
		tab[x][y] = i;
	}
	print();
}
