#include<iostream> //input output
#include<string> // string
#include<cctype> // isdigit

using namespace std;

int main()
{
	cout << "Enter a number or a word: ";
	cout.flush(); // stream içini temizliyor. clearlaþtýrýyor.

	cin >> ws; // mesela 6 yazdýn tab býraktýn entera bastýn tabý siliyo yani fazlalýðý siliyor
	int c = cin.peek(); // önceki karakteri alýyor ve tutuyor. putbackle ayný görevde

	if (c == EOF) // geçersiz bir karakterse programý sonlandýrýyor.
		return 1;

	if (isdigit(c))
	{
		int n;
		cin >> n;
		cout << "You entered number: " << n << endl;
	}

	else 
	{
		string str;
		cin >> str;
		cout << "You entered the word: " << str << endl;
	}
	system("pause");
	return 0;
}