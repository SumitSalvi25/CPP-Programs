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
	 CEmployee(const int, char *,int,int,int);//parameteried constructor
     virtual float computeSalary()=0;//Declaration of pure virtual function
	 virtual void Display();
	 virtual void Accept();
     ~CEmployee();


};
