#ifndef HOURLY_H
#define HOURLY_H
#include"35_employee.h"

class Hourly : public Employee
{
	double wage;
	double hours;

public:
	Hourly(const char*, const char*, double, double);
	double getPay() const;
	void print() const;
};

#endif // !HOURLY_H
