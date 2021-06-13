#include<iostream>

using namespace std;

class Demo
{
public:
	Demo(int v = 0)
	{
		value = v;
	}

	void showMesage()
	{
		cout << "Hello World inside showMessage() function" << endl;
	}

	void display() const
	{
		cout<<"Hello World inside display() function" << endl;
	}
	
private:
	int value;
};

void main()
{
    const Demo d1;
	//d1.showMessage();  (error)
	d1.display();

}
