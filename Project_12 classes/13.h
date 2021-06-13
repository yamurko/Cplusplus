#ifndef EMP_H
#define EMP_H

using namespace std;

class Employee
{
public:
	string name;
	int salary;

	Employee();
	Employee(string name, int salary);
	void get_values();
	void print_values();
	int new_salary(int percetage_raise);
};

#endif // !EMP_H
