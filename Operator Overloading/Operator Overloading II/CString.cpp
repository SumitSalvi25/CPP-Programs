#include<iostream.h>
#include<memory.h>
#include<string.h>
#include"CString.h"


CString::CString()
{
	   m_ilen=0;
	   m_pszbuff = new char;//Memeory is allocated on heap and address get stored in m_pszbuff
	   *m_pszbuff = '\0';

	 cout<<" Default Constructor Get Called"<<endl;
}

CString::CString(char ch,int len)
{

	m_ilen = len;
	m_pszbuff = new char[m_ilen+1];
	memset(m_pszbuff,ch,m_ilen);
	m_pszbuff[m_ilen]='\0';

	cout<<" Parameterize Constructor Get Called"<<endl;
}

CString::CString(const char* pszbuff)
{
	m_ilen = strlen(pszbuff);
	m_pszbuff = new char[m_ilen +1];
	strcpy(m_pszbuff,pszbuff);

	cout<<" Parameterize Constructor Get Called"<<endl;
}

CString::CString(const CString& s)//copy Contsructor pass by reference which does the Deep Copy which will avoid Dangling pointer and Memory Leakage
{

	this->m_ilen = s.m_ilen;
	this->m_pszbuff = new char[m_ilen +1];
	strcpy(this->m_pszbuff,s.m_pszbuff);

	cout<<"Copy Constructor Get Called"<<endl;

}

CString::~CString()
{
	
	/* if m_pszbuff contains any value the Delete the memory on heap whome the m_pszbuff is pointing and 
	    set the value of m_pszbuff to Null on Stack*/
	if(m_pszbuff)
	{
		delete [] m_pszbuff; 
		m_pszbuff = NULL;
    }
	cout<<"Destructor Get Called"<<endl;
}
void CString::Display()
{
	cout<<"Accespted String is"<<m_pszbuff<<endl;
}

void CString::AcceptString()
{
    char str[20];
	int len;
	cout<<"Enter String:";
	cin>>str;

	len = strlen(str);
	this->m_pszbuff = new char[len+1];
	strcpy(this->m_pszbuff,str);

	

}

char& CString::operator [](int index)
{
	if(index>=0 && index<m_ilen)
		return (*(m_pszbuff+index));
	else
		throw "Index out of bound";
}




