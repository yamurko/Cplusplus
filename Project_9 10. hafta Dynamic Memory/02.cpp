#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	char* s[5];

	for (int i = 0; i < 5; i++)
	{
		s[i] = new char[30];

		if (s[i] == NULL)
		{
			cout << "Error" << endl;
			exit(0);
		}

		cout << "Enter product name: " << endl;
		cin.getline(s[i],30);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << s[i] << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}