#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
	char fileName[20], ch, ch2;
	ifstream inFile;
	ofstream outFile;

	outFile.open("movie.txt");

	cout << "Enter name of file:";
	cin >> fileName;

	inFile.open(fileName);

	if (!inFile)
	{
		cout << "File cannot open." << endl;
		exit(0);
	}
	else
		cout << "File can open." << endl;

	while (inFile)
	{
		inFile.get(ch);
		ch2 = toupper(ch);
		outFile.put(ch2);
	}

	inFile.close();
	outFile.close();

	system("pause");
	return 0;
}