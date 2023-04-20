#include <iostream>
using namespace std;

class factorial
{
	public :
	int n1,n,f=1;
	public:
	void input()
	{
		cout<<"enter the number:"<<endl;
		cin>>n;
	}
	void calculate()
	{
		n1 = n;
		if((n == 0)||(n == 1) )
		{
			cout<<"factorial of "<<n<<"is 1"<<endl;
		}
		else
		{
			while(n>0)
			{
				f=f*n;
				n--;
			}
		}
	}
	void display()
{
	cout<<"factorial of "<<n1 <<"is:"<<f<<endl;
}
};
int main()
{
	factorial f1;
	f1.input();
	f1.calculate();
	f1.display();
	return 0;
}

