#include"CManager.h"
#include"CWageEmployee.h"
#include<typeinfo>

CEmployee * select()
{
	int ch;
	cout<<"Enter your choice"<<endl;

	cin>>ch;

	switch(ch)
	{
	case 1:
		 return new CEmployee(1,"sarita",27,2,1988);
	
	case 2:
		return new CWageEmployee(2,"harry",6,1,1988,45,8);
	//case 3:
	//	return new CSalesPerson("Sumit",19,7,1992,45,8,40,50);
	}
}


int main()
{
	 
	CEmployee *person=select();
	CWageEmployee *w;
    
	cout<<typeid(person).name()<<endl;
	cout<<typeid(*person).name()<<endl;

    person->Display();

	if(typeid(*person)==typeid(CWageEmployee))
	{
		w=(CWageEmployee *)person;
	}
	else
		w=NULL;

	//CWageEmployee *w=dynamic_cast<CWageEmployee *>(person);

	if(w)
	cout<<w->computeSalary();


	CManager m;
	person=&m;
	cout<<typeid(*person).name()<<endl;

    

	return 0;
}