include"CString.h"
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

	 void Display();
     ~CEmployee();


};
