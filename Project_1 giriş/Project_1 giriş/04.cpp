#include<iostream>

using namespace std;

int main()
{
	int a = 5, b = 0;

	b = a++;

	cout << "b = " << b << "\n" << "a = " << a << endl;

	int c = 5, d = 0;

	d = ++c;

	cout << "c = " << c << "\n" << "d = " << d << endl;

	int e = 5, f = 0;

	f = e--;

	cout << "e = " << e << "\n" << "f = " << f << endl;

	int g = 5, h = 0;

	h = --g;

	cout << "g = " << g << "\n" << "h = " << h << endl;

}