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
		cout << "copy constructor" << endl;
	}
};

void main()
{
	MyClass m1; // default constructor
	MyClass m2{ m1 }; // copy constructor
	MyClass m3 = m1; // copy constructor
	MyClass m4(m1); // copy constructor
}