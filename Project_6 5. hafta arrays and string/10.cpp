#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

const int NUMBER_OF_ROWS = 7;
const int NUMBER_OF_COLUMNS = 6;

void printArray(int[][NUMBER_OF_COLUMNS]);
void sumOfArrayRow(int[][NUMBER_OF_COLUMNS], int);
void sumOfArrayColm(int[][NUMBER_OF_COLUMNS], int);
void largestNumberArrayRow(int[][NUMBER_OF_COLUMNS]);
void largestNumberArrayColm(int[][NUMBER_OF_COLUMNS]);


int main()
{
	int a[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	int sum = 0;
	int largest;

	printArray(a); 
	cout << endl << endl;
	sumOfArrayRow(a, sum);
	cout << endl << endl;
	sumOfArrayColm(a, sum);
	cout << endl << endl;
	largestNumberArrayRow(a);
	cout << endl << endl;
	largestNumberArrayColm(a);


	cout << endl << endl;

	system("pause");
	return 0;
}

void printArray(int matrix[][NUMBER_OF_COLUMNS])
{
	srand(time(0));

	for (int i = 0; i < NUMBER_OF_ROWS; i++)
	{
		for (int j = 0; j < NUMBER_OF_COLUMNS; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << setw(5) << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

void sumOfArrayRow(int matrix[][NUMBER_OF_COLUMNS], int sum)
{
	for (int i = 0; i < NUMBER_OF_ROWS; i++)
	{
		for (int j = 0; j < NUMBER_OF_COLUMNS; j++)
		{
			sum += matrix[i][j];
		}
		cout << "Sum of " << i + 1 << "th row is " << sum << endl;
		sum = 0;
	}
}

void sumOfArrayColm(int matrix[][NUMBER_OF_COLUMNS], int sum)
{
	/*int flag, j;
	int a = 0;

	for (int i = 0; i < NUMBER_OF_ROWS - 1; i++)
	{
		flag = i;
		int count = 0;

		for (j = 0; j < NUMBER_OF_COLUMNS; j++)
		{
			if (count == 0)
				i = 0;

			if (i != 7)
				j = a;

			else
				j++;

			sum += matrix[i][j];

			if (count % 6 == 0)
			{
				if (count != 0)
					a++;
			}
				

			i++;
			count++;

			if (i == 7)
				break;
		}
		cout << "Sum of " << j + 1 << "th column is " << sum << endl;
		sum = 0;
		i = flag;
	}*/

	for (int j = 0; j <= NUMBER_OF_COLUMNS; j++)
	{
		for (int i = 0; i < NUMBER_OF_COLUMNS; i++)
		{
			sum += matrix[i][j];
		}
		cout << "Sum of " << j + 1 << "th columns is " << sum << endl;
		sum = 0;
	}
}

void largestNumberArrayRow(int matrix[][NUMBER_OF_COLUMNS])
{
	int large;

	for (int i = 0; i <= NUMBER_OF_COLUMNS; i++)
	{
		large = matrix[i][0];

		for (int j = 0; j <= NUMBER_OF_COLUMNS; j++)
		{
			if (large < matrix[i][j])
				large = matrix[i][j];
		}
		cout << "The largest number of " << i + 1 << "th row is " << large << endl;
	}
}

void largestNumberArrayColm(int matrix[][NUMBER_OF_COLUMNS])
{
	int large;

	for (int j = 0; j <= NUMBER_OF_COLUMNS; j++)
	{
		large = matrix[j][0];

		for (int i = 0; i <= NUMBER_OF_COLUMNS; i++)
		{
			if (large < matrix[i][j])
				large = matrix[i][j];
		}
		cout << "The largest number of " << j + 1 << "th column is " << large << endl;
	}
}