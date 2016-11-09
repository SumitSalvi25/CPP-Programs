#include<iostream>
#include"CSalesPerson.h"
using namespace std;

int main()
{

	
	CEmployee *eptr = new CWageEmployee(1,"Manasi",8,1,1983,100,45);//Generic pointer with complie time binding

	eptr->Display(); //this function will display the data regarding the employee class because the generic pointer is of type emp

	float salary =static_cast<CSalesPerson*>(eptr)->computeSalary(); /* calling the compute salary function using the static cast which will 
																	   bind the eptr to CWageEmployee type at complie time */

	cout<<"Total Salary for Wage Employee is:"<<salary<<endl;;

    CEmployee  *eptr1 = new CSalesPerson(1,"Manasi",8,1,1983,100,45,100.25f,50.4f);
	
	eptr->Display();
	 
	cout<<"Total Salary for sales person is"<<eptr->computeSalary()<<endl;

    CEmployee *eptr2 = new CWageEmployee;
	
	eptr2->Accept();

	eptr2->Display();

    delete eptr;

	delete eptr1;

	delete eptr2;


	return 0;
}

