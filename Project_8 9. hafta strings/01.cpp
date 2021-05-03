#include<iostream>
#include<string>

using namespace std;

char* readLine(char* str);

int main()
{
	char str[80];

	readLine(str);

	cout << "Line of input " << str << endl;

	system("pause");
	return 0;
}

char* readLine(char* str)
{
	char ch;
	char* p = str;

	while ((ch = getchar()) !='\n')
	{
		*p++ = ch;
	}
	*p = '\0';
	return str;
}