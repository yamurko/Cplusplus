#include<iostream>

using namespace std;

class Test
{
public:
	Test(int v = 0)
	{
		value = v;
	}

	int getValue() const
	{
		//value = 100 (error)
		return value;
	}
	
private:
	int value;
};

void main()
{
	Test t(20);
	cout << t.getValue();
}
