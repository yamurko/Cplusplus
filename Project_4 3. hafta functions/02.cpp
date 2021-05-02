#include<iostream>
double max_1(double x, double y);
double max_2(double x, double y);
double max_3(double x, double y);

using namespace std;

int main()
{
	double x, y, max1, max2, max3;

	cout << "Enter x and y: ";
	cin >> x >> y;

	max1 = max_1(x, y);
	cout << "Max: " << max1 << endl;

	max2 = max_2(x, y);
	cout << "Max: " << max2 << endl;

	max3 = max_3(x, y);
	cout << "Max: " << max3 << endl;

	system("pause");
	return 0;
}

double max_1(double x, double y)
{
	double max;

	if (x >= y)
		max = x;

	else
		max = y;
	return max;
}

double max_2(double x, double y)
{
	if (x >= y)
		return x;

	else
		return y;
}

double max_3(double x, double y)
{
	if (x >= y)
		return x;

	return y;
}


