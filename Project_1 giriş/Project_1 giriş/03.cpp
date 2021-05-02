#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a, b, sum, sub, mul, div, mod;

	cout << "Enter two numbers: " << endl;

	cin >> a >> b;

	sum = a + b;
	sub = fabs(a - b);
	mul = a * b;
	div = a / b;
	mod = int(a) % int(b);

	cout << sum << "\n" << sub << "\n" << mul << "\n" << div << "\n" << mod << endl;

}