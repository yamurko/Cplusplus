#include<iostream>
void test();

using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		test();
	}

	system("pause");
	return 0;
}

void test()
{
	int y = 0;
	static int x = 0;

	y += 2;
	x += 2;

	cout << "In function test y is " << y << endl;
	cout << "In function test x is " << x << endl;
}