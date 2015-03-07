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

	cout << "\n";

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

	cout << "Addition: " << obj.getNume1() << "/" << obj.getDen1() << " + " << obj.getNume2() << "/" << obj.getDen2() << " = " << obj.add()<< "\n\n";
	cout << "Subtraction: " << obj.getNume1() << "/" << obj.getDen1() << " - " << obj.getNume2() << "/" << obj.getDen2() << " = " << obj.sub() << "\n\n";
	cout << "Multiplication: " << obj.getNume1() << "/" << obj.getDen1() << " x " << obj.getNume2() << "/" << obj.getDen2() << " = " << obj.mult() << "\n\n";
	cout << "Division: " << obj.getNume1() << "/" << obj.getDen1() << " / " << obj.getNume2() << "/" << obj.getDen2() << " = " << obj.div() << "\n\n";

	system("pause");

	return 0;
};