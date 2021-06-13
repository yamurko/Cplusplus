#include<iostream>
#include<math.h>
#include"36.h"
#define PI 3.14
using namespace std;

void Complex::goster()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout << endl << "Sayi: " << a;

	cout.setf(ios::showpos);
	cout << b;
	cout.unsetf(ios::showpos);
	cout << "*i\n------------------------------" << endl;
}

void Complex::gosterKutupsal()
{
	double r = sqrt((a * a) + (b * b));

	if (!a)
	{
		cout << "Aci hesabinda sifira bolme!" << endl;
		exit(1);
	}

	double teta = atan(b / a); //arctan

	cout << "\nSayi (kutupsal) = (" << r << " , " << ((teta * 180) / PI) << ")\n"
		<< "----------------------------" << endl;
}