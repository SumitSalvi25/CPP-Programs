#include"CComplex.h"
#include<iostream>
using namespace std;

int main()
{
	CComplex C2(5,6);
    CComplex C1,C4;
	const CComplex C3(9,5);
	CComplex const C4(4,5);

	CComplex *cptr = new CComplex(10,5); //creating an object on heap with the help of pointer.
    
    cptr->Display();// call to display function of with object created on heap.

    int real,imag,cnt; 

	cout<<"Enter real part:";
	cin>>real;
	C1.setReal(real); 
	cout<<"Call to constsant member function from non constant object"<<endl;
    real=C1.getReal(); // call to a constant memeber function from a non-constsnt object
	cout<<"Real Part:"<<real<<endl;

	cout<<"Enter Imag part:";
	cin>>imag;
	C1.setImag(imag);
    imag=C1.getImag();
	cout<<"Imaginary part:"<<imag<<endl;

    C1.Display();// C1 and C2 are non constant objects so the non constsnt member function get called because of overloading.

	C2.Display();

	cout<<"Call to constant member function from constant object"<<endl;
  
	C3.Display(); //call to a constsnt member function from Constant object

	/*C3.setReal(5); /*Error message get displayed because data memebers of the constant objects cannot 
				    be accessed throught non constant member function.*/

	//C4.Display();

	C4.setReal(5);
				       
	cnt = CComplex::getCount();

	cout<<"Total No of Objects created is"<<cnt;

	delete cptr;   


	return 0;

}