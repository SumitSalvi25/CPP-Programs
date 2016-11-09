#include<iostream>
#include"CEmployee.h"


CEmployee::CEmployee()
{
	m_id =0;
}
CEmployee::CEmployee(int i, char * nm,int d,int m,int y):m_name(nm),m_bdate(d,m,y),m_id(i)
{

	//m_id = i;
	//m_name = CString(nm);
	//m_bdate = CDate(d,m,y);

	cout<<"Parameterised Constructor get called for CEmployee"<<endl;
}

void CEmployee::Display()
{
	cout<<"Employee Id:"<<m_id<<endl;
	cout<<"Employee name:";
	m_name.Display();
	cout<<"Employee Birth Date:";
	m_bdate.display();

}

CEmployee::~CEmployee()
{
	cout<<"Destructor Get called for CEmployee"<<endl;
}


