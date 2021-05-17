#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

bool controlFile(fstream &, char name[]);

int main()
{
	fstream File;
	char str[20], name[20];
	bool boolean;

	cout << "Enter you want to open name of file: ";
	cin >> name;

	boolean = controlFile(File, name);

	if (boolean == false)
	{
		cout << "The file cannot open." << endl;
		exit(0);
	}

	else
		cout << "The file can open." << endl;

	File >> str;
	while (!File.eof())//(File)
	{
		cout << str << " ";
		File >> str;
	}

	File.close();

	system("pause");
	return 0;
}

bool controlFile(fstream &file, char s[20])
{
	bool cont;
	file.open(s, ios::in);

	if (file.fail())
		cont = false;
	else
		cont = true;

	return cont;
}