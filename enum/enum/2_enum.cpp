//형변환이 가능 : C++ 11버젼부터 가능

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
//	cout << "비교결과 : " << compresult << endl;
//}

enum middle_subject { kor, eng, mat };
enum high_subject { h_kor, h_eng, h_mat };
int main()
{
	middle_subject ms;
	ms = kor;
	cout << "1번학생과목" << ms << endl;
}
