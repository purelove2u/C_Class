#include <iostream>

using namespace std;



int calc_weight(int a)
{
	return a - 100;
}


double calc_weight(int a, int b, double c = 0.9)
{
	return (a - b) * c;
}


int main()
{
	int b = 100;
	double r = 0.9;
	cout << "Ű�� �Է��ϼ��� : ";
	int h;
	cin >> h;

	if (h >= 150)
	{
		cout << "ǥ�� ü���� : " << calc_weight(h, b, r); // ������ �⺻���� �����ϸ� �Ű������� �ν����� ����
	}
	else
		cout << "ǥ�� ü���� : " << calc_weight(h);
	
	return 0;
}

