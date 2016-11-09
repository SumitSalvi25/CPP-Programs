#include<iostream>
using namespace std;
#include"CManager.h"
#include"CSalesManager.h"

int main()
{
   /*	CManager CM;

	CM.Accept();

	CM.Display();

	float sal;

	

	CManager CM1(1,"abc",2,4,1987,4,5000,2300);

	CM1.Display();*/

	/*CManager CSM;

	CSM.Accept();

	CSM.Display();*/

	CSalesManager CSM1(1,"Manas",8,1,1983,45.00f,45,4500,1200,4,4500,3200);

	CSM1.Display();

   float sal = CSM1.computeSalary();

   cout<<"Salary for Sales Manager is"<<sal<<endl;

   

    return 0;
}


