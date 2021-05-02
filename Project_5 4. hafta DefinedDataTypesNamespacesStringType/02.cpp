#include<iostream>

using namespace std;

namespace ns1
{
	int a = 5;
	int b = 10;
}

namespace ns2
{
	double a = 4.8;
	double b = 15.04;
}

int main()
{
	using namespace ns1;
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;

	cout << "a is " << ns2::a << endl;
	cout << "b is " << ns2::b << endl;

}