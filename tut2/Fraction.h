# ifndef FRACTION_H
# define FRACTION_H

class Fraction
{

public:
	Fraction();                        //constructor
	~Fraction();                       //destructor
	void getNumDenom(int,int,int,int)                // get denominator and numerator   function
	void setNumDenom(int,int,int,int )            //  

		void add();                  
	void subtract();
	void multiply();
	void divide();   

private :
	int numer;
	int denom;


};
#endif