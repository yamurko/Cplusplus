#include<iostream>

using namespace std;

//#define NUMBER_OF_ROWS 10;
//#define NUMBER_OF_COLUMNS 10;

int main()
{
	enum cartype {GM, FORD,TOYOTA, BMW, NISSAN, VOLVO};
	enum colortype{RED, BROWN, BLACK, WHITE, GRAY};

	const int NUMBER_OF_ROWS = 10;
	const int NUMBER_OF_COLUMNS = 10;

	int instock[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];

	instock[FORD][WHITE] = 15;

	for (int i = GM; i <= VOLVO; i++)
	{
		for (int j = RED; j <= GRAY; j++)
		{
			cout << instock[i][j] << "  ";
		}

		cout << endl;
	}

	system("pause");
	return 0;
}