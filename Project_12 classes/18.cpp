#include<iostream>

using namespace std;

class Test
{
public:
	Test()
	{}
	Test(const Test& t)
	{
		cout << "Copy constructor called" << endl;
	}
	Test& operator =(const Test& t)
	{
		cout << "Assigment operator called" << endl;
		return *this;
	}
};

int main()
{
	Test t1, t2;
	t2 = t1; // calls assigment operator, same as "t2.operator = (t1);"
	Test t3 = t1; // calls copy constructor, same as "Test t3(t1);"
}