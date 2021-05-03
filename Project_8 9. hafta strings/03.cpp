#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;

int main()
{
	const char* planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

	for (int i = 0; i <= 8; i++) {
		cout << "Planet[" << i << "]:" << planets[i] << endl;
	}
	system("pause");
	return 0;
}