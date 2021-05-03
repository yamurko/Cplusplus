#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void main(void)
{
	string str1("Test string");
	int count = 0;

	for (string::iterator it = str1.begin(); it != str1.end(); ++it)
	{
		cout << *it;
		count++;
	}

	cout << endl << count << endl;
	system("pause");
}