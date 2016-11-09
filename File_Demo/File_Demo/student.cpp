#include"student.h"
#include<iostream>
using namespace std;

void CStudent::accept()
{
	cout<<"Enter Roll No, Name, Grade of Student:"<<endl;
	cin>>roll_no>>name>>grade;
}

void CStudent::display()
{
	cout<<roll_no<<"     "<<name <<"     "<<grade<<endl;

}