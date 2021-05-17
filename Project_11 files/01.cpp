#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream File;
	char nameOfFile[20];

	cout << "Enter you want to open name of file: ";
	cin.getline(nameOfFile, 20);

	File.open(nameOfFile, ios::out);
	cout << "The file " << nameOfFile << " was opened." << endl;

	File.close();

	system("pause");
	return 0;
}