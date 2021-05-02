#include<iostream>


void addfunc(int&, int&);
void doubleFirst(int, int);
void square_func(int&, int);

using namespace std;

int main()
{
	int num;
	cout << "Enter an integer number: ";
	cin >> num;

	cout << "Inside main num is " << num << endl; 

	addfunc(num, num);

	cout << "After addfunc num is " << num << endl;

	cout << endl << endl;

	doubleFirst(num, num);

	cout << "After doubleFirst num is " << num << endl;

	cout << endl << endl;

	square_func(num, num);

	cout << "After doubleFirst num is " << num << endl;

	system("pause");
	return 0;
}

void addfunc(int& first, int& second)
{
	cout << "After addfunc first is " << first << " second is " << second << endl;

	first *= 2;

	cout << "After addfunc (first *= 2) first is " << first << " second is " << second << endl;

	second += 2;

	cout << "After addfunc (second += 2) first is " << first << " second is " << second << endl;

}

void doubleFirst(int one, int two)
{
	cout << "After doubleFirst one is " << one << " two is " << two << endl;

	one *= 2;

	cout << "After doubleFirst (one *= 2) one is " << one << " two is " << two << endl;

	two += 2;

	cout << "After doubleFirst (two += 2) one is " << one << " two is " << two << endl;
}

void square_func(int& ref, int val)
{
	cout << "After square_func ref is " << ref << " val is " << val << endl;

	ref = pow(ref,2);

	cout << "After square_func (ref = pow(ref,2) ref is " << ref << " val is " << val << endl;

	val += 2;

	cout << "After square_func (val += 2) ref is " << ref << " val is " << val << endl;
}


