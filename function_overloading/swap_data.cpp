#include <iostream>
using namespace std;
void swap_data(int &x,int &y)
{
	int t;
	cout<<"swap 2 int args"<<endl;
	t=x; x=y;y=t;
}
void swap_data(char &x,char& y)
{
	char t;
	cout<<"swap 2 character args"<<endl;
	t=x; x=y;y=t;
}
void swap_data(float &x,float &y)
{
	float t;
	cout<<"swap 2 float args"<<endl;
	t=x; x=y;y=t;
}
int main()
{
	int a = 10 ,b =20;
	char x ='a' , y = 'b';
	float m = 12.3 ,n = 23.4;
	swap_data(a,b);
	swap_data(x,y);
	swap_data(m,n);
	cout <<a <<" " <<b<<endl;
	cout<<x<<" " <<y<<endl;
	cout<<m<<" "<<n<<endl;
}
