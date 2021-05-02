#include<iostream>
#include<string>

using namespace std;

int main()
{
	string firstName;
	string name;
	string str;

	firstName = "Elizabeth";
	name = firstName + "Jones";
	str = "Today is hopeful day :)";

	cout << firstName.length() << endl;
	cout << name.length() << endl;
	cout << str.length() << endl;

	string::size_type len;

	len = firstName.length();
	cout << len << endl;
	len = name.length();
	cout << len << endl;
	len = str.length();
	cout << len << endl;

}