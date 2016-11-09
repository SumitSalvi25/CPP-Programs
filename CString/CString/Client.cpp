#include<iostream>
#include"CString.h"
#include"CComplex.h"
using namespace std;
int main()
{
	CString S1;
	CString S2('M',10);
	CString S3("Seed");
    /* CString S4(S3); With this statament the comiler provide its own Copy Constructor. This copy constructor perform 
	   Memeberwise copy due to this the two object are pointing to the same memory location. and when S4 the destructor for
	   one of the objects get called the memory block get free and the another objects poiner is pointing to the memory location
	   which is already freed inshort this is the Dangling poiner Sitution and when the destructor for S3 get called he is tring 
	   to free the memeory which is freed befor this cause the runtime error Debug Access Fail*/
    
	CString S4(S3);//this will Call the Copy constructor provied by us and which slove the problem of Dangling poiner and memory leakage due to Deep Copy

    S1.AcceptString();
	S1.Display();
	S2.Display();
	S3.Display();
	S4.Display();

    
    
	/*CComplex C1(4,5);
	CComplex C2(5,6);
	CComplex C3;

	C3 = C1.add(C2);

	C3.Display();*/

	

    
	return 0;
}