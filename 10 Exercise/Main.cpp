#include<iostream>
#include<Windows.h>
using namespace std;


//���� � ���� ���� ��������
//�� ���� �� ����� ������ ���� �� �������� ��������
class B
{
	char* string;
public:
	B() {}
	B(const B& cpy) { cout << "B copy constructor\n"; }
	B& operator=(const B& cpy) { cout << "B copy operator\n"; }
	~B() {}
	//����������(������ ���������) + ����������� � ���������. �� safe � �� �� �� ��������
	B(const char* par1) {}

	//������ � ������
	//��� ������� �� char* : 4 ���� ��� � strcpy (��� �� ������� � 5 ���� � ��)
	//Note: �� ���������� const ��� ��������

	//���� const ������ ��������� obj
	friend istream& operator>>(istream& i, B& obj)
	{
		//���������� �����
		char buffer[256];
		i >> buffer;
		setString1...
		i >> buffer;
		setString2...

		return i;
	}

	//��� const ������ �� ��������� obj ��� ��������
	friend ostream& operator<<(ostream& o, const B& obj)
	{
		o << obj.asda;
	
		return o;
	}

};

// ���� ��� ���� ���� ��������
//�� ���� ���� �� �������� copy constructor, copy operator, destructor
class C
{
public:
	C() {}
	//��������� constructor, copy operator, destructor
	//����������(������ ���������) + ����������� � ���������. �� safe � �� �� �� ��������
	C(...) {}

	//������ + ������
};

//����������� �� ������ �� 1 ����. ��� ������������� ���� �� 1 ���� �� � ��-��������
//����� ��� ���� ���� ��������
//�� ����������� public
class A : public B, C ...
{
	char* strFromA;
public:
	A() 
		: B() , C() ...
	{}
	//��������� ��� copy constructor 
	A(const A& cpy) 
		: B(copy) , C(copy) ...
	{
		setStrFromA(cpy.strFromA)
		...
	}
	//��������� ��� copy operator
	A& operator=(const A& cpy) 
	{
		if (this != &copy)
		{
			B::operator=(cpy);
			C::operator=(cpy);
			....
		}
	}
	~A() {}

	A(parameters)
		: 
};



int main()
{
	A a;
	A b(a);

	system("pause");
	return 0;
}