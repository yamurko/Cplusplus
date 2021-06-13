#include<iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "default constructor" << endl;
	}
	~MyClass()
	{
		cout << "destructor" << endl;
	}
	MyClass(const MyClass& r)
	{
		cout << "******************************" << endl;
		cout << "copy constructor" << endl;
		cout << "******************************" << endl;
	}
};

MyClass g;
MyClass gfunc()
{
	return g;
}

int main()
{
	cout << "main starting" << endl;
	gfunc();
	cout << "main ending" << endl;
	return 0;
}