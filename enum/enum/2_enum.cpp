//����ȯ�� ���� : C++ 11�������� ����

#include<iostream>
using namespace std;

//enum city:short{ c_seoul, c_pusan, c_tokyo, c_osaka, c_newyotk };
//enum metro { m_seoul = 10, m_tokyo = 0xffffff, m_newyork = 1234560};
//
//int main()
//{
//	metro m = m_tokyo;
//	bool compresult = (m >= c_pusan);
//	cout << m << endl;
//	cout << "�񱳰�� : " << compresult << endl;
//}

enum middle_subject { kor, eng, mat };
enum high_subject { h_kor, h_eng, h_mat };
int main()
{
	middle_subject ms;
	ms = kor;
	cout << "1���л�����" << ms << endl;
}
