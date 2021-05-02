#include<iostream> //input output
#include<string> // string
#include<cctype> // isdigit

using namespace std;

int main()
{
	cout << "Enter a number or a word: ";
	cout.flush(); // stream i�ini temizliyor. clearla�t�r�yor.

	cin >> ws; // mesela 6 yazd�n tab b�rakt�n entera bast�n tab� siliyo yani fazlal��� siliyor
	int c = cin.peek(); // �nceki karakteri al�yor ve tutuyor. putbackle ayn� g�revde

	if (c == EOF) // ge�ersiz bir karakterse program� sonland�r�yor.
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