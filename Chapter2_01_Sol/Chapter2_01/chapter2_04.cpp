#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
using namespace std;

//int i, len;
//char tab[40], lr, temp;
//
//void input()
//{
//	cout << "���ڿ��� �Է��ϼ��� ";
//	cin.getline(tab, 40);
//	cout << tab << endl;
//}
//void right()
//{
//	temp = tab[len - 1];//���ڿ��� ������ �ӽñ����ҿ� ����
//	for (i = len - 1; i > 0; i--)
//		tab[i] = tab[i - 1];
//	tab[i] = temp;
//	cout << tab << endl;
//}
//
//void left()
//{
//	temp = tab[0];
//	for (i = 0; i < len - 1; i++)
//		tab[i] = tab[i + 1];
//	tab[i] = temp;
//	cout << tab << endl;
//}
//void main()
//{
//	input();//�޼���
//	len = strlen(tab);
//	while (1)
//	{
//		lr = _getch();
//		if (lr == 'R' || lr == 'r')
//			right();//�޼���
//		else if (lr == 'L' || lr == 'l')
//			left();//�޼���
//		else
//			break;
//	}
//}

// ������ �迭
int main()
{
	int A[5][5], N = 0, S = 1, i = 0, J = -1, K = 5;
	while (1) {
		//���߽� 0��
		for (int P = 0; P < K; P++) {
			N += 1;
			J = J + S;//s�� ����ġ ����
			A[i][J] = N;
		}
		K = K - 1;//K�� 5���� 4�� ����....
		if (K > 0) {
			//���߽� 4��
			for (int P = 0; P < K; P++) {
				N += 1;
				i = i + S;
				A[i][J] = N;//J�� 4��
			}
			S *= -1;
		}
		else
			break;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(3) << A[i][j] << " ";
		}
		cout << endl;
	}
}
