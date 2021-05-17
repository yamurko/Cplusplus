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

	
	file.write((char*)ch, sizeof(ch));

	file.close();

	file.open("binary.dat", ios::in);

	if (!file)
	{
		cout << "This file cannot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open with reading." << endl;

	file.read((char*)a, sizeof(a));

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t";
	}

	file.close();

	return 0;
}