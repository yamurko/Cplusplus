#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int *a, n;
	int *new_a, m;


	cout << "Enter size of the array: ";
	cin >> n;

	a = new int[n];

	if (a == NULL)
	{
		cout << "Error!" << endl;
		exit(0);
	}

	for (int i = 0; i < n; i++)
	{
		a[i] = i * i;
		cout << a[i] << " ";
	}

	cout << "\n\nEnter size of the new array: ";
	cin >> m;

	new_a = new int[m];

	if (new_a == NULL)
	{
		cout << "Error!" << endl;
		exit(0);
	}

	for (int i = 0; i < n; i++)
	{
		new_a[i] = a[i];
	}

	for (int i = n; i < m; i++)
	{
		new_a[i] = i * i;
	}

	for (int i = 0; i < m; i++)
	{
		cout << new_a[i] << " ";
	}

	delete[]a;//free(a);
	delete[]new_a;//free(new_a);
	cout << endl << endl;

	system("pause");
	return 0;
}