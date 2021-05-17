#include<iostream>
#include<fstream>

using namespace std;

void main(void)
{
	fstream file("letters.txt", ios::in);
	char ch, again;
	long offset;

	if (!file)
	{
		cout << "File cannot open." << endl;
		exit(0);
	}

	do
	{
		cout << "Current position: " << file.tellg() << endl;
		cout << "Enter an offset from the beginning of the file: ";
		cin >> offset;
		file.seekg(offset, ios::beg);
		file.get(ch);
		cout << "Character read: " << ch << endl;
		cout << "Do it again? ";
		cin >> again;

	} while (toupper(again) == 'Y');
	

	file.close();


}

