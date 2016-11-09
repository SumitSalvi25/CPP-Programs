#include<iostream>
using namespace std;
int& add(int &,int &,int &);
float add(float &,float &);
double add(double &,double &);

int main()
{

   int iNo1,iNo2,iAdd=0;
   float fNo1,fNo2,fAdd=0;
   double dNo1,dNo2,dAdd=0;

   cout<<"Enter No1 and No2:";
   cin>>iNo1>>iNo2;
   iAdd = add(iNo1,iNo2,iAdd);
   cout<<"Addition of two ints is:"<<iAdd<<endl;


   cout<<"Enter No1 and No2";
   cin>>fNo1>>fNo2;
   fAdd = add(fNo1,fNo2);
   cout<<"Addition of two float nos is:"<<fAdd<<endl;
   
   cout<<"Enter No1 nad No2:";
   cin>>dNo1>>dNo2;
   dAdd= add(dNo1,dNo2);
   cout<<"Addition of two double nos is:"<<dAdd<<endl;



   return 0;
}


int& add(int &no1,int &no2,int &Add)
{
	   
	   Add= no1 + no2;
	   return Add;
}

float add(float &no1,float &no2)
{
	float res;
	res = no1 + no2;
	return res;
}

double add(double &no1,double &no2)
{
	 double res;
	 res = no1 + no2;
	 return res;
}