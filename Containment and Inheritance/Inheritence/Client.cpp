#include<iostream>
#include"CSalesPerson.h"
using namespace std;

int main()
{

	//CWageEmployee we1;
	 //we1.Display();  //call to default constructor
	CWageEmployee we2(1,"Manasi",8,1,1983,10.00f,100.00f);

	we2.Display();
    cout<<"Total Salary"<<we2.computeSalary();

	CSalesPerson sp;

	CSalesPerson sp2(1,"Manasi",8,1,1983,100,100,150.f,100.00f);

         
	sp2.Display();

	float sal = sp2.computeSalary();

	cout<<"Salary for Sales Person is "<<sal<<endl;



	return 0;
}

