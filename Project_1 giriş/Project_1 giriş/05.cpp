#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a, b, digit, sum = 0;

	cout << "Enter an integer number: " << endl;
	cin >> a;

	digit = log(a) + 1;

	for (int i = 0; i < digit; i++)
	{
		b = a % 10;
		sum += b;
		a /= 10;
	}
	
	cout << "Sum of digits of number: " << sum << endl;

	static_cast<double>(7);

}