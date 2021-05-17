#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream File;
	char nameOfFile[20];

	cout << "Enter you want to open name of file: ";
	cin.getline(nameOfFile, 20);

	File.open(nameOfFile, ios::out | ios::in);
	if(File.is_open())
		cout << "The file " << nameOfFile << " was opened." << endl;
	else
		cout << "The file " << nameOfFile << " was not opened." << endl;

	File.close();

	system("pause");
	return 0;
}