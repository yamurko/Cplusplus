#include<iostream>
#include"12.h"

using namespace std;

int main()
{
	Time T1;
	int seconds;

	cout << "Enter seconds: ";
	cin >> seconds;

	T1.converttoTime(seconds);
	T1.printUniversal();
		

	T1.getTime();
	T1.convertintoSeconds();
	T1.printUniversal();
	T1.printTotalSeconds();

	Time T2, T3, T4;

	T2.getTime();
	T3.getTime();

	T4.addTime(T2, T3);

	T4.printUniversal();

	system("pause");
	return 0;
}