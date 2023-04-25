#include <iostream>
using namespace std;

class A
{
	int x;
	public:
	A(int a)
	{
		cout<<"constructor A"<<endl;
		x= a;
	}
	~A()
	{
		cout<<"Desttructor A"<<endl;
	}
	void get_A()
{
        cout<<"x :"<<x<<endl;
}


};
class B : public A
{
	int y;
	public :
	B(int a ,int b): A(a)
	{
		cout<<"constructor B"<<endl;
		y = b;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}
	void get_B()
{
        cout<<"y :"<<y<<endl;
}


};
class C : public B
{
	int z;
	public:
	C(int a,int b,int c):B(a,b)
	{
		cout<<"constructor C"<<endl;
		z = c;
	}
	~C()
	{
		cout<<"Destructor C"<<endl;
	}
	void get_C()
{
        cout<<"z :"<<z<<endl;
}


};
class E 
{
	int n;
	public:
	E(int e)
	{
		cout<<"Constructor E"<<endl;
		n = e;
	}
	~E()
	{
		cout<<"Destructor E"<<endl;
	}
	void get_E()
{
        cout<<"n :"<<n<<endl;
}


};
class D : public C , public E
{
	int m;
	public:
	D(int a,int b,int c,int d,int e):C(a,b,c),E(e)
	{
		cout<<"Constructor D"<<endl;
		m =d;
	}
	~D()
	{
		cout<<"Destructor D"<<endl;
	}
void get_D()
{
	cout<<"m :"<<m<<endl;
}

};

int main()
{
//	C obj;
//	cout<<"size of c : "<<sizeof(obj)<<endl;
	D obj1(10,20,30,40,50);
	cout<<"size of D:"<<sizeof(obj1)<<endl;
	obj1.get_A();
	obj1.get_B();
	obj1.get_C();
	obj1.get_D();
	obj1.get_E();
}


