#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main()
{
	double a = 15.7, b = 65.85, c = 4587.452, d = 3.4587;

	cout << fixed << showpoint;

	cout << setprecision(1) << endl << "a = " << a
		<< endl << "b = " << b << endl << "c = "
		<< c << endl << "d = " << d << endl;

	cout << setprecision(2) << endl << "a = " << a
		<< endl << "b = " << b << endl << "c = "
		<< c << endl << "d = " << d << endl;

	cout << setprecision(3) << endl << "a = " << a
		<< endl << "b = " << b << endl << "c = "
		<< c << endl << "d = " << d << endl;

	cout << setprecision(4) << endl << "a = " << a
		<< endl << "b = " << b << endl << "c = "
		<< c << endl << "d = " << d << endl;



	return 0;
}