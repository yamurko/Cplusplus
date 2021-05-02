#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	const double r_bill = 4.5, b_bill = 15; //Bill processing fee
	const double r_ser = 20.50, b_ser = 75; //Basic service fee
	const double r_ch = 7.50, b_ch = 50; //Premium channel
	const double ad = 5; // For each additional connection after 10 connection

	int ac_num;
	int basic_ser;
	int pre_num;
	char cust_type;
	double bill = 0;

	cout << "Enter type of customer:" << endl;
	cin >> cust_type;
	cout << "Enter account number:" << endl;
	cin >> ac_num;
	
	cout << fixed << showpoint;
	cout << setprecision(2);

	if (cust_type == 'r' || cust_type == 'R')
	{
		cout << "Enter number of premium channels:" << endl;
		cin >> pre_num;

		bill = r_bill + r_ser + (double(pre_num) * r_ch);
	}

	if (cust_type == 'b' || cust_type == 'B')
	{
		cout << "Enter number of premium channels:" << endl;
		cin >> pre_num;
		cout << "Enter number of basic service connections:" << endl;
		cin >> basic_ser;

		if (basic_ser <= 10)
		{
			bill = b_bill + b_ser + (double(pre_num) * b_ch);
		}

		else
		{
			bill = b_bill + b_ser + ((double(basic_ser) - 10) * ad) + (double(pre_num) * b_ch);
		}
	}

	cout << "The account number is: " << ac_num << endl;
	cout << "Bill is: $" << bill << endl;
}