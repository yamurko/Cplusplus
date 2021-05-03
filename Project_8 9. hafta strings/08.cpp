#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>

using namespace std;

void main(void)
{
	string str("I love programming and my favourite programming language is C");

	cout << "Lenght is: " << str.length() << endl;

	int index1 = str.find("programming");
	int index2 = str.find("pro");
	int index3 = str.find("xxx");
	int index4 = str.find_first_of("programming");
	int index5 = str.find_last_of("programming");
	int index6 = str.find_first_not_of("Java");
	int index7 = str.find_last_not_of("Java");

	cout << "Index 1: " << index1 << endl;
	cout << "Index 2: " << index2 << endl;
	cout << "Index 3: " << index3 << endl;
	cout << "Index 4: " << index4 << endl;
	cout << "Index 5: " << index5 << endl;
	cout << "Index 6: " << index6 << endl;
	cout << "Index 7: " << index7 << endl;

	system("pause");
}