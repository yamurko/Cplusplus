#include<iostream>
#include<cmath>
bool polindrom(int num);

using namespace std;

int main()
{
	int x;

	cout << "Enter a integer number: ";
	cin >> x;

	cout << "Is " << x << " polindrom number? " << polindrom(x) << endl << endl;

	system("pause");
	return 0;
}

bool polindrom(int num)
{
	int digit, firstdig, lastdig, flag = 1, a;
	a = num;
	if (a < 10)
		return 1;

	else
	{
		while (a >= 10 && flag == 1)
		{
			digit = log10(a);
			firstdig = a / pow(10, digit);
			lastdig = a % 10;
			if (firstdig == lastdig)
				flag = 1;
			else
				flag = 0;

			a %= static_cast<int>(pow(10, digit));
			a /= 10;
		}
	}

	if (flag == 1)
		return 1;

	else
		return 0;
}