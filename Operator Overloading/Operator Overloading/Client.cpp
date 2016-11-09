#include<iostream>
#include"CComplex.h"
#include"CString.h"
using namespace std;

int main()
{

	try
	{
	   CComplex C1(4,5);
	   CComplex C2(3,5);

	   C2 = -C1;//C2 = C1.operator-()

	   C2.Display();

	   C2 = ++C1;

	   C2.Display();

	   C1 = C2++;

	   C1.Display();

	   C2.Display();


	   CComplex C3 = C1 + C2;//call will be resolved like CComplex C3 = C1.operator + (C2)

	   C3.Display();

	   CComplex C4 = C1 * C2;

	   C4.Display();

	   CString S1("SEED");
	   CString S2("Infotech");
	   CString S3 = S1;//call to copy constructor when object get created and the assignment is done at the Copy constructor called


	   S3.Display();

	   S1 = S2;//call to assignment operator


	   S1.Display();

	}
	catch(...)
	{

	}

	return 0;
}