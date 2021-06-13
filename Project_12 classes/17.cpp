#include<iostream>
#include "17.h"

using namespace std;

Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Date::print()
{
	cout << month << "/" << day << "/" << year;
}