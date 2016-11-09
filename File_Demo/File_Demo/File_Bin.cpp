#include"student.h"
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	CStudent S1,S2;
	char ans;
	ofstream out("Student.dat",ios::app | ios::binary);
	do
	{
		S1.accept();
		out.write((char *)&S1, sizeof(CStudent));
		cout<<"Continue";
		cin>>ans;
    }while(ans=='Y'|| ans =='y');

		out.close();

	ifstream in("Student.dat",ios::in | ios::binary);
	while(true)
	{
		in.read((char *)&S2,sizeof(CStudent));
		if(in.eof())
			break;
		S2.display();
	}

	in.close();
	return 0;
}