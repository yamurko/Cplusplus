#include<iostream>
#include<ctime>

using namespace std;

void boubleSort(int[], int);
void swap(int* fi, int* li);
void printArray(int[], int);

int main()
{
	const int n = 20;
	int arr[n];

	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

	boubleSort(arr, n);
	cout << endl << endl;
	printArray(arr, n);

	system("pause");
	return 0;
}


void swap(int* fi, int* li)
{
	int temp = *fi;
	*fi = *li;
	*li = temp;
}

void buubleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}