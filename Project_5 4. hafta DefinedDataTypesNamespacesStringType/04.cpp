#include<iostream>
#include<string>

using namespace std;

int main()
{
	string sentence;
	string str;
	string str_;
	string::size_type position;

	sentence = "To be not to be";
	str = "peaceful";

	cout << sentence.find("to") << endl;
	cout << sentence.find("n") << endl;
	cout << sentence.find("ot") << endl;
	cout << sentence.find("the") << endl;
	cout << sentence.find('o', 8) << endl;
	position = sentence.find("be");
	cout << position << endl;

	cout << sentence.substr(0, 5) << endl;
	cout << sentence.substr(4, 10) << endl;
	cout << sentence.substr(10, 7) << endl;
	cout << sentence.substr(1, 5) << endl;
	cout << str.substr(2, 1) << endl;
	str_ = sentence.substr(0, 8);
	cout << str_ << endl;

	system("pause");
	return 0;
}