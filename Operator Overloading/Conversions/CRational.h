

class CRational
{
private:

	int m_numrator;
    int m_denomerator;

public:
    
	CRational();
    CRational(int);
	CRational(int,int);
	operator float();
	void Display(void);
};