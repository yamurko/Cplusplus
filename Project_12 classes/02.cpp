#include<iostream>
#include<string>

using namespace std;

class Gradebook
{
public:
	void message(string str)
	{
		cout << "Welcome to gradebook for " << str << endl;
	}

private:

};


int main()
{
	string str;
	Gradebook gradebook;

	cout << "Enter name of course:";
	getline(cin, str);

	gradebook.message(str);

	return 0;
}