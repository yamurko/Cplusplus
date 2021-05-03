#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	char str1[100], str2[100];
	char cont1[100], cont2[100];
	int len1, len2, flag = 0;
	string str_1, str_2;
	string cont_1, cont_2;
	int len_1, len_2, flag_2 = 0;

	cout << "Enter first word: ";
	cin >> str1;

	cout << "Enter second word: ";
	cin >> str2;

	cout << "Enter first word: ";
	cin >> str_1;

	cout << "Enter second word: ";
	cin >> str_2;

	len1 = strlen(str1);
	len2 = strlen(str2);

	len_1 = str_1.length();
	len_2 = str_2.length();

	cont_1 = str_1;
	cont_2 = str_2;

	if (len1 != len2)
		flag = 1;

	else
	{
		for (int i = 0; i < len1; i++)
		{
			if (islower(str1[i]) != 0)
				cont1[i] = toupper(str1[i]);
			else
				cont1[i] = str1[i];

			if (islower(str2[i]) != 0)
				cont2[i] = toupper(str2[i]);
			else
				cont2[i] = str2[i];

			if (cont1[i] != cont2[i])
			{
				flag = 1;
				break;
			}
		}
	}

	if (len_1 != len_2)
		flag_2 = 1;

	else
	{
		for (int i = 0; i < len_1; i++)
		{
			cont_1[i] = toupper(str_1[i]);
			cont_2[i] = toupper(str_2[i]);
		}

		if (cont_1 != cont_2)
		{
			flag_2 = 1;
		}
	}

	if (flag == 0)
		cout << "Words are same." << endl;
	else
		cout << "Words are not same." << endl;

	if (flag_2 == 0)
		cout << "Words are same." << endl;
	else
		cout << "Words are not same." << endl;

	system("pause");
	return 0;
}
