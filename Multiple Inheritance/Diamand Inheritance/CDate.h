#ifndef CDATE_h
#define CDATE_h
class CDate
{
private:

	int m_dd,m_mm,m_yy;

public:

	CDate();//Default Constructor
	CDate(int,int,int);
	void Accept_Date();
	void display();
    ~CDate();//Destructor  

};
#endif
