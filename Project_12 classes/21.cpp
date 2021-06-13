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
		cout << "********************************" << endl;
		cout << "copy constructor" << endl;
		cout << "this = " << this << endl; // pointer
		cout << "&r" << &r << endl;
		cout << "********************************" << endl;
	}
};

int main()
{
	MyClass m1;
	MyClass m2{ m1 };
	cout << "&m1" << &m1 << endl;
	cout << "&m2" << &m2 << endl;

	return 0;
}