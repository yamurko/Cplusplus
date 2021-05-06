#include<iostream>
#include<stdlib.h>
#define size 5
using namespace std;

int main()
{
	char* s[size];
	int n;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter size of each lines of the array: ";
		cin >> n;

		s[i] = new char[n];

		if (s[i] == NULL)
		{
			cout << "Error" << endl;
			exit(0);
		}

		cin.ignore();

		cout << "Enter product name: " << endl;
		cin.getline(s[i], n);
	}

	for (int i = 0; i < size; i++)
	{
		cout << s[i] << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}