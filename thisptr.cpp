#include <iostream>
using namespace std;
class Family
{
	int cash,gold;
	void set_data()
	{
		cout<<"enter cash and gold"<<endl;
		cin>>this->cash>>this->gold;
	}
	public:
	void get_data()
	{
		set_data();
		cout<<"cash - "<<this->cash<<"gold -"<<this->gold<<endl;
	}
};
int main()
{
	Family f1,f2;
	f1.get_data();
	f2.get_data();
}

