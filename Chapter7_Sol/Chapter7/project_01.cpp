#include <iostream>
using namespace std;

#define DEFAULT_FARE 1000

class Cperson
{
public:
	Cperson() {}
	virtual ~Cperson()
	{
		cout << "virtual ~Cperson()" << endl;
	}
	//��� ��� �������̽�(���� ���� �Լ�)
	virtual void Calcfare() = 0;
	virtual unsigned int Getfare()
	{
		return m_nfare;
	}

protected:
	unsigned int m_nfare = 0;
};

class Cbaby :public Cperson
{
public:
	//0~7��
	virtual void Calcfare()
	{
		m_nfare = 0;
	}
};

class Cchild :public Cperson
{
public:
	//8~13��
	virtual void Calcfare()
	{
		m_nfare = DEFAULT_FARE * 50 / 100;
	}
};

class Cteenager :public Cperson
{
public:
	//14~19��
	virtual void Calcfare()
	{
		m_nfare = DEFAULT_FARE * 75 / 100;
	}
};

class Cadult :public Cperson
{
public:
	//20~�̻�
	virtual void Calcfare()
	{
		m_nfare = DEFAULT_FARE;
	}
};

int main()
{
	Cperson* arrlist[3] = { 0 };
	int nAge = 0;

	for (auto& person : arrlist)
	{
		cout << "���̸� �Է��ϼ��� : ";
		cin >> nAge;
		if (nAge < 8)
		{
			person = new Cbaby;
		}
		else if (nAge > 8 && nAge < 14)
		{
			person = new Cchild;
		}
		else if (nAge > 14 && nAge < 20)
		{
			person = new Cteenager;
		}
		else
			person = new Cadult;
		person->Calcfare();
	}

	for (auto person : arrlist)
	{
		cout << person->Getfare() << " ��" << endl;
	}

	for (auto person : arrlist)
	{
		delete person;
	}

	return 0;
}















