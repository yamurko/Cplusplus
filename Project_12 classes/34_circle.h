#ifndef CIRCLE_H
#define CIRCLE_H
#include"34_point.h"

class Circle : public Point
{
	double radius;

public:

	Circle(double init_x = 0.0, double init_y = 0.0, double r = 0.0);
	void print() const;
	void setRadius(double r);
	double getRadius() const;
	double getCircumference() const;
	double getArea() const;
};

#endif // !CIRCLE_H