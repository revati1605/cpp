#include<iostream>
using namespace std;
class line
{
	public:
		int length;
		line();
		void setlength(int len);
		int getlength();
		~line();
};
line :: line(void)
{
	cout<<"constructor"<<endl;
}
void line::setlength(int len)
{
	length = len;
}

int line :: getlength()
{
	return length;
}
 line :: ~line(void)
{
	cout<<"destructor"<<endl;
}
int main()
{
	line l1;
	l1.setlength(10);
	cout<<"length of line is: "<<l1.getlength()<<endl;
	return 0;
}

