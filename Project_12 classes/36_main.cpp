#include<iostream>
#include"36.h"

using namespace std;

int main()
{
	Complex k1(3, 4);
	Complex k2;
	Complex sonuc;

	double a, b;
	char op;

	k1.goster();
	k1.gosterKutupsal();

	cout << "1. komplex sayinin gercek ve sanal kismini giriniz: ";
	cin >> a;
	cin >> b;
	k1.veriGir(a,b);

	cout << "2. komplex sayinin gercek ve sanal kismini giriniz: ";
	cin >> a;
	cin >> b;
	k2.veriGir(a, b);

	cout << "Islem turunu giriniz: ";
	cin >> op;

	sonuc = islem(k1, k2, op);
	sonuc.goster();
	sonuc.gosterKutupsal();


	return 0;
}