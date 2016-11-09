#ifndef CSALES_h
#define CSALES_h
#include"CSalesPerson.h"
#include"CManager.h"
class CSalesManager:public CSalesPerson,public CManager
{

public:
	CSalesManager();
	CSalesManager(int,char *,int,int,int,float,float,int,long,int,float,float);

	void Accept();
	void Display();
	float computeSalary();

	~CSalesManager();
};
#endif