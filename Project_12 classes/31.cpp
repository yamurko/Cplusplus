#include<iostream>

using namespace std;

class Base
{
public:
	int x;
	Base()
	{
		x = 2;
		y = 3;
		z = 4;
	}

protected:
	int y;

private:
	int z;
};

class Derived : protected Base
{
	//comes here
	//protected int x;
	//protected int y;
};

void main(void)
{
	Derived obj2;
	//error inaccessible from outside because protected in derived class
	//cout << "x: " << obj2.x << endl;
	//error inaccessible from outside because protected in derived class
	//cout << "y: " << obj2.y << endl;

}