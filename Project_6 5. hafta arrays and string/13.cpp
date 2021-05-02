#include<iostream>
#include<ctime>

using namespace std;

const int SIZE_ROW = 10;
typedef int typeArray[SIZE_ROW][SIZE_ROW];

int main()
{
	typeArray a;

	srand(time(0));

	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_ROW; j++)
		{
			a[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_ROW; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}