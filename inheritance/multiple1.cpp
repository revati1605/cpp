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
		cout<<"x  :"<<x<<endl;
	}
};
class B
{
	int y;
	public:
	B(int b)
	{
		cout<<"constructor B"<<endl;
		y = b;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}
	void get_B()
	{
		cout<<"y  :"<<y<<endl;
	}
};
class C
{
	int z;
	public:
	C(int c)
	{
		cout<<"constructor C"<<endl;
		z = c;
	}
	~C()
	{
		cout<<"Destructor C"<<endl;
	}
	void get_C()
	{
		cout<<"z  :"<<z<<endl;
	}
};
class D : public A , public B , public C
{
	int m;
	public:
	D(int a , int b,int c,int d):A(a),B(b),C(c)
	{
		cout<<"constructor D"<<endl;
		m = d;
	}
	~D()
	{
		cout<<"Destructor D"<<endl;
	}
	void get_D()
	{
		cout<<"m  :"<<m<<endl;
	}
};
int main()
{
	D obj(10,20,30,40);
	cout<<"size of D : "<<sizeof(D)<<endl;
	obj.get_D();
	obj.get_C();
	obj.get_B();
	obj.get_A();
}
