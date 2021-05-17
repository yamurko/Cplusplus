#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	fstream File;
	char str[1000];

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
		File.getline(str, 1000, '-');
		cout << str << endl;
	}

	File.close();

	system("pause");
	return 0;
}