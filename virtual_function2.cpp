#include <iostream>
using namespace std;

class Base
{
	int x;
	public :
	Base()
	{
		x = 100;
	}
	virtual void get_data()
	{
		cout<<"BASE :"<<x<<endl;
	}
};
class Derived:public Base
{
	int x;
	public :
	Derived()
	{
		x = 200;
	}
	void get_data()
	{
		cout<<"DERIVED :"<<x<<endl;
	}
};
int main()
{
	Base *bptr;
	Derived d1;
	bptr = &d1;
	bptr->get_data();
}

