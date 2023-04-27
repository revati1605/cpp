#include <iostream>
using namespace std;

class A
{
	public:
	virtual void test() = 0; //pure virtual class
};
class B : public A
{
	public:
	void test()
	{
		cout <<"test in derived"<<endl;
	}
};
int main()
{
	B obj;
	//obj.test();
	//	A obj;//cant create object of base class it is abstract class.
}



