#include<iostream>
#include<string>
#include"13.h"

using namespace std;

int main()
{
	Employee employee[2];

	int percent = 0;

	for (int i = 0; i < 2; i++)
	{
		employee[i].get_values();
		cout << "Enter much should the salary be raised by: " << endl;

		cin >> percent;
		cout << employee[i].name << "'s new salary is: " << employee[i].new_salary(percent) << endl;
		cin.ignore();
	}

	for (int i = 0; i < 2; i++)
	{
		employee[i].print_values();
	}
	return 0;
}