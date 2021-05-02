#include<iostream>
#include<algorithm>

using namespace std;

int jumpSearch(int[], int, int);

int main()
{
	int a[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };
	int n = sizeof(a) / sizeof(a[0]);
	int x;

	cout << "Enter an integer you want to find: " << endl;
	cin >> x;

	int index = jumpSearch(a, n, x);

	if (index == -1)
		cout << "This number is not in array!" << endl;

	else
		cout << "This number is at index " << index << endl;

	system("pause");
	return 0;
}

int jumpSearch(int a[], int n, int x)
{
	int prev = 0;
	int step = sqrt(n);

	while (a[min(step, n) - 1] < x)
	{
		prev = step;
		step += sqrt(n);

		if (prev >= n)
			return -1;
	}

	while (a[prev] < x)
	{
		prev++;

		if (prev == min(step,n))
			return -1;
	}

	if (a[prev] == x)
		return prev;

	return -1;
}


