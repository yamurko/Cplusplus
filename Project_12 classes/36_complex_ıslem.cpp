#include<iostream>
#include<math.h>
#include"36.h"

using namespace std;

Complex islem(Complex k1, Complex k2, char op)//friend
{
	Complex temp;
	Complex k2es(k2.a, -k2.b);//eslenik
	Complex pay, payda;

	switch (op)
	{
	case '+':
		temp.a = k1.a + k2.a;
		temp.b = k1.b + k2.b;
		break;

	case '-':
		temp.a = k1.a - k2.a;
		temp.b = k1.b - k2.b;
		break;

	case '*':
		temp.a = (k1.a * k2.a) - (k1.b * k2.b);
		temp.b = (k1.a * k2.b) + (k2.a * k1.b);
		break;

	case '/':
		pay = islem(k1, k2es, '*');
		payda = islem(k2, k2es, '*');

		if (!payda.a)
		{
			cout << "Hata: sifira bolme!" << endl;
			exit(0);
		}

		temp.a = pay.a / payda.a;
		temp.b = pay.b / payda.b;
		break;

	default:
		cout << "Yanlis veri girisi yapildi!" << endl;
		exit(0);
	}

	return temp;
}