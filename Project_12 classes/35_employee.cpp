#include<iostream>
#include<string>
#include<cassert>
#include"35_employee.h"

using namespace std;

Employee::Employee(const char* first, const char* second)
{
	firstname = new char[strlen(first) + 1];
	assert(firstname != 0); //terminate if not allocate
	strcpy_s(firstname, strlen(first) + 1, first);

	lastname = new char[strlen(second) + 1];
	assert(lastname != 0); //terminate if not allocate
	strcpy_s(lastname, strlen(second) + 1, second);
}
void Employee::print() const
{
	cout << firstname << " " << lastname;
}
Employee::~Employee()
{
	delete[] firstname;
	delete[] lastname;
}