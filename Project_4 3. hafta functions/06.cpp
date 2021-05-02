//&lý deðiþkenler adres üzerinden iþlem gördüðü için bu deðiþkeni referans olarak alan deðiþkende gerçekleþen  
//deðiþiklikler orijinal sayýda da gerçekleþir.
#include<iostream>
#include<cmath>

void func_one(int, int&, char);
void func_two(int&, int, char&);

using namespace std;

int main()
{
	int num_1, num_2;
	char ch;

	cout << "Enter two integers and a character: ";
	cin >> num_1 >> num_2 >> ch;
	cout << endl << "Inside main num_1 is " << num_1 << " num_2 is " << num_2 << " ch is " << ch << endl;

	func_one(num_1, num_2, ch);

	cout << endl << "After func_one num_1 is " << num_1 << " num_2 is " << num_2 << " ch is " << ch << endl;

	func_two(num_1, num_2, ch);

	cout << endl << "After func_two num_1 is " << num_1 << " num_2 is " << num_2 << " ch is " << ch << endl;

	system("pause");
	return 0;
}

void func_one(int x, int& y, char z)
{
	int one;
	one = x;
	x++;
	y = pow(y, 3);
	z = 'G';

	cout << endl << "func_one one is " << one << " x is " << x << " y is " << y << " z is " << z << endl;
}

void func_two(int& a, int b, char& c)
{
	a--;
	b *= -1;
	c = 'p';

	cout << endl << "func_two a is " << a << " b is " << b << " c is " << c << endl;
}

