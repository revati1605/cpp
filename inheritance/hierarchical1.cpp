#include <iostream>
using namespace std;

class A
{
int x;
	public:
A(int a)
	{
		cout<<"constructor A"<<endl;
		x = a;
	}
~A()
{
	cout<<"Destructor A"<<endl;
}
void get_A()
{
	cout<<"x :"<<x<<endl;
}
};

class B : public A
{
	int y;
	public :
	B(int a,int b ):A(a)
	{
		cout<<"Constructor B"<<endl;
		 y = b;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}
	void get_B()
	{
		cout<<"y :"<<y<<endl;
	}
};


class C : public A
{
	int z;
	public:
	C(int a ,int c):A(a)
	{
		cout<<"Constructor C"<<endl;
		z = c;
	}
	~C()
	{
		cout<<"Destructor C"<<endl;
	}
	void get_C()
	{
		cout<<"z :"<<z<<endl;

}
};

int main()
{
	C obj(10,20);
	obj.get_A();
	obj.get_C();
	B obj1(20,30);
	obj1.get_A();
	obj1.get_B();
}
