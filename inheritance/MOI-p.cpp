#include <iostream>
using namespace std;
class Base
{
	public:int x;
	       void set_datax()
	       {
		       cout<<"enter value for x"<<endl;
		       cin>>x;
	       }
	       void get_datax()
	       {
		       cout<<x<<endl;
	       }
};
class Derived :public Base
{
	public:int y;
	       void set_datay()
	       {
		       cout<<"enter value for y"<<endl;
		       cin>>y;
	       }
	       void get_datay()
	       {
		       cout<<y<<endl;
	       }
};

int main()
{
	Base b1;
	Derived d1;
	d1.set_datax();
	d1.get_datax();
	d1.set_datay();
	d1.get_datay();
	b1.set_datax();
	b1.get_datax();
//	b1.set_datay(); //cant access
//	b1.get_datay(); //cant access
}

