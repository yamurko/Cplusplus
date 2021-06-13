#include<iostream>

using namespace std;

class Shape
{
protected:
	int width;
	int height;

public:
	void setWidth(int w)
	{
		width = w;
	}

	void setHeight(int h)
	{
		height = h;
	}
};

class Rectangle : public Shape
{
public:
	int getArea()
	{
		return width * height;
	}
};

int main(void)
{
	Rectangle Rect;

	Rect.setHeight(5);
	Rect.setWidth(10);

	cout << "Area is " << Rect.getArea() << endl;



	return 0;
}