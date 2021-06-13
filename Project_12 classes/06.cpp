#include<iostream>

using namespace std;

class Parent
{
protected:
	int id_protected;
};

class Child : public Parent
{
public:
	void set_id(int id)
	{
		id_protected = id;

	}

	void write_id()
	{
		cout << "id_protected: " << id_protected << endl;
	}
};
	
int main()
{
	int id_protected;
	Child obj;

	cout << "Enter id: ";
	cin >> id_protected;

	obj.set_id(id_protected);
	obj.write_id();

	return 0;
}