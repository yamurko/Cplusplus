#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	int row, colm;
	int flag_row, flag_colm;
	int temp;
	const int SIZE_ROW = 10;
	const int SIZE_COLM = 10;

	int a[SIZE_ROW][SIZE_COLM];

	srand(time(0));
	cout << "Enter number of row: ";
	cin >> row;
	cout << "Enter number of colm: ";
	cin >> colm;
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			a[i][j] = rand() % 100;
			cout << setw(5) << a[i][j] << "  ";
		}
		cout << endl;
	}

	flag_colm = colm - 1;
	flag_row = row - 1;

	for (int i = 0; i < row/2; i++)
	{
		for (int j = 0; j < colm/2; j++)
		{
			if (i == j)
			{
				temp = a[i][j];
				a[i][j] = a[flag_row][flag_colm];
				a[flag_row][flag_colm] = temp;
			}
		}
		flag_row--;
		flag_colm--;
	}

	flag_colm = colm - 1;
	flag_row = 0;

	for (int i = 0; i < row/2; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			if (i == flag_row && j == flag_colm)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}

		flag_row++;
		flag_colm--;
	}

	cout << endl << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			cout << setw(5) << a[i][j] << "  ";
		}
		cout << endl;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}