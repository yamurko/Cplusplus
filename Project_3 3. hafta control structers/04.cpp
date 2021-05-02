#include<iostream>

using namespace std;

int main()
{
	int a[8][3], let = 65;
	char ch;

	cout << "Enter a capital letter: to exit enter # " << endl;
	cin >> ch;
	
	while (ch != '#')
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				a[i][j] = let;
				let++;
				if (let == 83)
					let++;
			}
		}

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (ch == a[i][j])
					cout << i + 2;
			}
		}

		if (ch == 83)
			cout << 7;

		else if (ch == 90)
			cout << 9;

		cout << endl << endl << "Enter a capital letter: to exit enter # " << endl;
		cin >> ch;

		let = 65;
	}

	return 0;
}