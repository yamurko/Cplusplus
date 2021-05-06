#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int row, colm;

	cout << "Enter row: ";
	cin >> row;
	cout << "Enter column: ";
	cin >> colm;

	int** matrix = new int *[row];

	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[colm];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0;j < colm; j++)
		{
			matrix[i][j] = i + j;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}