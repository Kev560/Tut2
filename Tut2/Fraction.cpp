#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction() {											// Default Constructor

	nume1 = 0.0;
	deno1 = 0.1;
	nume2 = 0.0;
	deno2 = 0.1;

}

Fraction:: Fraction(double n1, double d1, double n2, double d2) { // Overload Constructor
	nume1 = n1;
	deno1 = d1;
	nume2 = n2;
	deno2 = d2;
}

Fraction:: ~Fraction(){												// Destructor

}

double Fraction::getNume1(){
	return nume1;
}

double Fraction::getDen1(){
	return deno1;
}

double Fraction::getNume2(){
	return nume2;
}

double Fraction::getDen2(){
	return deno2;
}

void Fraction::setNume(double n1,double n2){
	nume1 = n1;
	nume2 = n2;
}

void Fraction::setDen(double d1, double d2){
	deno1 = d1;
	deno2 = d2;
}
double Fraction::add(){
	double res = 0.0;
	res = (nume1 / deno1) + (nume2 / deno2);
	return res;
}

double Fraction::sub(){
	double res = 0.0;
	res = (nume1 / deno1) - (nume2 / deno2);
	return res;
}

double Fraction::mult(){
	double res = 0.0;
	res = (nume1 / deno1) * (nume2 / deno2);
	return res;
}
double Fraction::div(){
	double res = 0.0;
	res = (nume1 / deno1) / (nume2 / deno2);
	return res;
}









