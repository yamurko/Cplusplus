#include<iostream>
void one();
void two();

using namespace std;

int main()
{
	int s;//static value
	extern int w;//global value
	
	cout << "Enter an integer number (s): ";
	cin >> s;

	one();
	two();

	w += s;

	cout << "In int main w is " << w << endl;

	system("pause");
	return 0;
}

void one()
{
	extern int w;
	cout << "Enter an integer number (w): ";
	cin >> w;

	cout << "In function one w is " << w << endl;
}

int w;//global value

void two()
{
	int z;

	cout << "Enter an integer number (z): ";
	cin >> z;

	w += z;

	cout << "In function two z is " << z << endl;
	cout << "In function two w is " << w << endl;

}