#include<iostream>
#include<iomanip>
#include"35_hourlyworker.h"

using namespace std;

int main()
{
	Hourly h("Bob", "Smith", 40.0, 10.0);
	h.print();

	return 0;
}