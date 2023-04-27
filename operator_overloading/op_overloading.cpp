#include <iostream>
using namespace std;
class Complex
{

	int real,img;
	public:
		Complex()
		{
			real = 0;
			img = 0;
		}
		Complex(int r,int i)
		{
			real = r;
			img = i;
		}
		void get_complex()
		{
			cout<<"complex number :";
			if(img < 0)
				cout<<real<<img<<"j"<<endl;
			else
				cout<<real<<"+"<<img<<"j"<<endl;
		}
		Complex operator +(Complex b1)
		{
			cout << "operator overloading +"<<endl;
			Complex ret;
			ret.real = real + b1.real;
			ret.img = img + b1.img;
			return ret;
		}
};
int main()
{
	Complex c1(10,-4),c2(2,3),c3(10,20),c4(100,200),c5;
	c1.get_complex();
	c2.get_complex();
	c5 =c1+c2+c3+c4;//c3 = c1.operator +(c2);;; c3 = complex ::operator(&c1,c2);
	c3.get_complex();
	c4.get_complex();
	c5.get_complex();
}
