#include <iostream>
using namespace std;

class Base
{
	public: int x = 2,y=3;
};

class Derived : public Base
{
	public:	int m=4,n=5;
};

int main()
{
	Base b1;
	Derived d1;
	cout<<b1.x << " "<<b1.y<<endl;
	cout<<d1.m<<" "<<d1.n<<endl;
	cout<<d1.x<< " " <<d1.y<<endl;
}
