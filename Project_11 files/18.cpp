// This program demonstrates the use of a structure variable to 
//read structure information from a file.
#include <iostream>
#include <fstream>
#include <iomanip> //setprecision
#include <ctype.h> // for toupper
using namespace std;
// Declare a structure for the record.
struct Info
{
	char name[31];
	int age;
	char address[51];
	char phone[14];
};
void main(void) {
	fstream people("people.dat", ios::in | ios::binary);
	Info person;
	char again;
	if (!people)
	{
		cout << "File could not be opened.\n" << endl;
		system("pause");
		exit(0);
	}
	//information reading from file
	cout << "The Person Informations from file:\n";
	people.read((char*)&person, sizeof(person));
	while (!people.eof())
	{
		cout << person.name << endl;
		cout << person.age << endl;
		cout << person.address << endl;
		cout << person.phone << endl;
		people.read((char*)&person, sizeof(person));
	}
	people.close();
	system("pause");
}