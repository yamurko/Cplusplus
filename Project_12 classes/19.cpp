#include<iostream>

using namespace std;

class Distance
{
public:
	Distance()
	{
		feet = 0;
		inches = 0;
	}
	Distance(int f, int i)
	{
		feet = f;
		inches = i;
	}
	void operator = (const Distance& D)
	{
		feet = D.feet;
		inches = D.inches;
	}
	void displayDistance()
	{
		cout << "F: " << feet << endl;
		cout << "I: " << inches << endl;
	}
private:
	int feet; // 0 to infinity
	int inches; // 0 to 12
};

void main()
{
	Distance d1(10, 11), d2;

	d2 = d1;

	d2.displayDistance();
}