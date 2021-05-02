#include<iostream>

using namespace std;

int main()
{
	char first, last;

	first = cin.get();
	cin.ignore(256, ' ');
	last = cin.get();

	cout << "Your initials are: " << first << " " << last << endl;

	return 0;
}