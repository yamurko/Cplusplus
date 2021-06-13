#include<iostream>
#include"34_circle.h"
#include<iomanip>

using namespace std;

Circle::Circle(double init_x, double init_y, double r):Point(init_x, init_y)
{
	radius = r;
}
void Circle::print() const
{
	cout << "The center point is: ";
	Point::print();
	cout << "The radius is: " << fixed << setprecision(1) << getRadius() << endl;
	cout << "The cirumference is: " << getCircumference() << endl;
	cout << "The area is :" << getArea() << endl;
}
void Circle::setRadius(double r)
{
	radius = r;
}
double Circle::getRadius() const
{
	return radius;
}
double Circle::getCircumference() const
{
	double c = 2 * radius * 3.14;
	return c;
}
double Circle::getArea() const
{
	double a = radius * radius * 3.14;
	return a;
}