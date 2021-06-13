#include<iostream>

using namespace std;

class Box
{
public:
	static int objectCount;

	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;

		//increase every time object is created
		objectCount++;
	}

	double Volume()
	{
		return length * breadth * height;
	}

	static int getCount()
	{
		return objectCount;
	}

private:
	double length, breadth, height;
};

int Box::objectCount = 0;

int main()
{
	cout << "Initial sage count: " << Box::getCount() << endl;
	// Declare box1
	Box Box1(3.3, 1.2, 1.5);

	// Declare box2
	Box Box2(8.5, 6.0, 2.0);

	// Print total number of objects.
	cout << "Final stage count: " << Box::getCount() << endl;

	return 0;
}