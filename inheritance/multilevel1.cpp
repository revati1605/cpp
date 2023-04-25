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
		cout<<"Desttructor A"<<endl;
	}
	void get_A()
	{
		cout <<"x : "<<x <<endl;
	}
};
class B : public A
{
	int y;
	public :
	B(int a, int b):A(a)
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
		cout<< "y : "<<y<<endl;
	}
};
class C : public B
{
	int z;
	public:
	C(int a ,int b, int c):B(a,b)
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
		cout <<"z : "<<z<<endl;
	}
};
int main()
{
	C obj(100,200,300);
	cout<<"size of c : "<<sizeof(obj)<<endl;
	obj.get_A();
	obj.get_B();
	obj.get_C();
}


