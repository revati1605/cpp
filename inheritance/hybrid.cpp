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
		cout<<"Desttructor A"<<endl;
	}
};
class B : public A
{
	int y;
	public :
	B()
	{
		cout<<"constructor B"<<endl;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}
};
class C : public B
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
class E 
{
	int m;
	public:
	E()
	{
		cout<<"Constructor E"<<endl;
	}
	~E()
	{
		cout<<"Destructor E"<<endl;
	}
};
class D : public C , public E
{
	int n;
	public:
	D()
	{
		cout<<"Constructor D"<<endl;
	}
	~D()
	{
		cout<<"Destructor D"<<endl;
	}
};

int main()
{
	C obj;
	cout<<"size of c : "<<sizeof(obj)<<endl;
	D obj1;
	cout<<"size of D:"<<sizeof(obj1)<<endl;

}


