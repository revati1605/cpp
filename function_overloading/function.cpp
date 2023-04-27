#include <iostream>
using namespace std;
int sum(int a,int b)
{
	cout<<"sum of two integer"<<endl;
	return a+b;
}
int sum(int a,int b,int c)
{
	cout<<"sum of three integer"<<endl;
	return a+b+c;
}
float sum(float a,float b)
{
	cout<<"sum of two float"<<endl;
	return a+b;
}
int main()
{
	cout <<sum(10,20)<<endl;
	cout<<sum(10,20,30)<<endl;
	cout<<sum(10.3f,23.4f)<<endl;
}
