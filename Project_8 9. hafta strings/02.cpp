// In this program, a loop uses strtok_s
// to print all the tokens (separated by commas
// or blanks) in two strings at the same time. #include <iostream>
#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;

int main(void)
{
	char string1[] = "A string\tof ,,tokens\nand some more tokens";
	char string2[] = "Another string\n\tparsed at the same time.";
	char seps[] = " ,\t\n";
	char* token1 = NULL;
	char* token2 = NULL;
	char* next_token1 = NULL;
	char* next_token2 = NULL;
	cout << "Tokens:\n";
	// Establish string and get the first token:
	token1 = strtok_s(string1, seps, &next_token1);
	token2 = strtok_s(string2, seps, &next_token2);
	// While there are tokens in "string1" or "string2"
	while ((token1 != NULL) || (token2 != NULL)) 
	{
		// Get next token:
		if (token1 != NULL) {
			cout << token1 << endl;
			token1 = strtok_s(NULL, seps, &next_token1);
		}
		if (token2 != NULL) {
			cout << " " << token2 << endl;
			token2 = strtok_s(NULL, seps, &next_token2);
		}
	}
	system("pause");
}