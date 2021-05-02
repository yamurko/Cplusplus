#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int a = 15, b = 107;
	string str = "world";

	cout << "123456789012345678901" << endl << setw(7) << a
		<< setw(7) << b << setw(7) << str << endl;

	cout << setfill('*') << endl << setw(7) << a
		<< setw(7) << b << setw(7) << str << endl;

	cout << endl << setw(7) << setfill('-') << a
		<< setw(7) << setfill('+') << b << setw(7) << setfill('/') << str << endl;

	cout << setfill(' ') << endl << setw(7) << a
		<< setw(7) << b << setw(7) << str << endl;

	cout << setfill(' ');
	cout << left;
	cout << endl << setw(7) << a
		<< setw(7) << b << setw(7) << str << endl;

	cout << setfill(' ');
	cout << right;
	cout << endl << setw(7) << a
		<< setw(7) << b << setw(7) << str << endl;

	return 0;
}