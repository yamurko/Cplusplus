#include<iostream>
using namespace std;

class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Point(const Point &p2)
	{
		x = p2.x;
		y = p2.y;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

private:
	int x, y;
};

int main()
{
	Point p1(10, 15);
	Point p2 = p1;

	cout << "p1.x = " << p1.getX() << " p1.y = " << p1.getY() << endl;
	cout << "p2.x = " << p2.getX() << " p2.y = " << p2.getY() << endl;
	return 0;
}