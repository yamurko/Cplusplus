#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void initilize(int &lc, int list[]);
void copytext(ifstream& intext, ofstream& outtext, char& ch, int list[]);
void charactercount(char ch, int list[]);
void writetotal(ofstream& outtext, int lc, int list[]);

int main()
{
	int line_count;
	int letter_count[26];
	char ch;

	ifstream inFile;
	ofstream outFile;

	inFile.open("textin.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file!" << endl;
		return 0;//exit(0);
	}

	outFile.open("textout.out");

	initilize(line_count, letter_count);

	inFile.get(ch);

	while (inFile)
	{
		copytext(inFile, outFile, ch, letter_count);

		line_count++;

		inFile.get(ch);
	}

	writetotal(outFile, line_count, letter_count);

	inFile.close();
	outFile.close();

	system("pause");
	return 0;
}

void initilize(int& lc, int list[])
{
	lc = 0;

	for (int i = 0; i < 26; i++)
	{
		list[i] = 0;
	}
}

void copytext(ifstream& intext, ofstream& outtext, char& ch, int list[])
{
	while (ch != '\n')
	{
		outtext << ch;

		charactercount(ch, list);

		intext.get(ch);
	}

	outtext << ch;
}

void charactercount(char ch, int list[])
{
	int index;

	ch = towupper(ch);

	index = static_cast<int>(ch) - static_cast<int>('A');

	if (index >= 0 && index < 26)
	{
		list[index]++;
	}
}

void writetotal(ofstream& outtext, int lc, int list[])
{
	outtext << endl << endl;

	outtext << "The number of lines: " << lc << endl;

	for (int i = 0; i < 26; i++)
	{
		outtext << static_cast<char>(i + static_cast<int>('A')) << " count = " << list[i] << endl;
	}
}
