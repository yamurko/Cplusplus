#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

void main(void)
{
	string str("I love programming and my favourite programming language is C");
	size_t sz;

	sz = str.size();
	cout << "Size of string (before): " << sz << endl;

	str.resize(sz + 2, '+');
	sz = str.size();
	cout << "Size of string (after resizing): " << sz << endl;
	cout << str << endl << endl;

	int start = str.rfind("C++");
	cout << start << endl;
	str.erase(start, 3);//str.resize(sz - 3);
	sz = str.size();
	cout << "Size of string (after erasing): " << sz << endl;
	cout << str << endl << endl;


	str.replace(start, 4, "Java");
	sz = str.size();
	cout << "Size of string (after replacing): " << sz << endl;
	cout << str << endl << endl;

	str.append(" Script");
	sz = str.size();
	cout << "Size of string (after appending): " << sz << endl;
	cout << str << endl << endl;

	string str_copy;
	str_copy.assign(str, 2, 16);//2. indexten itibaren 16 karakter ata.
	cout << str_copy << endl << endl;

	str_copy.assign(str.begin() + 8, str.end() - 32);
	cout << str_copy << endl << endl;

	system("pause");
}