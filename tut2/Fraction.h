# ifndef FRACTION_H
# define FRACTION_H

class Fraction
{

public:
	Fraction();                        //constructor
	
	void getNumDenom();             // get denominator and numerator   function
		void setNumDenom();          //  

		void add(Fraction, Fraction);

		void subtract(Fraction, Fraction);
		void multiply(Fraction, Fraction);
		void divide(Fraction, Fraction);

private :
	int numer;
	int denom;


};
#endif