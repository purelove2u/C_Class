#include <iostream>

using namespace std;

void main()
{
	int kor, eng, tot, mok;
	double avg;
	cout << "국어점수 : ";
	cin >> kor;
	cout << "영어점수 : ";
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