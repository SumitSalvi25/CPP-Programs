#ifndef CMANAGER_h
#define CMANAGER_h
#include"CEmployee.h"

class CManager:virtual public CEmployee
{
protected:
	int m_subord;
	float m_bsal;
    float m_da;

public:
	CManager();
	CManager(int,char *,int,int,int,int,float,float);
	void Accept();
	void Display();
	float computeSalary();
	float bonus(); 
	~CManager();
};
#endif
