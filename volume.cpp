#include <iostream>
using namespace std;
class box
{
	public:
		int h,l,b;
		float volume;
		void value();
		void calculate();
		void display();
};
void box ::value()
{
	cout<<"enter value of h,l,b"<<endl;
	cin>>h>>l>>b;
}
void box :: calculate()
{
	volume = h * l * b;
}
void box :: display()
{
	cout <<"volume is :"<<volume<<endl;
}
int main()
{
	box box1;
	box1.value();
	box1.calculate();
	box1.display();
	return 0;
}
