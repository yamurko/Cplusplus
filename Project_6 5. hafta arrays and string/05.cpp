#include<iostream>

using namespace std;

int main()
{
	enum colorful { GREEN, YELLOW, BLUE, ORANGE, PURPLE, RED, NAVY_BLUE };

	double a[7];

	colorful color;

	for (color = GREEN; color <= NAVY_BLUE; color = static_cast<colorful>(color + 1))
	{
		a[color] = 0.0;
	}

	a[BLUE] += 74.85;

	for (int i = 0; i < 7; i++)
	{
		cout << a[i] << endl;
	}

	system("pause");
	return 0;
}