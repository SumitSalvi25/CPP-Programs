#include<iostream>
using namespace std;

int main()
{

	int no,i,sum=0,len;
	int avg;
    char *name,str[20];
	
	cout<<"Enter Student Information"<<endl;
	cout<<"Enter Students Name:";
	cin>>str;
    cout<<"Enter No of Subjects:";
	cin >>no;
	len = strlen(str);
	name = new char[len+1];
	strcpy(name,str);
    int *marks = new int[no]; //dynamic memory allocation
	cout<<"Enter marks of students:"<<endl;
	for(i=0;i<no;i++)
    {
		 cin >> marks[i];
		 sum = sum + marks[i];
	}

	avg = sum/no;
	
	cout<<"Stdents Name:"<<name<<endl;
	cout<<"Average:"<<avg;

	delete [] marks;
	delete [] name; //deallocation of memeory


	
	return 0;
}
