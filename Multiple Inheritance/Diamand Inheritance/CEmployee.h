
#ifndef CEMPLOYEE_h
#define CEMPLOYEE_h
#include"CString.h"
#include"CDate.h"
class CEmployee
{

private:
	int m_id;
	CString m_name; //Contained Objects
	CDate m_bdate;  //Contained Objects

public:
     
	 CEmployee();//Default Constructor
	 CEmployee(int, char *,int,int,int);//parameteried constructor
     virtual float computeSalary(){return 0.0f;};//=0;//Declaration of pure virtual function
	 virtual void Display();
	 virtual void Accept();
     virtual ~CEmployee();


};
#endif
