#include<iostream>
#include "CManager.h"
using namespace std;


CManager::CManager()
{
	m_subord = 0;
	m_bsal = 0;
	m_da = 0;

	cout<<"Dafault Constructor get called";
	
}
CManager::CManager(int id,char *nm,int d,int m,int y,int sub,float sal,float da):CEmployee(id,nm,d,m,y)
{
	m_subord  = sub;
	m_bsal = sal;
	m_da = da;

	cout<<"Contructor for Manager get called";
}

void CManager::Accept()
{
	CEmployee::Accept();

	cout<<"Enter No of Subordinates:";
	cin>>m_subord;
	cout<<"Enter Basic Salary:";
	cin>>m_bsal;
	cout<<"Enter Dearness allowance:";
	cin>>m_da;
}

void CManager::Display()
{
	CEmployee::Display();
    
	cout<<"Subordinates are:"<<m_subord<<endl;
	cout<<"Basic Salary:"<<m_bsal<<endl;
    cout<<"Dearness Allownace:"<<m_da<<endl;
}
float CManager::computeSalary()
{
   return (m_bsal + m_da);
}

float CManager::bonus()
{
	return ((m_bsal * 8)/100);
}
CManager::~CManager()
{
	cout<<"Destructor for Manager get called:";
}



