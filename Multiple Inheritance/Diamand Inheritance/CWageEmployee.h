#include"CEmployee.h"

class CWageEmployee:virtual public CEmployee
{
private:
	float m_fhrs;
	float m_frate;

public:
	CWageEmployee();//Default Constructor
	CWageEmployee(int,char*,int,int,int,float,float);//Parameterised Constrictor
    
	void Accept();
	void Display();
	float computeSalary();

};