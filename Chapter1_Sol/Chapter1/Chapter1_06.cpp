#include <iostream>

using namespace std;

void main()
{
	int kor, eng, tot, mok;
	double avg;
	cout << "�������� : ";
	cin >> kor;
	cout << "�������� : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok)
	{
	case 10:
		cout << "test";
		break;



	default:
		break;
	}

}