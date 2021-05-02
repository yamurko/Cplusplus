#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

const int MAX_CODE_SIZE = 250;

void readCode(ifstream& inFile, bool& lenCodeOk, int list[], int& length);
void compareCode(ifstream& inFile, ofstream& outFile, int list, int length);

int main()
{
	ifstream inFile;
	ofstream outFile;
	int list[MAX_CODE_SIZE];
	int length;
	bool lenCode;

	inFile.open("codetext.txt");
	outFile.open("comparetext.out");

	readCode(inFile, lenCode, list, length);

	compareCode(inFile, outFile, list, length);

	inFile.close();
	outFile.close();

	system("pause");
	return 0;
}

void readCode(ifstream& inFile, bool& lenCodeOk, int list[], int& length)
{
	lenCodeOk = true;

	inFile >> length;

	if (length > MAX_CODE_SIZE)
	{
		lenCodeOk = false;
		return;
	}

	for (int i = 0; i < length; i++)
	{
		inFile >> list[i];
	}
}

void compareCode(ifstream& inFile, ofstream& outFile, int list[], int length)
{
	int length_2;
	int listOne[MAX_CODE_SIZE];
	bool codeOk = true;

	inFile >> length_2;

	if (length != length_2)
	{
		cout << "The original code and copy code are not same!" << endl;
	}

	for (int i = 0; i < length; i++)
	{
		inFile >> listOne[i];

		if (list[i] != listOne[i])
		{
			codeOk = false;
		}
	}

	cout << "Code Digit       Code Digit Copy" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << setw(5) << list[i] << setw(20) << listOne[i] << endl;
	}

}