// This program allows the user to edit a specific 
//record in the people.dat file.
#include <iostream>
#include <fstream>
using namespace std;
// Declare a structure for the record.
struct Info
{
	char name[31];
	int age;
	char address[51];
	char phone[14];
};
int main()
{
	fstream people("people.dat", ios::in | ios::out |ios::binary);
	Info person;
	long recNum;
	if (!people)
	{
		cout << "File could not be opened.\n" << endl;
		system("pause");
		exit(0);
	}
	cout << "Which record do you want to edit?";
	cin >> recNum;
	people.seekg(recNum * sizeof(person), ios::beg);
	people.read((char*)&person, sizeof(person));
	cout << "Name: ";
	cout << person.name << endl;
	cout << "Age: ";
	cout << person.age << endl;
	cout << "Address: ";
	cout << person.address << endl;
	cout << "Phone Number: ";
	cout << person.phone << endl;
	cin.ignore();
	cout << "Enter the new data:\n";
	cout << "Name: ";
	cin.getline(person.name, 31);
	cout << "Age: ";
	cin >> person.age;
	cin.ignore();
	cout << "Adrress: ";
	cin.getline(person.address, 51);
	cout << "Phone Number: ";
	cin.getline(person.phone, 14);
	people.seekp(recNum * sizeof(person), ios::beg);
	people.write((char*)&person, sizeof(person));

	people.seekg(0L, ios::beg);

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
	return 0;
}