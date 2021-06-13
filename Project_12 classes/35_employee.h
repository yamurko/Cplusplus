#ifndef EMPLOY_H
#define EMPLOY_H

class Employee
{
	char* firstname;
	char* lastname;
public:
	Employee(const char*, const char*);
	void print() const;
	~Employee();
};
#endif // !EMPLOYEE_H
