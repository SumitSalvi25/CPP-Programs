#include"CWageEmployee.h"

class CSalesPerson:public CWageEmployee
{
private:

	int m_Comm;
	long m_Sales;

public:

	CSalesPerson();//Default Constructor

	CSalesPerson(int,char *,int,int,int,float,float,int,long);//parameterised constructor 

	void Display();

	float computeSalary();

	~CSalesPerson();



};

