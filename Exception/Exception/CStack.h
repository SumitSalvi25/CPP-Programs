#include<iostream>
using namespace std;
class CStack
{
private:
	int m_size;
	int m_top;
	int *m_parr;

public:

	CStack();//Default Comstructor
    CStack(int);//Parameterised Constructor    
	void Push(int);
	int Pop(void);
	void Display(void);

	~CStack();
};

