#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//int ary1[4] = { 1, 2, 3, 4 };      //1차원 배열의 선언과 초기화
	//int ary2[4] = { 11, 12, 13, 14 };
	//int ary3[4] = { 21, 22, 23, 24 };

	//int *pary[3] = { ary1,ary2,ary3 };
	////{(1, 2, 3, 4), (11, 12, 13, 14), (21, 22, 23, 24)}
	//int i, j;
	//
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 4; j++) {
	//		cout << setw(4) << pary[i][j];
	//	}
	//	cout << endl;
	//}

	void swap_ptr(char **ppa,char **ppb);//프로토타입이므로 함수선언
	    
	    char a[] = "success";
		//char a[] = { 'H','E','l','l','o','\0' };
		char *pa = a;
		char b[]= "failuer";
	
		
		char *pb = b;
	
		cout << "pa -> " << pa << "/  pb ->" << pb << endl;
		//swap_ptr(&pa, &pb);
		cout << "pa -> " << pa << "/ pb ->" << pb << endl;

	return 0;
}
//char *ppr
//char a[];
//ppr=a  --> *ppr

//
void swap_ptr(char **ppa, char **ppb)
{
	char *pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;

	
}

