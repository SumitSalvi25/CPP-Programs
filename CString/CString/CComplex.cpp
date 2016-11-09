
#include<iostream>
#include"CComplex.h"
using namespace std;

int CComplex::count=0;

CComplex::CComplex()
{
	  m_real =0;
	  m_imag =0;

	  count++;

	  cout<<"Default Constructor Get Called"<<endl;
}
void CComplex::Display()
{
	  cout<<"Complex No: "<<m_real<<"+"<<m_imag<<"i"<<endl;
}

CComplex::CComplex(int r,int i)
{
	  m_real = r;
	  m_imag = i;
	  count++;

	  cout<<"Parameteried Constructor Get Called"<<endl;
}

int CComplex::getReal() const
{

	return this->m_real;
}

int CComplex::getImag() const
{

	return m_imag;
}

void CComplex::setReal(int r)
{
    this->m_real  = r;
	
}

int CComplex::getCount()
{

	return count;
}
	  

void CComplex::setImag(int i)
{
	  cout<<"Call to a Constsnt member function by non constant member function"<<endl;
 	  Display();//Call to constant member funaction from a non-constant function
	  m_imag = i;
}

/*CComplex CComplex::operator +(const CComplex &c)
{
	CComplex temp;
	temp.m_real = this->m_real + c.m_real;
	temp.m_imag = this->m_imag + c.m_imag;

	return temp;
}*/	
CComplex CComplex::add(CComplex C)
{
     CComplex temp;

	 temp.m_real = this->m_real + C.m_real;
	 temp.m_imag = this->m_imag + C.m_imag;

	 return temp;

}
