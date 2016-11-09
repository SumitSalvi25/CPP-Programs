#include<iostream>
#include"CStack.h"
using namespace std;
int main()
{
	CStack CS1(6);

	try
	{
		CS1.Push(12);
		CS1.Push(15);
		CS1.Push(11);
		CS1.Push(4);
		CS1.Push(33);
		CS1.Push(23);
		
		CS1.Display();

		CS1.Push(1);

		CS1.Pop();
		CS1.Pop();
		CS1.Pop();
       	CS1.Pop();
		CS1.Pop();
		CS1.Pop();
		CS1.Pop();
		CS1.Pop();

	}
	catch(char *msg)
	{
		cout<<msg<<endl;
	}
	catch(...)
	{

	}

	return 0;
}
