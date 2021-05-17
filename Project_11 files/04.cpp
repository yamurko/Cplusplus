#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	fstream File;
	float num = 12.3654;

	File.open("C:\\C++\\file.txt", ios::out);

	if (File)
		cout << "The file was write mode opened." << endl;
	else
		cout << "The file was not write mode opened." << endl;

	File << setw(30) << "this morning " << endl;
	File << setw(30) << "weather is good" << endl;
	File << setw(30) << "hello world" << endl;
	File << setw(30) << setprecision(5) << num << endl;
	File << setw(30) << setprecision(4) << num << endl;
	File << setw(30) << setprecision(3) << num << endl;
	File << setw(30) << setprecision(2) << num << endl;


	File.close();

	system("pause");
	return 0;
}