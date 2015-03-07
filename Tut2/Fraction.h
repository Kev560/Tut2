#include <iostream>
#include <string>

using namespace std;
#ifndef FRACTION_H
#define FRACTION_H

class Fraction{

private:

	int nume;
	int den;

public:

	Fraction(); //Default Constructor
	~Fraction(); // Destructor
	
	int setNume();
	int setDen();
	void getNume();
	void getDen();
	void setFrac();
	void print();

	Fraction add();
	Fraction subtract();
	Fraction mult();
	Fraction div();

};

#endif