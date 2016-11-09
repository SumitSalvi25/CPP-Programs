#include<iostream>
#include"CSalesManager.h"
using namespace std;

CSalesManager::CSalesManager()
{
	cout<<"Default Constructor get called:";
}

/*CSalesManager::CSalesManager(int id,char *nm,int d,int m,int y,float r,float h,int c,long s,int sub,float sal,float allow):CSalesPerson(id,nm,d,m,y,r,h,c,s),CManager(id,nm,d,m,y,sub,sal,allow),CEmployee(id,nm,d,m,y)
{
	cout<<"Parameterised Constructor get called for CSalesManager";
}*/

CSalesManager::CSalesManager(int id,char *nm,int d,int m,int y,float r,float h,int c,long s,int sub,float sal,float allw)
:CEmployee(id,nm,d,m,y),CSalesPerson(id,nm,d,m,y,r,h,c,s),CManager(id,nm,d,m,y,sub,sal,allw)
{
	cout<<"Parameterized Constructor for CSalesManager";
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