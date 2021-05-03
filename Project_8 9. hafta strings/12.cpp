#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

void main(void)
{
	string str1("Java");
	string str2("Script");

	cout << str1 << endl;
	cout << str2 << endl;

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	cout << str1 << endl;
	cout << str2 << endl;

	str1.swap(str2);

	cout << str1 << endl;
	cout << str2 << endl;

	system("pause");
}