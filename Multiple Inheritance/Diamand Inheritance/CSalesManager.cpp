#include<iostream>
#include"CSalesManager.h"
using namespace std;

CSalesManager::CSalesManager()
{
	cout<<"Default Constructor get called:";
}

CSalesManager::CSalesManager(int id,char *nm,int d,int m,int y,float r,float h,float s,float c,int sub,float sal,float allow)
:CSalesPerson(id,nm,d,m,y,h,r,s,c),CManager(id,nm,d,m,y,s,h,r),CEmployee(id,nm,d,m,y)
{
	cout<<"Parameterised Constructor get called for CSalesManager";
}

void CSalesManager::Accept()
{
	CSalesPerson::Accept();
	CManager::Accept();

}

void CSalesManager::Display()
{
	CSalesPerson::Display();
    CManager::Display();
}

float CSalesManager::computeSalary()
{
	return (CManager::computeSalary()+CSalesPerson::computeSalary());
}

CSalesManager::~CSalesManager()
{
	cout<<"Desotoctor for Sales Person Called:"<<endl;
}