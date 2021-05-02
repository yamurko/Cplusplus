#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int a = 12, b = 17;

	cout << "Enter a number"
		 << " followed by a character: ";

	cin >> a >> b;

	cout << endl << "a = " << a
		<< " b = " << b << endl;

	cin.clear();
	cin.ignore(200, '\n');

	cout << "Enter two integer numbers: " << endl;
	cin >> a >> b;
	cout << "a = " << a << " b = " << b << endl;

	return 0;
}