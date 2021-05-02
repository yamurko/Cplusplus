#include<iostream>

using namespace std;

int main()
{
	int a[2];

	a[0] = 5;
	a[1] = 10;
	a[2] = 15;

	for (int i = 0; i < 2; i++)
	{
		cout << a[i] << endl;
	}

	system("pause");
	return 0;
}