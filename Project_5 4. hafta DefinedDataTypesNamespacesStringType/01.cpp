#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	enum sports{basketball,football,golf,handball,swimming,volleyball};

	sports hobbies, proffesional;

	hobbies = football;
	proffesional = hobbies;
	cout << "Proffesional " << proffesional << endl;
	proffesional = static_cast<sports>(hobbies + 1);
	cout << "Proffesional " << proffesional << endl;

	system("pause");
	return 0;
}