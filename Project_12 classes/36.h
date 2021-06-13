#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	double a;
	double b;
public:
	friend Complex islem(Complex k1, Complex k2, char op);
	//constructor
	Complex() 
	{
		a = 0;
		b = 0;
	}
	Complex(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
	void goster();
	void gosterKutupsal();
	void veriGir(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
};
#endif // !COMPLEX_H
