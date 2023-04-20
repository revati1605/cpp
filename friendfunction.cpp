#include <iostream>
using namespace std;

class Son;
class Father
{
	float sal;
	char name[30];
	public:
	void set_data()
	{
		cout<<"enter father details:"<<endl;
		cin>>sal>>name;
	}
friend void incomeTax(Father f , Son s);

};
class Son
{
	float sal;
	char name[30];
	public:
	void set_data()
	{
		cout<<"enter son details:"<<endl;
		cin>>sal>>name;
	}
friend void incomeTax(Father f , Son s);
};
void incomeTax(Father f , Son s)
{
	float total = f.sal + s.sal;
	cout<<"Your Total income is :"<<total<<endl;
	if(total >100000)
	{
		cout<<"You have to pay tax"<<endl;
	}
	else
	{
		cout<<"No need to pay tax"<<endl;
	}
}
int main()
{
	Father f1;
	Son s1;
	s1.set_data();
	f1.set_data();
	incomeTax (f1,s1);
	return 0;
}
