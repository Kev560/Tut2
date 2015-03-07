#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction obj;
	Fraction k(double, double, double, double);

	double n1;
	double d1;
	double n2;
	double d2;

	cout << "Enter numerator for fraction 1 : ";
	cin >> n1;

	cout << "Enter denominator for fraction 1 : ";
	cin >> d1;

	cout << "Enter numerator for fraction 2 : ";
	cin >> n2;

	cout << "Enter denominator for fraction 2 : ";
	cin >> d2;

	obj.setNume(n1, n2);
	obj.setDen(d1, d2);

	/*
	Via overload constructor
	k(n1, d1, n2, d2);
	*/
	obj.add();
	obj.sub();
	obj.mult();
	obj.div();


};