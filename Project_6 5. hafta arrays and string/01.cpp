#include<iostream>

using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5];

	cout << "Base address a: " << a << endl;
	cout << "Base address b: " << b << endl;

	if (a == b)
		cout << "a and b is equal each other." << endl;

	else if (a < b)
		cout << "a is smaller than b." << endl;

	else if (a > b)
		cout << "a is greater than b." << endl;

	system("pause");
	return 0;
}