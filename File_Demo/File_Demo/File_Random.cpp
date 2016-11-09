#include"student.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("Student.dat",ios::in | ios::binary);
	CStudent S1;
	int recno;
	long no_rec, offbytes;

	if(!in)
	{
		cout<<"Error opening file";
		exit(1);
    }
	in.seekg(0,ios::end);
	no_rec = in.tellg()/ sizeof(CStudent);
	cout<<no_rec<<endl;
	cout<<"Enter Record No:";
	cin>>recno;
	if(recno>0&&recno<=no_rec)
	{
		offbytes = sizeof(CStudent) * (no_rec-1);
		in.seekg(offbytes,ios::beg);
		in.read((char *)&S1,sizeof(CStudent));
		S1.display();
	}
	in.close();
	return 0;
}