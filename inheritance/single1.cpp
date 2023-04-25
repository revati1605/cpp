#include  <iostream>
using namespace std;
class Base
{
	int x;
	public:
	Base()
	{
		cout<<"Base constructor"<<endl;
		x =100;
	}
	~Base()
	{
		cout<<"Base Destructor"<<endl;
	}
};
class Derived :public Base
{
	public : int y;
		 Derived()
		 {
			 cout<<"Derived constructor"<<endl;
			 y = 200;
		 }

		 ~Derived()
		 {
			 cout<<"Derived destructor"<<endl;
		 }
};
int main()
{
	Derived d1;
	Base b1;
}
