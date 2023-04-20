#include <iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void set_data()
	{
		x=10;
		y=20;
	}
	friend class B;
};
class B
{
	int x,y;
	public:
	void printobj(A a1)
	{
		cout<<a1.x <<" "<<a1.y<<endl;
	}
	void print1obj(A a1)
	{
		cout<<a1.x <<" "<<a1.y<<endl;
	}
	void print2obj(A a1)
	{
		cout<<a1.x <<" "<<a1.y<<endl;
	}
};
int main()
{
	A a1;
	B b1;
	a1.set_data();
	b1.printobj(a1);
	b1.print1obj(a1);
	b1.print2obj(a1);
}
