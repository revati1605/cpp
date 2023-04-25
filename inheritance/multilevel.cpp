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
int main()
{
	C obj;
	cout<<"size of c : "<<sizeof(obj)<<endl;
}


