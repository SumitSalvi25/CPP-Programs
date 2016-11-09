#include<iostream.h>
#include"CComplex.h"
#include"CString.h"

int main()
{

 try
 {
	CComplex C1(4,6),C2(5,5),C3,C4;
	int num;

	C1.Display();
	cout<<"Enter a Number:";
	cin>>num;

    
    C2 = C1 + num;
	C2.Display();

	C2 = num + C1;//call to the friend function
	C2.Display();
    
    
	cout<<C1;

	cout<<C1<<C2<<endl;

    cin>>C1;

	cin>>C1>>C2;
     
	CString S1("Seed");
	char ch;

	ch = S1[3];
    cout<<"Ch is :"<<ch<<endl;

	S1[0]='S';
    S1.Display();

	}
    catch(char *msg)
	{
		 cout<<msg<<endl;
    }


	
	return 0;
}