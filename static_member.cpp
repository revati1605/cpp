#include <iostream>
using namespace std;
class A
{
	int x;
	static int y;
	A()
	{
		cout<<"Constructor"<<endl;
	}
	public:
	static void create_object()
	{
		A obj;
		obj.get_data();
	}
	void get_data()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int A::y;
int main()
{
	A::create_object();
}

