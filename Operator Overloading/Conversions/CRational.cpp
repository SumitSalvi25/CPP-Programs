#include<iostream>
#include"CRational.h"
using namespace std;

CRational::CRational(int num)
{
	this->m_numrator = num;
	this->m_denomerator = num;
}

void CRational::Display(void)
{
	cout<<"Rational No is:"<<m_numrator<<"/"<<m_denomerator<<endl;
}

CRational::CRational(int num,int den)
{

	this->m_numrator = num;
	this->m_denomerator = den;
}

CRational::CRational()
{
	this->m_numrator = 0;
	this->m_denomerator = 0;
}
CRational::operator float()
{
	   return (float) m_numrator/m_denomerator;
}
