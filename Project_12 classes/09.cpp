#include<iostream>
using namespace std;

class NumArr
{
public:
	NumArr(int length)
	{
		arr = new int[length];
		len = length;

	}//constructor

	~NumArr()
	{
		delete[] arr;
	}//destructor

	void setValue(int index, int value)
	{
		arr[index] = value;
	}

	int getValue(int index)
	{
		return arr[index];
	}

	int getLength()
	{
		return len;
	}
	
private:
	int* arr;
	int len;
};

int main()
{
	NumArr arr(10);

	for (int i = 0; i < 10; i++)
	{
		arr.setValue(i, i * i);
	}

	cout << "The value of element 5 is: " << arr.getValue(5);
	return 0;
}
