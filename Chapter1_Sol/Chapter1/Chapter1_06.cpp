#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	//int kor, eng, tot, mok;
	//double avg;
	//cout << "�������� : ";
	//cin >> kor;
	//cout << "�������� : ";
	//cin >> eng;

	//tot = kor + eng;
	//avg = tot / 2.0;
	//mok = avg / 10;

	//switch (mok)
	//{
	//case 10:
	//	cout << "���� A+";
	//	break;
	//case 9:
	//	cout << "���� A";
	//	break;
	//case 8:
	//	cout << "���� B";
	//	break;
	//case 7:
	//	cout << "���� C";
	//	break;
	//case 6:
	//	cout << "���� D";
	//	break;
	//default:
	//	cout << "���� F";
	//	break;
	//}

	//int a, b;
	//char op;
	//cout << "�� ���� �Է��ϼ��� : ";
	//cin >> a >> b;
	//cout << "�����ڸ� �Է��ϼ���(+, -, *, /, %) : ";
	//cin >> op;

	//switch (op)
	//{
	//case '+':
	//	cout << "a + b = " << a + b;
	//	break;
	//case '-':
	//	cout << "a - b = " << a - b;
	//	break;
	//case '*':
	//	cout << "a * b = " << a * b;
	//	break;
	//case '/':
	//	cout << "a / b = " << a / b;
	//	break;
	//case '%':
	//	cout << "a % b = " << a % b;
	//	break;
	//default:
	//	cout << "�߸��� �����ڸ� �Է��Ͽ����ϴ�.";
	//	break;
	//}

	//int year, op;
	//cout << "������ �Է��ϼ��� : ";
	//cin >> year;
	//op = year % 4 == 0 && (!(year % 100 == 0) || year % 400) == 0;

	//switch (op)
	//{
	//	case 1:
	//		cout << year << "���� �����Դϴ�.";
	//		break;
	//	case 0:
	//		cout << year << "���� ������ �ƴմϴ�.";
	//		break;
	//	default:
	//		break;
	//}


	//int han;
	//han = 1;
	//while (han < 5)
	//{
	//	cout << "Good" << endl;
	//	han++;
	//}

	//int n, sum;
	//n = 1;
	//sum = 0;
	//while (n <= 100)
	//{
	//	sum = sum + n;
	//	n++;
	//}
	//cout << "1 - 100������ �� : " << sum;

	//int i, sum = 0;
	//i = 1;
	//do
	//{
	//	sum += i;
	//	i++;
	//} while (i <= 100);
	//	cout << "do ~ while = :" << sum << endl;


	//int i, sum = 0;
	//i = 1;
	//for (i = 1; i <= 100; i++) 
	//	sum += i;
	//cout << "for : " << sum << endl;
	//


	//#include <iomanip.h> ����� ����
	//int a, b;
	//cout << "���� for��" << endl;
	//for (a = 1; a <= 2; a++)
	//	for (b = 1; b <= 3; b++)
	//		cout << "a= " << a << setw(5) << "b= " << b << endl;
	//cout << "��";

	//int a, b;
	//for (int a = 1; a <= 9; a++)
	//	for (int b = 1; b <= 9; b++)
	//		cout << a << " X " << b << " = " << a * b << endl;
	
	//int a, b;
	//cout << "���ϴ� ���� �Է��ϼ��� : ";
	//cin >> a;
	//for (b = 1; b <= 9; b++)
	//	cout << a << " X " << b << " = " << a * b << endl;

	
	//char num;
	//while (1)
	//{
	//	cout << "���ڸ� �Է��ϼ��� : ";
	//	cin >> num;
	//	if (num >= 'A' && num <= 'Z') //65~92
	//	{
	//		cout << "�����Է��Դϴ�." << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "�߸� �Է��ϼ̽��ϴ�. �빮�ڸ� �Է��ϼ���." << endl;
	//		continue;
	//	}
	//}


	//int n;
	//while (1)
	//{
	//	cout << "���ڸ� �Է��ϼ��� : ";
	//	cin >> n;
	//	if (n == EOF)	// -1
	//	{
	//		cout << "����˴ϴ�." << endl;
	//		break;
	//	}
	//	else
	//		continue;
	//}


	//int a, b;
	//for (int a = 1; a <= 9; a++) 
	//{
	//	for (int b = 2; b <= 9; b++)
	//	{
	//		cout << b << "X" << a << "=" << setw(2) << b * a << "  ";
	//	}
	//	cout << endl;
	//}


	/*int asum = 0, bsum = 0, i = 0, sw = 0;
	while(i < 100){
		i = i + 1;
		if (sw == 0)
		{
			asum = asum + i;
			sw = 1;
		}
		else if(sw == 1)
		{	
			bsum = bsum + i;
			sw = 0;
		}
	} 
	cout << "Ȧ���� �� : " << asum << endl;
	cout << "¦���� �� : " << bsum << endl;
*/

	int sum = 0, i = 0, sw = 1;
	while (i < 100) {
		i = i + 1;
		if (sw == 1)
		{
			sum = sum + i;
			sw = -1;
		}
		else if (sw == -1)
		{
			sum = sum - i;
			sw = 1;
		}
	}
	cout << "ȥ�� ������ �� : " << sum << endl;
}






