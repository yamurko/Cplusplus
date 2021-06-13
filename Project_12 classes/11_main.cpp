#include<iostream>
#include"11.h"

using namespace std;

int main()
{
	operation op;
	int x_1, x_2, y_1, y_2;
	//default noktalar
	op.goster();
	cout << "Enter x1: ";
	cin >> x_1;
	cout << "Enter y1: ";
	cin >> y_1; 
	cout << "Enter x2: ";
	cin >> x_2; 
	cout << "Enter y2: ";
	cin >> y_2;

	cout << endl << "kullanici noktalari" << endl;
	op.yeniDogru(x_1, x_2, y_1, y_2);
	op.goster();

	op.egim();
	op.egimK();
	op.denklem();

	system("pause");
	return 0;
}