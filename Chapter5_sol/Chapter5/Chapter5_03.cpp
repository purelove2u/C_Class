#include "datetime.h"

int main()
{
	cout << "����� �¾ ������ �Է��ϼ��� : ";
	int birthyear;
	cin >> birthyear;
	calc_age(birthyear);

	int any = cal_zodiac(birthyear);
	calc_day(any);
	system("pause");
}
