#include<iostream>

using namespace std;

int main()
{
	int id;
	char name[50];

	cout << "Enter id: " << endl;
	cin >> id;
	cin.ignore(); // yaz�lmazsa getline fonksiyonu '\n' i g�r�nce sistem d��� kal�yor bu y�zden istenileni kullan�c�dan alm�yor.

	cout << "Enter your name: " << endl;
	cin.getline(name, 50);


	cout << "Your id is: " << id << "\n" << "Your name is: " << name << endl;

	return 0;
}