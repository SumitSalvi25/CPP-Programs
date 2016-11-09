#include<iostream>
#include"CRational.h"
using namespace std;

int main()
{
	  CRational R1(4,5),R2,R3;

     // float f = R1;//implicit conversition
      
	  int f1=10;
	  R3 = f1;//implicit call to constructor
	  R1 = CRational(f1); // constructor conversion
	  
	   float f = R1;//implicit call

	  R1.Display();

	  f = R1; //implicit call

	  cout<<f<<endl;

	  f = R1.operator float();//Explicit Call using operator function

	  cout<<f<<endl;

	  f = (float) R1;

	  cout<<f<<endl;

      
	  R1.Display();

	  return 0;
}

