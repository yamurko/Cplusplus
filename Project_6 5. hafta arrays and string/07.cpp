#include<iostream>

using namespace std;

int main()
{
	char studentName[21];
	char myName[20];
	char yourName[20];

	strcpy_s(myName, "Yagmur Kocabiyik");
	cout << myName << endl;

	cout << strlen("Yagmur Kocabiyik") << endl;
	cout << strlen(myName) << endl << endl;

	int len;
	len = strlen("Mucbir sebepler");
	cout << len << endl << endl;

	strcpy_s(yourName, "Meliksah Altuntas");
	strcpy_s(studentName, yourName);
	cout << yourName << endl;
	cout << studentName << endl << endl;

	cout << strcmp("Armut", "Ayva") << endl << endl;

	strcpy_s(yourName, "Mirkelam");
	strcpy_s(myName, "Teoman");
	cout << strcmp(myName, yourName) << endl << endl;

	system("pause");
	return 0;
}