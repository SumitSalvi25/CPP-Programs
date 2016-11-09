#include<iostream>
#include"CDate.h"
using namespace std;

CDate::CDate()
{
	m_dd,m_mm,m_yy=1;

	cout<<"Default Constructor Get Called for CDate"<<endl;

}
CDate::CDate(int d,int m,int y)
{
    
	m_dd = d;
	m_mm = m;
	m_yy = y;

	cout<<"Parameterised Constructor get called CDate"<<endl;

}

CDate::~CDate()
{

	cout<<"Destructor Get Called for CDate"<<endl;
}

void CDate::display()
{

	cout<<"Date is "<<m_dd<<"/"<<m_mm<<"/"<<m_yy<<endl;
}

