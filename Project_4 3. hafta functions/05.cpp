//&la �a��r�lan bir de�i�ken adresiyle �a��r�l�r yani �a��r�ld��� yerde yap�lan de�i�iklik
//adresi �a��r�ld��� i�in kendisine de uygulan�r ve de�i�ir.
#include<iostream>

void getScore(int& a);//formal parameter
void printScore(int a);

using namespace std;

int main()
{
	int b;//actual parameter
	cout << "Enter b: ";
	cin >> b;
	cout << endl;
	getScore(b);
	printScore(b);
	cout << endl << "b is " << b << endl;
	system("pause");
	return 0;
}

void getScore(int& a)
{
	cout << "Enter your exam score: ";
	cin >> a;
	cout << endl << "Your score is " << a << endl;
}

void printScore(int a)
{
	if (a >= 90)
		cout << "Your letter grade is A" << endl;

	else if (a >= 80)
		cout << "Your letter grade is B" << endl;

	else if (a >= 70)
		cout << "Your letter grade is C" << endl;

	else if (a >= 60)
		cout << "Your letter grade is D" << endl;

	else
		cout<< "Your letter grade is F" << endl;
}