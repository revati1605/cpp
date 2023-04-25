#include <iostream>
using namespace std;
class A
{
public:
	int x;
	A()
	{
		cout<<"Constructor A"<<endl;
		cin>>x;
	}
	~A()
	{
		cout<<"Destructor A"<<endl;
	}
};

class B :virtual  public A
{
	public :int y;
		B()
		{
			cout<<"constructor B"<<endl;
			cin>>y;
		}
		~B()
		{
			cout<<"Destructor B"<<endl;
		}
};
class C : virtual public A
{
	public: int z;
		C()
		{
			cout<<"constructor C"<<endl;
			cin>>z;
		}
		
		~C()
		{
			cout<<"Destructor C"<<endl;
		}
};
class D :public B , public C
{
	public : int m;
		 D()
		 {
				cout<<"Constructor D"<<endl;
				cin>>m;
		 }
		 ~D()
		 {
			 cout<<"Destructor D"<<endl;
		 }
		 void get_D()
		 {
		//	 cout<<"x :"<<B::x<<endl;
		//	 cout<<"x :"<<C::x<<endl;
			 cout<<"x :"<<x<<endl;
			 cout<<"y :"<<y<<endl;
			 cout<<"z :"<<z<<endl;
			 cout<<"m :"<<m<<endl;
		 }
};
int main()
{
	D obj;
	cout<<"sizeof(A):"<<sizeof(A)<<endl;
	cout<<"sizeof(B):"<<sizeof(B)<<endl;
	cout<<"sizeof(C):"<<sizeof(C)<<endl;
	cout<<"sizeof(D):"<<sizeof(D)<<endl;
	obj.get_D();

}
