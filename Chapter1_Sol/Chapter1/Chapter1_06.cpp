#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//void main()
//{
//	//int kor, eng, tot, mok;
//	//double avg;
//	//cout << "�������� : ";
//	//cin >> kor;
//	//cout << "�������� : ";
//	//cin >> eng;
//
//	//tot = kor + eng;
//	//avg = tot / 2.0;
//	//mok = avg / 10;
//
//	//switch (mok)
//	//{
//	//case 10:
//	//	cout << "���� A+";
//	//	break;
//	//case 9:
//	//	cout << "���� A";
//	//	break;
//	//case 8:
//	//	cout << "���� B";
//	//	break;
//	//case 7:
//	//	cout << "���� C";
//	//	break;
//	//case 6:
//	//	cout << "���� D";
//	//	break;
//	//default:
//	//	cout << "���� F";
//	//	break;
//	//}
//
//	//int a, b;
//	//char op;
//	//cout << "�� ���� �Է��ϼ��� : ";
//	//cin >> a >> b;
//	//cout << "�����ڸ� �Է��ϼ���(+, -, *, /, %) : ";
//	//cin >> op;
//
//	//switch (op)
//	//{
//	//case '+':
//	//	cout << "a + b = " << a + b;
//	//	break;
//	//case '-':
//	//	cout << "a - b = " << a - b;
//	//	break;
//	//case '*':
//	//	cout << "a * b = " << a * b;
//	//	break;
//	//case '/':
//	//	cout << "a / b = " << a / b;
//	//	break;
//	//case '%':
//	//	cout << "a % b = " << a % b;
//	//	break;
//	//default:
//	//	cout << "�߸��� �����ڸ� �Է��Ͽ����ϴ�.";
//	//	break;
//	//}
//
//	//int year, op;
//	//cout << "������ �Է��ϼ��� : ";
//	//cin >> year;
//	//op = year % 4 == 0 && (!(year % 100 == 0) || year % 400) == 0;
//
//	//switch (op)
//	//{
//	//	case 1:
//	//		cout << year << "���� �����Դϴ�.";
//	//		break;
//	//	case 0:
//	//		cout << year << "���� ������ �ƴմϴ�.";
//	//		break;
//	//	default:
//	//		break;
//	//}
//
//
//	//int han;
//	//han = 1;
//	//while (han < 5)
//	//{
//	//	cout << "Good" << endl;
//	//	han++;
//	//}
//
//	//int n, sum;
//	//n = 1;
//	//sum = 0;
//	//while (n <= 100)
//	//{
//	//	sum = sum + n;
//	//	n++;
//	//}
//	//cout << "1 - 100������ �� : " << sum;
//
//	//int i, sum = 0;
//	//i = 1;
//	//do
//	//{
//	//	sum += i;
//	//	i++;
//	//} while (i <= 100);
//	//	cout << "do ~ while = :" << sum << endl;
//
//
//	//int i, sum = 0;
//	//i = 1;
//	//for (i = 1; i <= 100; i++) 
//	//	sum += i;
//	//cout << "for : " << sum << endl;
//	//
//
//
//	//#include <iomanip.h> ����� ����
//	//int a, b;
//	//cout << "���� for��" << endl;
//	//for (a = 1; a <= 2; a++)
//	//	for (b = 1; b <= 3; b++)
//	//		cout << "a= " << a << setw(5) << "b= " << b << endl;
//	//cout << "��";
//
//	//int a, b;
//	//for (int a = 1; a <= 9; a++)
//	//	for (int b = 1; b <= 9; b++)
//	//		cout << a << " X " << b << " = " << a * b << endl;
//	
//	//int a, b;
//	//cout << "���ϴ� ���� �Է��ϼ��� : ";
//	//cin >> a;
//	//for (b = 1; b <= 9; b++)
//	//	cout << a << " X " << b << " = " << a * b << endl;
//
//	
//	//char num;
//	//while (1)
//	//{
//	//	cout << "���ڸ� �Է��ϼ��� : ";
//	//	cin >> num;
//	//	if (num >= 'A' && num <= 'Z') //65~92
//	//	{
//	//		cout << "�����Է��Դϴ�." << endl;
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		cout << "�߸� �Է��ϼ̽��ϴ�. �빮�ڸ� �Է��ϼ���." << endl;
//	//		continue;
//	//	}
//	//}
//
//
//	//int n;
//	//while (1)
//	//{
//	//	cout << "���ڸ� �Է��ϼ��� : ";
//	//	cin >> n;
//	//	if (n == EOF)	// -1
//	//	{
//	//		cout << "����˴ϴ�." << endl;
//	//		break;
//	//	}
//	//	else
//	//		continue;
//	//}
//
//
//	//int a, b;
//	//for (int a = 1; a <= 9; a++) 
//	//{
//	//	for (int b = 2; b <= 9; b++)
//	//	{
//	//		cout << b << "X" << a << "=" << setw(2) << b * a << "  ";
//	//	}
//	//	cout << endl;
//	//}
//
//
//	/*int asum = 0, bsum = 0, i = 0, sw = 0;
//	while(i < 100){
//		i = i + 1;
//		if (sw == 0)
//		{
//			asum = asum + i;
//			sw = 1;
//		}
//		else if(sw == 1)
//		{	
//			bsum = bsum + i;
//			sw = 0;
//		}
//	} 
//	cout << "Ȧ���� �� : " << asum << endl;
//	cout << "¦���� �� : " << bsum << endl;
//*/
//
//	/*int sum = 0, i = 0, sw = 1;
//	while (i < 100) {
//		i = i + 1;
//		if (sw == 1)
//		{
//			sum = sum + i;
//			sw = -1;
//		}
//		else if (sw == -1)
//		{
//			sum = sum - i;
//			sw = 1;
//		}
//	}
//	cout << "ȥ�� ������ �� : " << sum << endl;
//*/
//
//
//	//int i, j;
//	//for (i = 1; i <= 9; i++)
//	//{
//	//	for (j = 2; j <= 9; j++)
//	//	{
//	//		cout << setw(4) << j << "*" << i << "=" << setw(2) << i * j;
//	//	}
//	//	cout << endl;
//	//}
//
//}

	//	 �Ҽ� �Ǻ���
//void main()
//{
//	int n, flag = 0, i;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//	for (i = 2; i < n; i++)
//	{
//		if ((n%i) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << "�Ҽ��Դϴ�." << endl;
//	else
//		cout << "�Ҽ��� �ƴմϴ�." << endl;
//
//}


// �������� �̿��� �Ҽ� �Ǻ��� :  sqrt()
//
//void main()
//{
//	int n, flag = 0, i, sq;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//	sq = sqrt(n);
//	cout << "�м����� : " << sq << endl;
//	for (i = 2; i < sq; i++)
//	{
//		if ((sq%i) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << "�Ҽ��Դϴ�." << endl;
//	else
//		cout << "�Ҽ��� �ƴմϴ�." << endl;
//}


// 1���� 100���� �Ҽ� �߿� ���� ū �Ҽ� ã��
// P : �Ҽ� �� ���� ū ���� ���� ����
// N : 3���� 100���� ���ϴ� �������� ���� ����
// M : sqrt(N)�� ���� ����
// i : ������
// R : ���� ������

//void main()
//{
//	int P = 2, N = 3, M, i=2, R;
//	while (N <= 100)
//	{
//		M = int(sqrt(double(N)));
//
//		while (i <= M)
//		{
//			R = M % i;
//			if (R == 0)
//			{
//				N = N + 1;
//			}
//			else {
//				i = i + 1;
//				P = N;;
//			}
//		}
//	}
//	cout << P << endl;
//}
 
//void main()
//{
//	int n = 100, flag = 0, i, sq;
//	sq = sqrt(n);
//	while (n == 2)
//	{
//		for (i = 2; i < sq; i++)
//		{
//			if ((sq%i) == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << n << endl;
//			break;
//		}
//		n--;
//	}
//}


//void main()
//{
//	int u, v, gcm, lcm, m, n;
//	cout << "�� ���� �Է��ϼ��� : ";
//	cin >> u >> v;
//	m = u;
//	n = v;
//	while (m != n)
//	{
//		if (m > n)
//		{
//			m = m - n;
//		}
//		else
//			n = n - m;
//	}
//	gcm = m;
//	lcm = (u*v) / gcm;
//	cout << "GCM" << setw(5) << gcm << endl;
//	cout << "LCM" << setw(5) << lcm << endl;
//}



// ���� �� ��.

//void main()
//{
//	char mun;
//	int i;
//	cout << "���� �Է� : ";
//	cin >> mun;
//	while (mun < 65 or mun > 90)
//	{
//		cout << "�빮�ڸ� �Է��϶� : ";
//		cin >> mun;
//	}
//	for (i = 1; i <= 26; i++)
//	{
//		cout << mun << " ";
//		mun = mun + 1;
//		if (mun > 90)
//		{
//			break;
//		}
//	}
//	mun = 'A';
//	for (int j = 0;j < 26-i; j++) {
//		cout << mun << " ";
//		mun++;
//	}
//}


// ���.

//void main()
//{
//	char mun, alp;
//	int i;
//	cout << "���� �Է� : ";
//	while (true)
//	{
//		cin >> mun;
//		if (mun >= 'A' && mun <= 'Z')
//		{
//			for (i = 1; i <= 26; i++)
//			{
//				alp = mun++;
//				cout << setw(2) << alp;
//				if (mun > 'Z')
//				{
//					mun = mun - 26;
//				}
//			}
//			cout << endl;
//			break;
//		}
//		else
//		{
//			cout << "�빮�� �Է� : ";
//			continue;
//		}
//	}
//}











