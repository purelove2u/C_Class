#include "datetime.h"

int main()
{
	cout << "당신이 태어난 연도를 입력하세요 : ";
	int birthyear;
	cin >> birthyear;
	calc_age(birthyear);

	int any = cal_zodiac(birthyear);
	calc_day(any);
	system("pause");
}
