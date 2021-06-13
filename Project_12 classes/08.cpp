#include<iostream>

using namespace std;

class kesir
{
public:
	kesir()
	{
		pay = 0;
		payda = 1;
	}

	void setPay(int x)
	{
		pay = x;
	}

	void setPayda(int y)
	{
		payda = y;
	}

	int getPay()
	{
		return pay;
	}

	int getPayda()
	{
		return payda;
	}

	double getDeger()
	{
		return (double)pay / payda;
	}

private:
	int pay;
	int payda;
};

int main()
{
	kesir kes;

	cout << "Default contructor: " << endl;
	cout << kes.getPay() << " / " << kes.getPayda() << endl;

	cout << "After setting new values: " << endl;
	kes.setPay(5);
	kes.setPayda(3);

	cout << kes.getPay() << " / " << kes.getPayda() << " : " << kes.getDeger() << endl;

	return 0;
}