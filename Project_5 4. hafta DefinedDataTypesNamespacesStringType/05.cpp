#include<iostream>
#include<string>

using namespace std;

bool isVowel(char ch);
string pigLatinString(string pstr);
string rotate(string pstr);

int main()
{
	string str;

	cout << "Enter a string: ";
	cin >> str;
	cout << endl << endl;

	cout << "The pig Latin form of " << str << " is " << pigLatinString(str) << endl;
}

bool isVowel(char ch)
{
	switch (ch)
	{
	case 'A':
	case 'E':
	case 'U':
	case 'I':
	case 'O':
	case 'Y':
	case 'a':
	case 'e':
	case 'u':
	case 'i':
	case 'o':
	case 'y':
		return true;
	default:
		return false;
	}
}

string pigLatinString(string pstr)
{
	string::size_type len;
	string::size_type counter;
	bool foundVowel;

	if (isVowel(pstr[0])) //if (isVowel(pstr[0])==true) 
	{
		pstr = pstr + "-way";
	}

	else
	{
		pstr = pstr + "-";
		pstr = rotate(pstr);

		len = pstr.length();
		foundVowel = false;

		for (counter = 1; counter < len - 1; counter++)
		{
			if (isVowel(pstr[0]))
			{
				foundVowel = true;
				break;
			}

			else
			{
				pstr = rotate(pstr);
			}
		}

		if (!foundVowel)
		{
			pstr = pstr.substr(1, len) + "-way";
		}

		else
		{
			pstr = pstr + "ay";
		}
	}

	return pstr;
}

string rotate(string pstr)
{
	string::size_type len = pstr.length();

	string rStr;

	rStr = pstr.substr(1, len - 1) + pstr[0]; //here+t

	return rStr;
}




