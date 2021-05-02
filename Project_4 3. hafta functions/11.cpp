#include<iostream>

void initialize(int& zero, int& odd, int& even);
void getNumber(int& number);
void classifyNumber(int number, int& zero, int& odd, int& even);
void printResults(int zero, int odd, int even);

using namespace std;

int main()
{
	int number;
	int zero;
	int odd;
	int even;
	int N;

	initialize(zero, odd, even);

	cout << "Enter how many numbers you want to enter: ";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		getNumber(number);
		classifyNumber(number, zero, odd, even);
	}

	printResults(zero, odd, even);

	system("pause");
	return 0;
}

void initialize(int& zero, int& odd, int& even)
{
	zero = 0;
	odd = 0;
	even = 0;
}

void getNumber(int& number)
{
	cin >> number;
}

void classifyNumber(int number, int& zero, int& odd, int& even)
{
	int result;

	result = number % 2;

	if (result == 0)
	{
		even++;

		if (number == 0)
			zero++;
	}

	else
		odd++;
}

void printResults(int zero, int odd, int even)
{
	cout << "Number of zeros " << zero << endl;
	cout << "Number of odds " << odd << endl;
	cout << "Number of evens " << even << endl;

}

