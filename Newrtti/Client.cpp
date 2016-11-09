
#include"CSalesPerson.h"
#include"CManager.h"
#include<typeinfo>
//#include<iostream>


CEmployee* Select()
{
	int ch;

	cout<<"Enter Your Choice"<<endl;
	cin>>ch;

	switch(ch)
	{
	case 1: return new CEmployee(1,"ABC",27,2,1988);

    case 2: return new CWageEmployee(1,"Manasi",8,1,1983,45,45.23f);

    }
}

int main()
{
	CEmployee *person;
	CWageEmployee w1(1,"Manasi",8,1,1983,45,45.23f);

	person = &w1;

	
	CWageEmployee *w;

	cout<<typeid(person).name()<<endl;

    cout<<typeid(*person).name()<<endl;
	
	person->Display();

	if(typeid(*person)==typeid(CWageEmployee))
	{
		w = (CWageEmployee *)person;
    }
	else
	{
		w = NULL;
	}


	//CWageEmployee * w = dynamic_cast<CWageEmployee>->(person)

	if(w)
		 cout<<w->computeSalary();

	 CManager m;
	 person = &m;

	 cout<<typeid(*person).name()<<endl;
	return 0;
}