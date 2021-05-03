#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

void main(void)
{
	string str;
	char ch;

	cout << "Type some lines of text. Enter dot(.) to finish." << endl;

	do
	{
		ch = cin.get();
		str += ch;

		if (ch == '\n')
		{
			cout << str << endl;
			str.clear();
		}
	} while (ch = !'.');

	cout << endl << endl;
	system("pause");
}