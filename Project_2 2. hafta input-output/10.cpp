#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	double note1, note2, note3, note4, note5;
	double average;

	string firstName;
	string lastName;

	inFile.open("test.txt");
	outFile.open("testavg.out");

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	cout << "Proccesing data" << endl;

	inFile >> firstName >> lastName;
	outFile << "Student name: " << firstName << " " << lastName << endl;
	//cout << "Student name: " << firstName << " " << lastName << endl;

	inFile >> note1 >> note2 >> note3 >> note4 >> note5;
	outFile << "Student's notes: " << setw(6) << note1 << setw(6) << note2 << setw(6) << note3 << setw(6) << note4 << setw(6) << note5 << endl;
	//cout << "Student's notes: " << setw(6) << note1 << setw(6) << note2 << setw(6) << note3 << setw(6) << note4 << setw(6) << note5 << endl;


	average = (note1 + note2 + note3 + note4 + note5) / 5;

	outFile << "Average of notes: " << average << endl;
	//cout << "Average of notes: " << setw(6) << average << endl;

	inFile.close();
	outFile.close();

	return 0;
}