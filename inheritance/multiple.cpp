#include <iostream>
using namespace std;
class A
{
	int x;
	public:
	A()
	{
		cout<<"constructor A"<<endl;
	}
	~A()
	{
		cout<<"Destructor A"<<endl;
	}
};
class B
{
	int y;
	public:
	B()
	{
		cout<<"constructor B"<<endl;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}
};
class C
{
	int z;
	public:
	C()
	{
		cout<<"constructor C"<<endl;
	}
	~C()
	{
		cout<<"Destructor C"<<endl;
	}
};
class D : public C , public B , public A
{
	int m;
	public:
	D()
	{
		cout<<"constructor D"<<endl;
	}
	~D()
	{
		cout<<"Destructor D"<<endl;
	}
};
int main()
{
	D obj;
	cout<<"size of D : "<<sizeof(D)<<endl;
}
