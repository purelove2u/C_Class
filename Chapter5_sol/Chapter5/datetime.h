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
	case 0:cout << "�����̶� �Դϴ�." << endl; break;
	case 1:cout << "�߶� �Դϴ�." << endl; break;
	case 2:cout << "���� �Դϴ�." << endl; break;
	case 3:cout << "������ �Դϴ�." << endl; break;
	case 4:cout << "��� �Դϴ�." << endl; break;
	case 5:cout << "�Ҷ� �Դϴ�." << endl; break;
	case 6:cout << "ȣ���̶� �Դϴ�." << endl; break;
	case 7:cout << "�䳢�� �Դϴ�." << endl; break;
	case 8:cout << "��� �Դϴ�." << endl; break;
	case 9:cout << "��� �Դϴ�." << endl; break;
	case 10:cout << "���� �Դϴ�." << endl; break;
	case 12:cout << "��� �Դϴ�." << endl; break;

	}
	return any;
}

inline void calc_age(int year)
{
	time_t now;	//���� �ð� ���̺귯��
	struct tm mytime;
	now = time(NULL); //���� �ð��� �� ������ �ٲٱ�
	localtime_s(&mytime, &now);	// now �� ��� ����ð��� ��, ��, ��, �ʷ� ��ȯ�Ͽ� mytime�� ����

	cout << "����� ���̴� " << mytime.tm_year + 1900 - year + 1 << "�� �Դϴ�." << endl;;
	cout << "��� ";
}


inline void calc_day(int any)
{
	cout << "������ � : ";
	switch (any)
	{
	case 0: cout << "������ �����̴� ������" << endl; break;
	case 1: cout << "������ ġŲ�̴�" << endl; break;
	case 2: cout << "������ ���� ����" << endl; break;
	case 3: cout << "������� ��������" << endl; break;
	case 4: cout << "����� �Ծ���" << endl; break;
	case 5: cout << "�Ҵ� ���� Ű��ž�" << endl; break;
	case 6: cout << "ȣ���̴� Ÿ�̰�" << endl; break;
	case 7: cout << "�����Ϸ� �Դٰ� ���� �԰� ������" << endl; break;
	case 8: cout << "��� �װ���" << endl; break;
	case 9: cout << "BAAAAAM!!" << endl; break;
	case 10:cout << "���� ����" << endl; break;
	case 12:cout << "��ɵ� ����" << endl; break;
	}
}
