#include<iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle() {}
	Rectangle(int x,int y):width(x),height(y) {}
	int area()
	{
		return width * height;
	}

	friend Rectangle duplicate(const Rectangle&);
private:
	int width, height;
};

Rectangle duplicate(const Rectangle& param)
{
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}

int main()
{
	Rectangle foo;
	Rectangle bar(2, 3);
	foo = duplicate(bar);
	cout << foo.area() << endl;
	return 0;
}