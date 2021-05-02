#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

const double MINIMUM_BALANCE = 1000.00;
const double SERVICE_CHARGE = 25.00;

int main()
{
	int acctNumber;
	double beinningBalance;
	double accountBalance = 0.0;
	double amountDeposited = 0.0;
	int numberOfDeposits = 0;
	double amountWithdrawn = 0.0;
	int numberOfWithdrawals = 0;
	double interestPaid = 0.0;
	char transactioncode;
	double transactionAmount = 0.0;
	bool isServiceCharged = false;

	ifstream inFile;
	ofstream outFile;

	inFile.open("Chd_money.txt");

	if (!inFile)
	{
		cout << "Can not open the input file.!" << endl;
		return 1;
	}
	
	outFile.open("Ch5_money.out");

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	cout << "Proccesing data..." << endl;

	inFile >> acctNumber >> beinningBalance;
	//cout << "Account number: " << acctNumber << endl;;
	//cout << "Beining Balance: " << beinningBalance;

	accountBalance = beinningBalance;

	inFile >> transactioncode >> transactionAmount;

	//cout << "Transaction Code: " << transactioncode << endl;;
	//cout << "Transaction Amount: " << transactionAmount;

	while (inFile)
	{
		switch (transactioncode)
		{
		case 'd':
		case'D':
			accountBalance = accountBalance + transactionAmount;
			amountDeposited += transactionAmount;
			numberOfDeposits++;
			break;

		case 'ý':
		case'I':
			accountBalance = accountBalance + transactionAmount;
			interestPaid += transactionAmount;
			break;

		case 'w':
		case'W':
			accountBalance = accountBalance + transactionAmount;
			amountWithdrawn += transactionAmount;
			numberOfWithdrawals++;

			if ((accountBalance < MINIMUM_BALANCE) && (!isServiceCharged))
			{
				accountBalance -= SERVICE_CHARGE;
				isServiceCharged = true;
			}

			break;

		default:
			break;
		}

		inFile >> transactioncode >> transactionAmount;
	}

	outFile << "Account number: " << acctNumber << endl;
	outFile << "Beginning balance: $" << beinningBalance << endl;
	outFile << "Ending balance: $" << accountBalance << endl;
	outFile << "Interest paid: $" << interestPaid << endl;

	outFile << "Amount deposited: $" << amountDeposited << endl;
	outFile << "Number of deposites: $" << numberOfDeposits << endl;

	outFile << "Amount Withdrawn: $" << amountWithdrawn << endl;
	outFile << "Number of Withdrawals: $" << numberOfWithdrawals << endl;
	
	cout << endl << endl;

	system("pause");
	return 0;
}