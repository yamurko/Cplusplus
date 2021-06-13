#include<iostream>

using namespace std;

class circle
{
public:
	float area(float r)
	{
		radius = r;
		return 3.14 * radius * radius;
	}

private:
	float radius;
};

int main()
{
	float radius;
	circle cir;

	cout << "Enter radius of circle: ";
	cin >> radius;

	cout << "Area is: " << cir.area(radius) << endl;

	return 0;
}