#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include<string>
#include <list>

using namespace std;

// 2차원 배열 회전
//int i, j, cnt, k, tab[5][5];
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			cout << setw(4) << tab[i][j];
//		cout << endl;
//	}
//}
//void main()
//{
//	while (1)
//	{
//		cout << "The Four Type of Matrix <1> <2> <3> <4>" << endl;
//		cout << "프로그램 종료 하시려면  0을 누르세요" << endl;
//		k = _getch();
//		if (k == '0')
//			break;
//		switch (k)
//		{
//		case '1':
//			cnt = 0;
//			for (i = 0; i < 5; i++)
//			{
//				for (j = 0; j < 5; j++)
//					tab[i][j] = ++cnt;
//			}
//			print();
//			break;
//
//		case '2':
//			cnt = 0;
//			for (i = 4; i >= 0; i--)
//			{
//				for (j = 0; j < 5; j++)
//					tab[j][i] = ++cnt;
//			}
//			print();
//			break;
//		case '3':
//			cnt = 0;
//			for (i = 4; i >= 0; i--)
//			{
//				for (j = 0; j < 5; j++)
//					tab[i][j] = ++cnt;
//			}
//			print();
//			break;
//		case '4':
//			cnt = 0;
//			for (i = 0; i < 5; i++)
//			{
//				for (j = 4; j >= 0; j--)
//					tab[j][i] = ++cnt;
//			}
//			print();
//			break;
//		}
//	}
//}

// ㄹ 자 2차원 배열

//int tab[100][100], i, j, cnt, k,sw=0;
//void print()
//{
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < k; j++)
//			cout << setw(4) << tab[i][j];
//		cout << endl;
//	}
//}
//void main()
//{
//	while (1)
//	{
//		cout << "숫자를 입력 하세요 : ";
//		cin >> k;
//		if (k == 0)
//			break;
//		cnt = 0;
//		for (i = 0; i < k; i++)
//		{
//			if (i % 2 == 0)
//			{
//				for (j = 0; j < k; j++)
//					tab[i][j] = ++cnt;
//			}
//			else
//			{
//				for (j = k - 1; j >= 0; j--)
//					tab[i][j] = ++cnt;
//			}
//		}
//		print();
//	}
//}

// 정렬
//1.선택정렬
//
//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//	for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (tab[i] >= tab[j])
//			{
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}

//2.버블정렬

//int i, j, temp;
//int tab[5];
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//cout << "숫자를 입력하세요 : ";
//// 입력받기
//for (i = 0; i < 5; i++)
//	cin >> tab[i];
////정렬
//for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = 0; j < 5-1-i; j++)
//		{
//			if (tab[j] >= tab[j+1])
//			{
//				temp = tab[j];
//				tab[j] = tab[j+1];
//				tab[j+1] = temp;
//			}
//		}
//	}
//	print();
//}

// 삽입정렬
//int i, j, temp;
//int tab[5] = { 5,4,3,2,1 };
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//	for (i = 1; i < 5;i++)//2번째 값부터 정렬시작 key값 추출
//	{
//		temp = tab[i];
//		j = i - 1;//key값의 바로 앞에부터 비교
//		while (j >= 0 && tab[j] > temp)
//		{
//			tab[j + 1] = tab[j];
//				j--;
//			tab[j + 1] = temp;
//		}
//	}
//	print();
//}
//
//int i, j, temp;
//int tab[5];
//
//void main()
//{
//	int E[5] = { 95,75,85,100,50 };
//	int i;
//	int j, KEY;
//	for (i = 1; i < 5; i++)
//	{
//		//키의 위치는 두번째부터 설정해야 첫번째값과 비교가 시작됨
//		KEY = E[i];
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (E[j] <= KEY)
//				break;
//			E[j + 1] = E[j];
//		}
//		E[j + 1] = KEY;
//
//	}
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}

// BS의 FUNCTION

//int BS(int E[], int L, int H, int K)
//{
//	int M;
//	for (;;) //true 무한루프와 동일 while(1)
//	{
//		if (L > H)//데이터가 1또는 2개 존재
//		{
//			return -99;
//		}
//		M = (L + H) / 2;
//		if (E[M] > K)
//		{
//			H = M - 1;
//			continue;
//		}
//		else
//			if (E[M] < K)
//			{
//				L = M + 1;
//				continue;
//			}
//			else
//				return M + 1;  //0부터 시작해서 1더해짐
//	}
//}
//void main()
//{
//	int L, H, K;
//	int E[] = { 11,15,20,22,35,38,39,42,43,45,100 };
//	cout << "찾는값 : " << 20 << "은 ";
//	cout<< BS(E, 0, 10, 20); //하한 0 상한 10 키값 20 배열 E
//	cout << "번째 있습니다. ";
//}


//
//int main() {
//	list<int> l;
//
//	int a = 1, i;
//	cout << "숫자를 입력하세요: (0 : 종료)" << endl;
//
//	while (true) {
//		cin >> a;
//		if (a == 0)
//			break;
//		l.push_back(a);
//	}
//
//	list<int>::iterator iter;
//	l.sort();
//
//	for (iter = l.begin(); iter != l.end(); iter++)
//		cout << setw(4) << *iter;
//
//	cout << endl << "정렬완료!" << endl;
//	cout << "찾고자 하는 값을 입력하세요 : ";
//	cin >> a;
//	iter = l.begin();
//	for (i = 0; iter != l.end(); iter++) {
//		if (*iter == a)
//			break;
//		i++;
//	}
//	if (iter == l.end())
//		cout << "찾고자 하는 값 " << a << "는 존재하지 않습니다." << endl;
//	else
//		cout << "찾고자 하는 값 " << a << "는 " << i + 1 << " 번째 방에 있습니다." << endl;
//
//}

void print(int tab[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << setw(5) << tab[i];
	}
	cout << endl;
}

int BS(int E[], int L, int H, int k) {
	int M;
	while (L <= H) { // 만약, L>H가 되면 -99를 리턴함
		M = (L + H) / 2;
		if (E[M] > k) {
			H = M - 1;
		}
		else if (E[M] < k) {
			L = M + 1;
		}
		else if (E[M] == k) {
			return M + 1;
		}
	}

	return -99;
}
void jung(int tab[], int n) {
	int key, j;

	for (int i = 1; i < n; i++) {  // 2번째 값부터 정렬을 시작. key 값 추출
		key = tab[i]; // temp= tab[1]로 시작
		j = i - 1;  //key값의 바로 앞에서부터 비교
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // 만약 j = 0이면 tab[1]에 tab[0]값을 넣어줌
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]에 temp=key값=tab[1]을 넣어줌.
		}
	}
}



void main() {

	int tab[50];
	int num, i = 0;
	int index;

	cout << "숫자를 입력하세요 (종료는 0)" << endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// 정렬
	jung(tab, i);
	cout << "정렬 후" << endl;
	print(tab, i);

	// 이분 검색
	cout << "찾고자 하는 값을 입력하세요 : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "찾고자 하는 숫자가 없네요" << endl;
	else cout << "찾고자 하는 숫자 " << num << " 은 " << index << "번 째에 있다" << endl;
}











































   
