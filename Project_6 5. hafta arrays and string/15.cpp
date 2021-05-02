#include<iostream>

using namespace std;

int findFunciton(int[], int, int);

int main()
{
	int list[] = { 1,2,3,4,5 };
	int n = sizeof(list) / sizeof(list[0]);
	int x;

	cout << "Enter an integer you want to find." << endl;
	cin >> x;

	int result = findFunciton(list, n, x);

	(result == -1)
	? cout << "Element is not present in array."
	: cout << "Element is present at index " << result << endl;


	system("pause");
	return 0;
}

int findFunciton(int list[], int n, int x)
{
	int flag = 0;
	int a;

	for (int i = 0; i < n; i++)
	{
		if (list[i] == x)
		{
			flag = 1;
			a = i;
		}
	}

	if (flag == 1)
		return a;

	else
		return -1;
}