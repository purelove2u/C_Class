#include <iostream>
#include <iomanip>
//#include <conio.h>
#include <string>

using namespace std;

int arr[10][10], x = -1, y = 0, su = 0, i, k;
char ox;

void dal(int k, int num) 
{


}

void clear()
{


}

void print(int n)
{


}

void main() 
{
	int n;
	while (1)
	{
		cout << "1~10 까지의 수를 입력하세요 : ";
		cin >> n;
		if (n > 10)
		{
			cout << "다시 입력하세요!" << endl;
			continue;
		}
		else
		{
			dal(n, 1);
			print(n);
			cout << "계속 하시겠습니까? (y/n) : ";
			cin >> ox;
			if (ox == 'y' || ox == 'Y')
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
}