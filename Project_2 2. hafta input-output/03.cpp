#include<iostream>
#include<string>

using namespace std;

int main()
{
	char a;

	cout << "Enter a word or an integer number: " << endl;

	a = cin.get();

	if ((a >= '0') && ( a <= '9'))
	{
		int b;
		cin.putback(a);
		cin >> b;
		cout << "Your entered number: " << b << endl;
	}

	else 
	{
		string str;
		cin.putback(a);
		getline(cin, str);
		cout << "Your entered string: " << str << endl;
	}


	return 0;
}