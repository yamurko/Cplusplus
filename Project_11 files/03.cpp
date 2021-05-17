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

	File << "this morning " << endl;
	File << "weather is good" << endl;

	if (File)
		cout << "The file " << nameOfFile << " was write mode opened." << endl;
	else
		cout << "The file " << nameOfFile << " was not write mode opened." << endl;

	File.close();

	File.open(nameOfFile, ios::app);

	if (File)
		cout << "The file " << nameOfFile << " was append mode opened." << endl;
	else
		cout << "The file " << nameOfFile << " was not append mode opened." << endl;

	File << "hello world" << endl;

	File.close();

	system("pause");
	return 0;
}