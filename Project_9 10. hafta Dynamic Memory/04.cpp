#include<iostream>
#include<stdlib.h>
#define size 5

using namespace std;

char* strcopy(char*, char*);

int main()
{
	char* s[size];
	int n, len;
	char buff[100];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter product name: " << endl;
		cin.getline(buff,100);

		len = strlen(buff);

		cout << "String length: " << len << endl;

		s[i] = new char[len + 1];

		if (s[i] == NULL)
		{
			cout << "Error" << endl;
			exit(0);
		}

		strcopy(s[i], buff);
	}

	for (int i = 0; i < size; i++)
	{
		cout << s[i] << endl;
	}

	

	cout << endl << endl;
	system("pause");
	return 0;
}

char* strcopy(char* str1, char* str2)
{
	char* p = str1;

	while (*str2)
	{
		*p++ = *str2++;
	}
	*p = '\0';
	return str1;

}