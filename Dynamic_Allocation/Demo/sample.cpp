#include"swap1.h"
#include<iostream>
using namespace std;

int main()
{
	 int no1,no2;
	 cout<<"Enter two nos:";
	 cin>>no1>>no2;
	 space1::Swap(no1,no2);
     cout<<"Swaped nos are:"<<no1<<no2;
     cout<<"Enter two nos:";
	 cin>>no1>>no2;
	 using namespace space2;
	 Swap(&no1,&no2);
     cout<<"Swaped nos are:"<<no1<<no2; 
	  

	  return 0;
}