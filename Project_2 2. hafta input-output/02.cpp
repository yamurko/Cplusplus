#include<iostream>

using namespace std;

int main()
{
	int id;
	char name[50];

	cout << "Enter id: " << endl;
	cin >> id;
	cin.ignore(); // yazýlmazsa getline fonksiyonu '\n' i görünce sistem dýþý kalýyor bu yüzden istenileni kullanýcýdan almýyor.

	cout << "Enter your name: " << endl;
	cin.getline(name, 50);


	cout << "Your id is: " << id << "\n" << "Your name is: " << name << endl;

	return 0;
}