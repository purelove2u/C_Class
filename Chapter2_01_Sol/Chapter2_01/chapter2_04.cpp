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
//	cout << "문자열을 입력하세요 ";
//	cin.getline(tab, 40);
//	cout << tab << endl;
//}
//void right()
//{
//	temp = tab[len - 1];//문자열의 끝값을 임시기억장소에 저장
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
//	input();//메서드
//	len = strlen(tab);
//	while (1)
//	{
//		lr = _getch();
//		if (lr == 'R' || lr == 'r')
//			right();//메서드
//		else if (lr == 'L' || lr == 'l')
//			left();//메서드
//		else
//			break;
//	}
//}

// 달팽이 배열
int main()
{
	int A[5][5], N = 0, S = 1, i = 0, J = -1, K = 5;
	while (1) {
		//행중심 0행
		for (int P = 0; P < K; P++) {
			N += 1;
			J = J + S;//s가 스위치 역할
			A[i][J] = N;
		}
		K = K - 1;//K가 5에서 4로 감소....
		if (K > 0) {
			//열중심 4열
			for (int P = 0; P < K; P++) {
				N += 1;
				i = i + S;
				A[i][J] = N;//J는 4열
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
