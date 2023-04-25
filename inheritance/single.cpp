#include  <iostream>
using namespace std;
class Base
{
	int x;
	public:
	Base(){}
	Base(int a)
	{
		cout<<"Base constructor"<<endl;
		x =a;
	}
	void get_base()
	{
		cout<<"x = "<<x<<endl;
	}
	~Base()
	{
		cout<<"Base Destructor"<<endl;
	}
};
class Derived :public Base
{
	public : int y;
		 Derived(){}
		 Derived(int a , int b):Base(a)
		 {
			 cout<<"Derived constructor"<<endl;
			 y = b;
		 }
		 void get_derived()
		 {
			 cout <<"Y ="<<y<<endl;
		 }
		 ~Derived()
		 {
			 cout<<"Derived destructor"<<endl;
		 }
};
int main()
{
	Derived d1(100,200);
	d1.get_base();
	d1.get_derived();
}
