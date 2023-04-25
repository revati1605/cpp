#include <iostream>
using namespace std;

class A
{
	public: int x ;
		A()
		{
			x=100;
		}
};
class B : public A
{
	public:int x;
	       B()
	       {
		 x =200;
	       }
};
int main()
{
	B obj;
	cout<<"x.b :"<<obj.x<<endl;
	cout<<"x.a :"<<obj.A::x<<endl;
}
