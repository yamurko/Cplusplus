#include<iostream>
#include"11.h"

using namespace std;

operation::operation()
{
	x1 = 1;
	x2 = 2;
	y1 = 1;
	y2 = 2;
}

void operation::yeniDogru(int x_1, int x_2, int y_1, int y_2)
{
	x1 = x_1;
	x2 = x_2;
	y1 = y_1;
	y2 = y_2;
}

/*void operation::yeniDogru(int x1, int x2, int y1, int y2)
{
	this -> x1 = x1;
	this-> x2 = x2;
	this-> y1 = y1;
	this-> y2 = y2;
}*/

void operation::goster()
{
	cout << endl << "Dogru: ( " << x1 << "," << y1 << " ) - ( " << x2 << "," << y2 << " )" << endl;
}

void operation::egim()
{
	cout << endl << "Egim: "<< (float)(y2 - y1) / (x2 - x1) << endl;
}

void operation::egimK()
{
	cout << endl << "Egim: " << (y2 - y1) << "/" << (x2 - x1) << endl;
}

void operation::denklem()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << endl << "Denklem: y = " << (float)(y2 - y1) / (x2 - x1) << "x" << endl;
}