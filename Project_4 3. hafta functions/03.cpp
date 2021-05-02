#include<iostream>
int compare(int x, int y);
int compare_2(int x, int y, int z);

using namespace std;

int main()
{
	int x, y, z;

	cout << "Enter x, y and z: ";
	cin >> x >> y >> z;
	
	cout << "Max is: " << compare_2(x, y, z) << endl;

	system("pause");
	return 0;
}

int compare(int x, int y)
{
	if (x >= y)
		return x;

	return y;
}

int compare_2(int x, int y, int z)
{
	return compare(x, compare(y, z));
}