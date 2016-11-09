#include<iostream>
#include<iomanip>
#include"CWageEmployee.h"
using namespace std;


CWageEmployee::CWageEmployee()//Default Constructor
{

	m_fhrs = 0.0f;
	m_frate = 0.0f;
}

CWageEmployee::CWageEmployee(int i,char* nm,int d,int m,int y,float h,float r):CEmployee(i,nm,d,m,y)
{
	m_fhrs = h;
	m_frate = r;
}

void CWageEmployee::Display()
{
	
	CEmployee::Display();
    cout<<"Hours:"<<m_fhrs<<endl;
	cout<<"Rate:"<<m_frate<<endl;
	
	
}
		        
void CWageEmployee::Accept()
{
	CEmployee::Accept();

	cout<<"Enter Hours:";
	cin>>m_fhrs;
	cout<<"Enter Rate per Hour:";
	cin>>m_frate;
}

float CWageEmployee::computeSalary()
{
	return (m_fhrs * m_frate);
}