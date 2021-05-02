#include<iostream>

using namespace std;

void getString(char[][8], int&);

int main()
{
	char list[5][8];
	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		getString(list, a);
	}

	strcpy_s(list[1], "bbbbbbb");
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << list[i];
		cout << endl;
	}

	system("pause");
	return 0;
}

void getString(char list[][8], int& i)
{
	cin.get(list[i], 8);
	i++;
}
