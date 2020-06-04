﻿// chapter4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int arr[100][100], cnt, k;
ifstream fin("in.txt");
ofstream fout("out.txt");


void print()
{
	for (int i = 0; i < k+1; i++)
	{
		for (int j = 0; j < k+1; j++)
			fout << setw(5) << arr[i][j];
		fout << endl;
	}
}

void main()
{
	fin >> k;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			arr[i][j] = ++cnt;
			arr[i][k] += arr[i][j];
			arr[k][j] += arr[i][j];
			arr[k][k] += cnt;
		}
	}
	print();

}

