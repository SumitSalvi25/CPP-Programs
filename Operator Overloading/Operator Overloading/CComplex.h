#include<iostream>
using namespace std;
class CComplex
{
private:
	int m_real;
	int m_imag;
	static int count;
public:

    CComplex();//Default Constructor
    CComplex(int,int);//Parameteried Constructor
   
	int getReal(void) const;//Constant member Accessor function
	int getImag(void) const;

	void setReal(int);//Modififer or Mutator function
	void setImag(int);

	CComplex operator +(const CComplex&);//Overloading Binary Operator +
	CComplex operator -(const CComplex&);//Overloading Binary Operator -
	CComplex operator *(CComplex);//overloding Binary operator * which have differnt Functionaly for CComplex class

	CComplex operator -();//Overloading Unary - operator 
	CComplex& operator++();//overloading Unary  preincrement++ operator
	CComplex operator++(int);//overloading Unary postincrement++ operator


	void Display(void);// Constant member Facilitator function

	static int getCount();
		
};