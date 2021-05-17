#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	fstream File;
	char ch, ch2[100];

	File.open("newfile.txt", ios::in);

	if (!File)
	{
		cout << "This file cannot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open." << endl;

	while (File)
	{
		File.get(ch);
		cout << ch;
	}

	File.close();

	File.open("newfile.txt", ios::app);

	if (!File)
	{
		cout << "This file cannot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open." << endl;
	
	cout << "Enter a Johnny Depp movie that is not on the list. (with year of construction and director)";

		cin.getline(ch2,100);
		File << ch2;
	
	File.close();
	File.open("newfile.txt", ios::in);

	if (!File)
	{
		cout << "This file cannot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open." << endl;

	cout << "\nYour adding movie:" << endl;
	cout << "-------------------------------------" << endl << endl;

	while (File)
	{
		File.get(ch);
		cout << ch;
	}
		
	File.close();
	cout << endl;
	system("pause");
	return 0;
}