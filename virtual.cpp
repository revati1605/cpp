#include <iostream>
using namespace std;

class A
{
	int x;
	public:
	virtual void test1()
	{
		cout<<"test1 in A"<<endl;
	}
	
	virtual void test2()
	{
		cout<<"test2 in A"<<endl;
	}
	 void test3()
	{
		cout<<"test3 in A"<<endl;
	}
};

class B:public A
{
      
        public:
        
        void test2()
        {
                cout<<"test2 in B"<<endl;
        }
         void test3()
        {
                 cout<<"test3 in B"<<endl;
        }
};

class C : public A
{
        public:
        void test1()
        {
                cout<<"test1 in C"<<endl;
        }

  
         void test3()
        {
                cout<<"test3 in C"<<endl;
        }
};

int main()
{
	A *bptr;
	A a1;
	bptr = &a1;
	bptr->test1();//A
	bptr->test2();//A
	bptr->test3();//A
	B b1;
	bptr = &b1;
	bptr->test1();//A
	bptr->test2();//B
	bptr->test3();//A
	C c1;
	bptr = &c1;
	bptr->test1();//C
	bptr->test2();//A
	bptr->test3();//A
}
