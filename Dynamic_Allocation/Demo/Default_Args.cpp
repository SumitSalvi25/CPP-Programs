#include<iostream>
using namespace std;
int Multiply(int,int,int=1,int=1);

int main()
{
	int iNo1,iNo2,iNo3,iNo4,iRes=1;

	cout<<"Enter No1 and No2:";
	cin>>iNo1>>iNo2;
	iRes = Multiply(iNo1,iNo2);
	cout<<"Multiplication of two nos is:"<<iRes<<endl;


	cout<<"Enter No1,No2 and No3:";
	cin>>iNo1>>iNo2>>iNo3;
	iRes = Multiply(iNo1,iNo2,iNo3);
	cout<<"Multiplication of three nos is:"<<iRes<<endl;

	cout<<"Enter No1,No2,No3 and No4:";
	cin>>iNo1>>iNo2>>iNo3>>iNo4;
	iRes = Multiply(iNo1,iNo2,iNo3,iNo4);
    cout<<"Multiplication of two nos is:"<<iRes<<endl;

	return 0;
}

int Multiply(int n1,int n2,int n3,int n4)
{
	int res=1;
	res = n1 * n2 *n3 *n4;
	return res;
}

