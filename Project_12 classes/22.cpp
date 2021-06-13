#include<iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "default constructor" << endl;
	}
	MyClass(const MyClass& r)
	{
		cout << "*************************" << endl;
		cout << "copy constructor" << endl;
		cout << "this = " << this << endl;
		cout << "&r = " << &r << endl;
		cout << "*************************" << endl;
	}
};

void gfunc(MyClass m)
{
	cout << "gfunc is called" << endl;
	cout << "&m = " << &m << endl;
	cout << "--------------------------------------" << endl;
}

int main()
{
	MyClass m1;
	cout << "&m1 = " << &m1 << endl;
	gfunc(m1);
	return 0;
}