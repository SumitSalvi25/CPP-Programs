

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

	CComplex operator +(int);//overator overloading for + operator

	friend CComplex operator +(int,const CComplex&) ;//Prototype of Friend Function

    friend ostream& operator <<(ostream&,const CComplex&);

	friend istream& operator >>(istream&,CComplex&);
	void Display(void);// Constant member Facilitator function

	static int getCount();
		
};