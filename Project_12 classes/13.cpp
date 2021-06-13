#include<iostream>
#include<string>
#include"13.h"

using namespace std;

Employee::Employee()
{
	name = "";
	salary = 0;
}

Employee::Employee(string name, int salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::get_values()
{
	cout << "Enter name and surname: ";
	getline(cin, name);
	cout << "Enter salary: ";
	cin >> salary;
}

void Employee::print_values()
{
	cout << "Name and surname: " << name << endl;
	cout << "Salary: " << salary << endl;
}

int Employee::new_salary(int percetage_raise)
{
	if (percetage_raise >= 0)
	{
		int raise = (salary * percetage_raise) / 100;
		salary += raise;
		return salary;
	}
	else
	{
		cout << "Error!" << endl;
		return -1;
	}
}