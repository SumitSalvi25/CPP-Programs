#include<iostream>
#include"CStack.h"
using namespace std;

CStack::CStack()
{
    m_top=-1;
	m_size=5;
	m_parr = new int[m_size];

	cout<<"Default Constructor for stack get called"<<endl;
}

CStack::CStack(int size)
{

	m_top = -1;
	m_size = size;
	m_parr = new int[m_size];

	cout<<"Parameterised Constructor for stack get Called"<<endl;

}

void CStack::Push(int value)
{
	if(m_top==m_size-1)
		throw "Stack is Full!!!";
	else
	{
		m_top ++;
		m_parr[m_top]=value;
    }
}

int CStack::Pop()
{
	int var;
	if(m_top==-1)
		throw "Stack is Empty!!!";
	else
	{
		var = m_parr[m_top];
		m_top--;
        return var;
	}
}

void CStack::Display()
{

	int icnt;
	cout<<"Stack Contains:";
	for(icnt=0;icnt<m_top;icnt++)
	{
		cout<<m_parr[icnt]<<" ";
    }
}

CStack::~CStack()
{
	if(m_parr)
	{
		delete [] m_parr;
		m_parr = NULL;
	}
	cout<<"Destructor Get Called"<<endl;
}

