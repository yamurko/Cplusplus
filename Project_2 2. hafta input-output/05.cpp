#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	// User types any char or string of length < 100
	//cout << !cin; //This gives true(1) if a char entered. (an error occurred).
	// Because input stream is in a failed state, cin will be evaluated to false


	while (!cin)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Error! Enter a number: " << endl;
		cin >> n;
	}
	return 0;
}