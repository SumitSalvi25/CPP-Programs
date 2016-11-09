#include<iostream>
using namespace std;
#ifndef CSTRING_h
#define CSTRING_h
class CString
{

private:
	 int m_ilen;
	 char *m_pszbuff;

public:
	CString();//Default Constructor
	CString(char ,int);//Parameteriszed Constructor
	CString(const char *);// another Parameteriszed Constructor
	CString(const CString &);//Copy Constructor for String

	~CString();//Destructor for CString Class

	void operator() ();
	CString& operator =(const CString&);

    void AcceptString();
	void Display(void);

};
#endif