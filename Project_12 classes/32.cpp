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

class Derived1 : private Base
{
	//comes here
	//private int x;
	//private int y;
};

class Derived2 : public Derived1
{
	//not comes private x and private y form Derived1
};

void main(void)
{
	Derived2 obj3;
	//error inaccessible from outside because protected in derived class
	//cout << "x: " << obj3.x << endl;
	//error inaccessible from outside because protected in derived class
	//cout << "y: " << obj3.y << endl;

}