#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	fstream File;
	char str[20];

	File.open("text.txt", ios::in);

	//File >> str;
	while (File)//(!File.eof())
	{
		File >> str;
		cout << str << " ";
	}


	File.close();

	system("pause");
	return 0;
}