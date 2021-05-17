#include<iostream>
#include<fstream>

using namespace std;

void main(void)
{
	fstream file("letters.txt", ios::in);
	char ch;

	if (!file)
	{
		cout << "File cannot open." << endl;
		exit(0);
	}

	file.seekg(7L, ios::beg);
	file.get(ch);
	cout << ch << endl;

	file.seekg(-10L, ios::end);
	file.get(ch);
	cout << ch << endl;

	file.seekg(8L, ios::cur);
	file.get(ch);
	cout << ch << endl;

	file.close();
	

}

