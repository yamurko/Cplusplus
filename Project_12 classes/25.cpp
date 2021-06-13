#include<iostream>

using namespace std;

class String
{
public:
	String(const char *str = NULL); //constructor
	~String()
	{
		delete[] s;
	} // destructor

	String(const String&); // copy constructor
	void print()
	{
		cout << s << endl;
	} // Function to print string
	void change(const char*); // Function to change
	void strcpy(char*, const char*); // user-defined strcpy(

private:
	char* s;
	int size;
};

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

void String::change(const char *str)
{
	delete[] s;
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

String::String(const String& old_str)
{
	size = old_str.size;
	s = new char[size + 1];
	strcpy(s, old_str.s);
}

void String::strcpy(char* str1, const char* str2)
{
	char* p = str1;
	while (*str2)
	{
		*p++ = *str2++;
	}
	*p = '\0';
}

int main()
{
	String str1("Hello World");
	String str2 = str1;

	str1.print(); // what is printed?
	str2.print();

	str2.change("Hello Jupyter");

	str1.print(); // what is printed now?
	str2.print();

	return 0;
}