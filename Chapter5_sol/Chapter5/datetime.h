#pragma once
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

inline int cal_zodiac(int birthyear)
{
	int any = birthyear % 12;
	switch (any)
	{
	case 0:cout << "원숭이띠 입니다." << endl; break;
	case 1:cout << "닭띠 입니다." << endl; break;
	case 2:cout << "개띠 입니다." << endl; break;
	case 3:cout << "돼지띠 입니다." << endl; break;
	case 4:cout << "쥐띠 입니다." << endl; break;
	case 5:cout << "소띠 입니다." << endl; break;
	case 6:cout << "호랑이띠 입니다." << endl; break;
	case 7:cout << "토끼띠 입니다." << endl; break;
	case 8:cout << "용띠 입니다." << endl; break;
	case 9:cout << "뱀띠 입니다." << endl; break;
	case 10:cout << "말띠 입니다." << endl; break;
	case 12:cout << "양띠 입니다." << endl; break;

	}
	return any;
}

inline void calc_age(int year)
{
	time_t now;	//현재 시간 라이브러리
	struct tm mytime;
	now = time(NULL); //현재 시간을 초 단위로 바꾸기
	localtime_s(&mytime, &now);	// now 에 담긴 현재시간을 년, 월, 일, 초로 변환하여 mytime에 저장

	cout << "당신의 나이는 " << mytime.tm_year + 1900 - year + 1 << "세 입니다." << endl;;
	cout << "띠는 ";
}


inline void calc_day(int any)
{
	cout << "오늘의 운세 : ";
	switch (any)
	{
	case 0: cout << "원숭이 엉덩이는 빨간맛" << endl; break;
	case 1: cout << "오늘은 치킨이다" << endl; break;
	case 2: cout << "개같은 날의 오후" << endl; break;
	case 3: cout << "돼지고기 제육볶음" << endl; break;
	case 4: cout << "쥐잡아 먹었냐" << endl; break;
	case 5: cout << "소는 누가 키울거야" << endl; break;
	case 6: cout << "호랑이는 타이거" << endl; break;
	case 7: cout << "새수하러 왔다가 물만 먹고 가지요" << endl; break;
	case 8: cout << "용용 죽겠지" << endl; break;
	case 9: cout << "BAAAAAM!!" << endl; break;
	case 10:cout << "말이 많다" << endl; break;
	case 12:cout << "양심도 없다" << endl; break;
	}
}
