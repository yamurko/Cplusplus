#include<iostream>
#include<cmath>
#include<cctype>
#include<cstdlib>

using namespace std;

int main()
{
	int x;
	double y, z;

	cout << "Enter x,y and z: ";
	cin >> x >> y >> z;

	cout << endl << endl;

	cout << "Uppercase a is: " << static_cast<char>(toupper('a')) << endl;//cctype
	cout << "Lowercase D is: " << static_cast<char>(tolower('D')) << endl;//cctype

	cout << y << "^" << z << "=" << pow(y, z) << endl;

	cout << "|" << y << "|" << " = " << fabs(y) << endl << "|" << z << "|" << " = " << fabs(z) << endl;//cmath
	cout << "|" << x << "|" << " = " << abs(x) << endl;//cstdlib

	system("pause");
	return 0;
}

