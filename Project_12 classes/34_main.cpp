#include<iostream>
#include<iomanip>
#include"34_circle.h"
#include"34_point.h"

using namespace std;

int main()
{
	Circle circle1(1, 2, 3);
	Circle circle2;

	cout << "Circle 1 should be (1,2) and have radius of 3 is " << endl;
	circle1.print();

	circle2.setPoint(4, 5);
	circle2.setRadius(6);

	cout << "Circle 2 should be (4,5) and have radius of 6 is " << endl;
	circle2.print();

	return 0;
}