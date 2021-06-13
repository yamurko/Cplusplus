#include<iostream>
#include<string>

using namespace std;

class Gradebook
{
public:
	
	void createCourse(string str)
	{
		coursName = str;
	}

	string name()
	{
		return coursName;
	}

	void writecourse()
	{
		cout << "Welcome to gradebook for " << name() << endl;
	}
	
private:
	string coursName;
};


int main()
{
	string courseName;
	Gradebook gradebook;

	cout << "Initial course name is: " << gradebook.name() << endl;

	cout << "Enter name of course:";
	getline(cin, courseName);

	gradebook.createCourse(courseName);

	gradebook.writecourse();



	return 0;
}