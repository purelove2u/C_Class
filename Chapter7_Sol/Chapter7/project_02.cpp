#include <iostream>
using namespace std;


//������
class mammaliar
{
public:
	mammaliar()
	{
		cout << "������ Ŭ���� �Դϴ�." << endl;
	}
	void breath()
	{
		cout << "��� ���� ����" << endl;
	}
	void walk()
	{
		cout << "�ٸ��� �ȴ°�" << endl;
	}
	void eat(int a)
	{
		teeth = a;
		cout << teeth << " ���� �̻��� ������ �ô´�. " << endl;
	}

protected:
	int teeth;
	string haircolor;
};

// ���
class pisces 
{
public:
	pisces()
	{
		cout << "��� Ŭ�����Դϴ�." << endl;
	}
	void breath()
	{
		cout << "�ư��̷� ���� ����" << endl;
	}
	void swim(int s)
	{
		size = s;
		cout << "������ " << size << "cm�� ����� ģ��" << endl;
	}
protected:
	int size;
};


//��
class whale :public mammaliar, public pisces
{
public:
	whale()
	{
		cout << "�� Ŭ���� �Դϴ�." << endl;
	}
};

int main()
{
	whale dolphin;
	dolphin.eat(25);
	dolphin.swim(200);
	dolphin.pisces::breath();
}

