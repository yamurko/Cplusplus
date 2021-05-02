#include<iostream>
#include<time.h>

using namespace std;

void boubleSort(int[]);
void swap(int* fi, int* li);
void printArray(int[]);

int main()
{
	srand(time(0));

	int arr[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 100;
	}

	boubleSort(arr);
	cout << endl << endl;
	printArray(arr);

	system("pause");
	return 0;
}


void swap(int* fi, int* li)
{
	int temp = *fi;
	*fi = *li;
	*li = temp;
}

void buubleSort(int a[])
{
	int temp;

	for (int i = 0; i < 20 - 1; i++)
	{
		for (int j = 0; j < 20 - i -1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void printArray(int a[])
{
	for (int i = 0; i < 20; i++)
	{
		cout << a[i] << "  ";
	}
}