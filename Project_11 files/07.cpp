#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

bool controlFile(fstream&, char name[], int);
void stateFile(fstream&);

int main()
{
	fstream File;
	char name[20];
	bool boolean;
	int flag;

	cout << "Enter you want to open name of file: ";
	cin >> name;

	cout << "Press 1 to write data to the file." << endl;
	cout << "Press 2 to read data from the file." << endl;
	cin >> flag;

	cout << "rdstate: " << File.rdstate() << endl;//goodbit

	if (flag == 1)//write
	{
		boolean = controlFile(File, name, flag);

		if (boolean == false)
		{
			cout << "\nThe file cannot open." << endl;
			exit(0);
		}

		else
			cout << "\nThe file can open." << endl;

		int num;
		cout << "Enter an integer number to write in file.";
		cin >> num;
		cout << "\nWriting to the file.\n";
		File << num;
		stateFile(File);
		cout << "\n\n************************************************" << endl << endl;
		File.close();
	}

	else if (flag == 2)//read
	{
		int num2 = 45;
		boolean = controlFile(File, name, flag);

		if (boolean == false)
		{
			cout << "\nThe file cannot open." << endl;
			exit(0);
		}

		else
			cout << "\nThe file can open." << endl;

		cout << "rdstate: " << File.rdstate() << endl;//goodbit
		cout << "\nReading to the file.\n";
		File >> num2;
		cout << num2 << endl;
		cout << "rdstate: " << File.rdstate() << endl;//eofbit
		stateFile(File);//The end of file returns true because the end of the file has been reached.
		File >> num2;
		cout << num2 << endl;
		cout << "rdstate: " << File.rdstate() << endl;//failbit
		stateFile(File);//eof bit and fail bit return true.
		File << num2 << endl;
		cout << "rdstate: " << File.rdstate() << endl;//badbit
		stateFile(File);//fail bit and bad bit return true.
		cout << "\n\n************************************************" << endl << endl;
		File.close();
	}

	system("pause");
	return 0;
}

bool controlFile(fstream& file, char s[20], int flag)
{
	bool cont;
	if (flag == 1)
		file.open(s, ios::out);
	else if(flag == 2)
		file.open(s, ios::in);

	if (file.fail())
		cont = false;
	else
		cont = true;

	return cont;
}

void stateFile(fstream &File)
{
	cout << "\nState of file" << endl;
	cout << "eof bit: " << File.eof() << endl;
	cout << "fail bit: " << File.fail() << endl;
	cout << "bad bit: " << File.bad() << endl;
	cout << "good bit: " << File.good() << endl;
	File.clear();
}