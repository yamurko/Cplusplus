#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

void reverse(char*);

void main(void)
{
	char str[100];

	cout << "Please enter string: ";
	cin >> str;

	cout << "Reserve string is:\n\n";
	reverse(str);

	cout << endl << endl;
	system("pause");

}

void reverse(char* s)
{
	if (s[0] == '\0')
		return;

	else
	{
		reverse(&s[1]);
		putchar(s[0]);
	}
}