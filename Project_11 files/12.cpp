#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream file("binary.dat", ios::out | ios::binary);
	int ch[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a[10];

	if (!file)
	{
		cout << "This file cannot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open with writing." << endl;

	for (int i = 0; i < 10; i++)
	{
		file.write((char*)&ch[i], sizeof(int));
	}

	file.close();

	file.open("binary.dat", ios::in);

	if (!file)
	{
		cout << "This file cannot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open with reading." << endl;

	for (int i = 0; i < 10; i++)
	{
		file.read((char*)&a[i], sizeof(int));
		cout << a[i] << "\t";
	}

	file.close();

	return 0;
}