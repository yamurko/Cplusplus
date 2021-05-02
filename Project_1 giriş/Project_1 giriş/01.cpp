#include<iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 14;
	float c = 2.8;
	char ch = 'a';
	string name;

	cout << a << endl;
	cout << "Hello World!";
	cout << "Hello World!" << endl;// end line == \n
	cout << b << "\n" << c << " " << ch << endl;
	cout << b << endl << c << endl << ch << endl;
	cout << "a = " << a << endl;
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << name << endl;
	cout << name.length() << endl;
}