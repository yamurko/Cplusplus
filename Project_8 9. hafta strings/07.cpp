#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>

using namespace std;

void main(void)
{
	string str1, str2;
	string cont1, cont2;
	int len1, len2, flag = 0;

	cout << "Enter first word: ";
	cin >> str1;

	cout << "Enter second word: ";
	cin >> str2;


	len1 = str1.length();
	len2 = str2.length();

	cont1 = str1;
	cont2 = str2;

	if (len1 != len2)
		flag = 1;

	else
	{
		transform(cont1.begin(), cont1.end(), cont1.begin(), ::toupper);
		transform(cont2.begin(), cont2.end(), cont2.begin(), ::toupper);

		if (cont1 != cont2)
			flag = 1;
	}

	if (flag == 0)
		cout << "Words are same." << endl;
	else
		cout << "Words are not same." << endl;

	system("pause");
}