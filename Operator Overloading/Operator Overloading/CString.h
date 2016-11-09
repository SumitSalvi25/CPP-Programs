#include<iostream>
using namespace std;
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

    
    void AcceptString();
	void Display(void);
	CString& operator =(const CString&);//overloading = operator

   ~CString();//Destructor for CString Class


};