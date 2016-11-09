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

	void Display(void);// Constant member Facilitator function

	static int getCount();

	CComplex add(CComplex);

	//CComplex operator+(const CComplex&);

		
};