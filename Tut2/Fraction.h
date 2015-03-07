#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
	int nume;
	int deno;

	

public:
	Fraction();
	~Fraction();

	void setNume(int num);
	void setDen(int den);
	int getNume(void);
	int getDen(void);
	void setFraction(int num, int den);
	void print();

};
#endif