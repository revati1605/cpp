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

class B : public A
{
	int y;
	public :
	B()
	{
		cout<<"Constructor B"<<endl;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}
};


class C : public A
{
	int z;
	public:
	C()
	{
		cout<<"Constructor C"<<endl;
	}
	~C()
	{
		cout<<"Destructor C"<<endl;
	}
};

int main()
{
	C obj;
	B obj1;
}
