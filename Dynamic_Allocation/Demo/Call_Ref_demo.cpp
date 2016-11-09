#include<iostream>
using namespace std;
void swap(int &,int &); //prototype for the function call having arguments as call by reference
int main()
{

	int iNo1,iNo2;

	cout<<"Enter No1 and No2:";
	cin>>iNo1>>iNo2;

	cout<<"Values before swapping:"<<iNo1<<" "<<iNo2<<endl;
	//Call to function
	swap(iNo1,iNo2);

	cout<<"Values after Swapping:"<<iNo1<<" "<<iNo2;

	return 0;

}

void swap(int &no1,int &no2)
{

	int temp;
	temp = no1;
	no1 = no2;
	no2 = temp;

}