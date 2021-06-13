#include<iostream>
#include"17.h"

using namespace std;

void main()
{
	Date date1(7, 4, 2004);
	Date date2; // date2 defaults to 1/1/2000
	cout << "date1 = ";
	date1.print();
	cout << "\ndate2 = ";
	date2.print();

	date2 = date1; //default memberwise assigment
	cout << "\n\nAfter default memberwise assigment, date2 = ";
	date2.print();
}