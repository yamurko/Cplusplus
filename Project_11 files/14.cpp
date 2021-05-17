#include<iostream>
#include<fstream>
#include<ctype.h>

using namespace std;

struct People
{
	char name[30];
	int age;
	char address[50];
};

int main()
{
	fstream file("person.dat", ios::out | ios::binary);

	struct People person;

	char ch;

	if (!file)
	{
		cout << "This file cannoot open." << endl;
		exit(0);
	}
	else
		cout << "This file can open. Continue writing..." << endl;

	do
	{
		cout << "Enter name of person: ";
		cin.ignore();
		cin.getline(person.name, 30);
		cout << endl << "Enter age of person: ";
		cin >> person.age;
		cout << endl << "Enter address of person: ";
		cin.ignore();
		cin.getline(person.address, 50);

		file.write((char*)&person, sizeof(person));

		cout << endl << "Do you want to continue for another person?";
		cin >> ch;

	} while (toupper(ch)=='Y');

	file.close();

	file.open("person.dat", ios::in | ios::binary);

	if (!file)
	{
		cout << "This file cannoot open." << endl;
		exit(0);
	}
	else
		cout << endl << "This file can open. Continue reading..." << endl << endl;

	cout << "The Person Informations from file:\n";

	file.read((char*)&person, sizeof(person));

	while (!file.eof())
	{
		cout << person.name << endl;
		cout << person.age << endl;
		cout << person.address << endl;
		file.read((char*)&person, sizeof(person));
	}

	file.close();

	return 0;
}