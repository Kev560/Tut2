#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
	double nume1;
	double deno1;
	double nume2;
	double deno2;

public:
	Fraction();
	Fraction(double,double,double,double);
	~Fraction();

	void setNume(double,double);
	void setDen(double,double);
	double getNume1();
	double getDen1();
	double getNume2();
	double getDen2();
	double add();
	double sub();
	double mult();
	double div();
	void print();

};
#endif