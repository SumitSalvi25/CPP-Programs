
#include<iostream>

#include"CSalesPerson.h"

using namespace std;

CSalesPerson::CSalesPerson()
{
    m_Comm =0;
	m_Sales =0;

	cout<<"Default Constructor get called for SalesPerson"<<endl;
}
CSalesPerson::CSalesPerson(int i,char * nm,int d,int m,int y,float h,float r,int comm,long sales)
:CWageEmployee(i,nm,d,m,y,h,r)
{
     
    m_Comm = comm;
	m_Sales = sales;

	cout<<"Parameterised consstructor get called SalesPerson"<<endl;
	

}

void CSalesPerson::Display()
{
	CWageEmployee::Display();

	cout<<"Total Sales:"<<m_Sales;
	cout<<"Commission:"<<m_Comm;
}

void CSalesPerson::Accept()
{
	CWageEmployee::Accept();
	 
	cout<<"Enter total sales:";
	cin>>m_Comm;
	cout<<"Enter Commission:";
	cin>>m_Sales;
}



float CSalesPerson::computeSalary()
{
	
  return (CWageEmployee::computeSalary()+(m_Comm * m_Sales));

}

CSalesPerson::~CSalesPerson()
{
	cout<<"Destructor for Sales Employee Get Called"<<endl;
}