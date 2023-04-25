#include <iostream>
using namespace std;

class A
{
	 int x ;
	public:
		A()
		{
			x=100;
		}
		void get_data()
		{
			cout<<"BASE : "<<x<<endl;
		}
};
class B : public A
{
	int x;
	public:
	       B()
	       {
		 x =200;
	       }
	       void get_data()
	       {
		       cout<<"DERIVED :"<<x<<endl;
	       }
};
int main()
{
	B obj;
//	cout<<"x.b :"<<obj.x<<endl;
//	cout<<"x.a :"<<obj.A::x<<endl;
	obj.get_data();
	obj.A::get_data();
}
