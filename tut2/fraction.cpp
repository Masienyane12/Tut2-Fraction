#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{}


	void Fraction::setNumDenom()
	{
		cout << "Enter numerator" << endl;
		cin >> numer;
		cout << "Enter denominator" << endl;
		cin >> denom;
	}

	void Fraction::add(Fraction A, Fraction B)
	{

		numer = (A.numer*B.denom) + (B.numer*A.denom);
		denom = (A.denom*B.denom);
	}
	void Fraction::subtract(Fraction A, Fraction B)
	{
	
		numer = (A.numer*B.denom) + (B.numer*A.denom);
		denom = (A.denom*B.denom);
	
	}