#include <iostream>
#include "Fraction.h"

using namespace std;




	void Fraction::setNumDenom()
	{
		cout << "Enter numerator" << endl;
		cin >> numer;
		cout << "Enter denominator" << endl;
		cin >> denom;
	}

	//addition function
	void Fraction::add(Fraction A, Fraction B)
	{

		numer = (A.numer*B.denom) + (B.numer*A.denom);
		denom = (A.denom*B.denom);
	}

	//subtraction function
	void Fraction::subtract(Fraction A, Fraction B)
	{
	
		numer = (A.numer*B.denom) + (B.numer*A.denom);
		denom = (A.denom*B.denom);
	
	}

	//Multiplication Function
	void Fraction::multiply(Fraction A, Fraction B)
	{
		numer = (A.numer*B.numer);
		denom = (A.denom *B.denom);
	}

	//Division Function
		void Fraction::divide(Fraction A, Fraction B)
	{
		numer = (A.numer*B.denom);
		denom = (A.denom *B.numer);
	}