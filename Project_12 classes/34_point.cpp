#include<iostream>
#include"34_point.h"
#include<iomanip>

using namespace std;

Point::Point(double init_x, double init_y)
{
	x = init_x;
	y = init_y;
}
void Point::setPoint(double init_x, double init_y)
{
	x = init_x;
	y = init_y;
}
double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}
void Point::print() const
{
	cout << fixed << setprecision(1) << "(" << x << " , " << y << ")" << endl;
}