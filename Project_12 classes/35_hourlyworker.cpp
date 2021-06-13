#include<iostream>
#include<iomanip>
#include"35_hourlyworker.h"

using namespace std;
using std::ios;
using std::setiosflags;
using std::setprecision;

Hourly::Hourly(const char* first, const char* last, double initHours, double initWage):Employee(first,last)
{
	hours = initHours;
	wage = initWage;
}
double Hourly::getPay() const
{
	return wage * hours;
}
void Hourly::print() const
{
	cout << "Hourly::print() is executing\n\n";
	Employee::print();
	cout << " is an hourly worker with pay of $"
		<< setiosflags(ios::fixed | ios::showpoint)
		<< setprecision(2) << getPay() << endl;
}