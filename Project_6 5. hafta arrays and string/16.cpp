#include<iostream>

using namespace std;
const int SIZE_OF_ARRAY = 13;

int main()
{
	int a[SIZE_OF_ARRAY] = {4,13,17,24,35,41,49,50,66,68,70,98,99};
	int low, medium, large;
	int num, flag = 0;

	cout << "Enter an integer number you want to find: " << endl;
	cin >> num;

	low = 0;
	large = SIZE_OF_ARRAY - 1;

	while (low <= large)
	{
		medium = (low + large) / 2;

		if (num == a[medium])
		{
			cout << "This number is at index " << medium << endl;
			flag = 1;
			break;
		}

		else if (num < a[medium])
			large = medium - 1;

		else
			low = medium + 1;

	}

	if (flag == 0)
		cout << "This number is not at this array." << endl;
	
	system("pause");
	return 0;
}