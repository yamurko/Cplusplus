// This program demonstrates the use of a structure 
//variable to
// store a record of information to a file.
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
	fstream people("people.dat", ios::out | ios::binary);
	Info person;
	char again;
	if (!people)
	{
		cout << "File could not be opened.\n" << endl;
		system("pause");
		exit(0);
	}
	do
	{
		cout << "Enter informations about a person:\n";
		cout << "Name: ";
		cin.getline(person.name, 31);
		cout << "Age: ";
		cin >> person.age;
		cin.ignore(); // skip over remaining newline.
		cout << "Address: ";
		cin.getline(person.address, 51);
		cout << "Phone: ";
		cin.getline(person.phone, 14);
		people.write((char*)&person, sizeof(person));
		cout << "Do you want to enter another record? ";
		cin >> again;
		cin.ignore();
	} while (toupper(again) == 'Y');
	people.close();
	system("pause");
}