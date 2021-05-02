#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	double test1, test2, test3, test4, test5;
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

	inFile >> test1 >> test2 >> test3 >> test4 >> test5;
	outFile << "Test score: " << setw(6) << test1 << setw(6) << test2 << setw(6) << test3 << setw(6) << test4 << setw(6) << test5 << endl;

	average = (test1 + test2 + test3 + test4 + test5) / 5;

	outFile << "Average test score: " << setw(6) << average << endl;

	inFile.close();
	outFile.close();


	system("pause");
	return 0;
}