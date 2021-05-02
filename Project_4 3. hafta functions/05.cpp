//&la çaðýrýlan bir deðiþken adresiyle çaðýrýlýr yani çaðýrýldýðý yerde yapýlan deðiþiklik
//adresi çaðýrýldýðý için kendisine de uygulanýr ve deðiþir.
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