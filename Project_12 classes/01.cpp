#include<iostream>
#include<string>

using namespace std;

class Gradebook
{
public:
	void message()
	{
		cout << "Welcome to gradebook." << endl;
	}

private:

};


int main()
{
	Gradebook gradebook;

	gradebook.message();

	return 0;
}