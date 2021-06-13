#include<iostream>

using namespace std;

class Rectangle
{
public:
	void set_value(int, int);

	int area()
	{
		return height * width;
	}

	int circumference()
	{
		return 2 * (height + width);
	}

private:
	int width;
	int height;
};

void Rectangle::set_value(int x, int y)
{
	width = x;
	height = y;
}
int main()
{
	int width, height;
	Rectangle rect;

	cout << "Enter width of rectangle:";
	cin >> width;

	cout << "Enter height of rectangle:";
	cin >> height;

	rect.set_value(width, height);

	cout << "Area: " << rect.area() << endl;
	cout << "Circumference: " << rect.circumference() << endl;


	return 0;
}