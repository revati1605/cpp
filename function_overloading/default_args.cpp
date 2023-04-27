#include <iostream>
using namespace std;
int sum(int x = 100 , int y = 200 , int z = 300)
{
	return x+y+z;
}
int main()
{
	cout<<sum(10,20,30)<<endl;
	cout<<sum(10,20)<<endl;
	cout<<sum(1)<<endl;
	cout<<sum()<<endl;
}
