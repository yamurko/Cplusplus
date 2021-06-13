#ifndef POINT_H
#define POINT_H

class Point
{
	double x;
	double y;

public:

	Point(double init_x = 0.0, double init_y = 0.0);
	void setPoint(double, double);
	void print() const;
	double getX() const;
	double getY() const;
};

#endif // !POINT_H
