#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Enter string: " << endl;
	cin.get(ch);
	cout << "After cin.get(ch) ch = " << ch << endl;

	cin.get(ch);
	cout << "After cin.get(ch) ch = " << ch << endl;

	cin.putback(ch);
	cout << "After cin.putback(ch) ch = " << ch << endl;

	cin.get(ch);
	cout << "After cin.get(ch) ch = " << ch << endl;

	cin.putback(ch);
	cin.get(ch);
	cout << "After cin.putback(ch) and cin.get() ch = " << ch << endl;

	ch = cin.peek();
	cout << "After cin.peek() ch = " << ch << endl;

	cin.get(ch);
	cout << "After cin.get(ch) ch = " << ch << endl;

	return 0;
}