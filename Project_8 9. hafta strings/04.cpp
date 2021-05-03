// This program uses the strstr function to search an array
// of strings for a name.

#include <iostream> 
#include <string> // For strstr

using namespace std;

void main(void)
{
	char prods[5][27] = { "TV327 31 inch Television",
		"CD257 CD Player",
		"TA677 Answering Machine",
		"CS109 Car Stereo",
		"PC955 Personal Computer" };

	char lookUp[27], * strPtr = NULL;
	int index;

	cout << "\tProduct Database\n\n";
	cout << "Enter a product number to search for: ";

	cin.getline(lookUp, 27);

	for (index = 0; index < 5; index++)
	{
		strPtr = strstr(prods[index], lookUp);
		if (strPtr != NULL)
			break;
	}

	if (strPtr == NULL)
		cout << "No matching product was found.\n";
	else
		cout << prods[index] << endl;

	system("pause");
}