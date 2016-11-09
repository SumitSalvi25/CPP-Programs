

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

	char& operator[](int); //prototype of overloding [] operator


    void AcceptString();
	void Display(void);

};