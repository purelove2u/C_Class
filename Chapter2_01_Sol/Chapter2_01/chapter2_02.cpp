#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include<string>
#include <list>

using namespace std;

// 2���� �迭 ȸ��
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
//		cout << "���α׷� ���� �Ͻ÷���  0�� ��������" << endl;
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

// �� �� 2���� �迭

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
//		cout << "���ڸ� �Է� �ϼ��� : ";
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

// ����
//1.��������
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

//2.��������

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
//cout << "���ڸ� �Է��ϼ��� : ";
//// �Է¹ޱ�
//for (i = 0; i < 5; i++)
//	cin >> tab[i];
////����
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

// ��������
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
//	for (i = 1; i < 5;i++)//2��° ������ ���Ľ��� key�� ����
//	{
//		temp = tab[i];
//		j = i - 1;//key���� �ٷ� �տ����� ��
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
//		//Ű�� ��ġ�� �ι�°���� �����ؾ� ù��°���� �񱳰� ���۵�
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

// BS�� FUNCTION

//int BS(int E[], int L, int H, int K)
//{
//	int M;
//	for (;;) //true ���ѷ����� ���� while(1)
//	{
//		if (L > H)//�����Ͱ� 1�Ǵ� 2�� ����
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
//				return M + 1;  //0���� �����ؼ� 1������
//	}
//}
//void main()
//{
//	int L, H, K;
//	int E[] = { 11,15,20,22,35,38,39,42,43,45,100 };
//	cout << "ã�°� : " << 20 << "�� ";
//	cout<< BS(E, 0, 10, 20); //���� 0 ���� 10 Ű�� 20 �迭 E
//	cout << "��° �ֽ��ϴ�. ";
//}


//
//int main() {
//	list<int> l;
//
//	int a = 1, i;
//	cout << "���ڸ� �Է��ϼ���: (0 : ����)" << endl;
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
//	cout << endl << "���ĿϷ�!" << endl;
//	cout << "ã���� �ϴ� ���� �Է��ϼ��� : ";
//	cin >> a;
//	iter = l.begin();
//	for (i = 0; iter != l.end(); iter++) {
//		if (*iter == a)
//			break;
//		i++;
//	}
//	if (iter == l.end())
//		cout << "ã���� �ϴ� �� " << a << "�� �������� �ʽ��ϴ�." << endl;
//	else
//		cout << "ã���� �ϴ� �� " << a << "�� " << i + 1 << " ��° �濡 �ֽ��ϴ�." << endl;
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
	while (L <= H) { // ����, L>H�� �Ǹ� -99�� ������
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

	for (int i = 1; i < n; i++) {  // 2��° ������ ������ ����. key �� ����
		key = tab[i]; // temp= tab[1]�� ����
		j = i - 1;  //key���� �ٷ� �տ������� ��
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // ���� j = 0�̸� tab[1]�� tab[0]���� �־���
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]�� temp=key��=tab[1]�� �־���.
		}
	}
}



void main() {

	int tab[50];
	int num, i = 0;
	int index;

	cout << "���ڸ� �Է��ϼ��� (����� 0)" << endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// ����
	jung(tab, i);
	cout << "���� ��" << endl;
	print(tab, i);

	// �̺� �˻�
	cout << "ã���� �ϴ� ���� �Է��ϼ��� : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "ã���� �ϴ� ���ڰ� ���׿�" << endl;
	else cout << "ã���� �ϴ� ���� " << num << " �� " << index << "�� °�� �ִ�" << endl;
}











































   
