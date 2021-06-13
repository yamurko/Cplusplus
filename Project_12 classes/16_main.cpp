#include<iostream>
#include<iomanip>
#include"16.h"

using namespace std;

void main()
{
	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(14, 25, 42);
	Time t5(27, 74, 99);

	cout << "Constructed with:\n\nt1: all arguments defaulted\n";
	t1.printUniversal(); // 00:00:00
	cout << endl;
	t1.printStandart(); //12:00:00 AM

	cout << "\n\nt2: hour specified; minute and second defaulted\n";
	t2.printUniversal(); // 02:00:00
	cout << endl;
	t2.printStandart(); // 2:00:00 AM

	cout << "\n\nt3: hour and minutes specified;  defaulted\n";
	t3.printUniversal(); // 21:34:00
	cout << endl;
	t3.printStandart(); //9:34:00 PM

	cout << "\n\nt4: hour, minutes and second specified\n";
	t4.printUniversal(); // 12:25:42
	cout << endl;
	t4.printStandart(); //12:25:42 PM

	cout << "\n\nt5: all bad(invalved) values specified\n";
	t5.printUniversal(); // 00:00:00
	cout << endl;
	t5.printStandart(); //12:00:00 AM

	Time t6;
	t6.setHour(3);
	t6.setMinute(6);
	t6.setSecond(9);

	cout << "\n\nt6: all argument setted\n";
	t6.printUniversal(); // 03:06:09
	cout << endl;
	t6.printStandart(); // 03:06:09 AM

	Time t7;
	cout << "\n\nt7: all argument setted\n";
	t7.setTime(13, 45, 20);
	t7.printUniversal(); // 13:45:20
	cout << endl;
	t7.printStandart(); // 01:45:20 PM

	cout << endl << endl;
}