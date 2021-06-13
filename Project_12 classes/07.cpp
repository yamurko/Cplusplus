#include<iostream>
#include<string>

using namespace std;

class Gradebook
{
public:
	Gradebook(string name)
	{
		createName(name);
	}

	void createName(string name)
	{
		courseName = name;
	}

	string name()
	{
		return courseName;
	}

	void callName()
	{
		cout << "Welcome to garedebook for " << name() << endl;
	}

private:
	string courseName;
};


int main()
{
	Gradebook gradebook1("C++");
	Gradebook gradebook2("Java");

	cout << "Course name 1: " << gradebook1.name() << endl;
	cout << "Course name 2: " << gradebook2.name() << endl;


	return 0;
}