#ifndef DOGRU_H
#define DOGRU_H

class operation
{
public:
	operation();

	void yeniDogru(int x1, int x2, int y1, int y2);

	void goster();

	void egim();

	void egimK();

	void denklem();

private:
	int x1, x2, y1, y2;
};

#endif