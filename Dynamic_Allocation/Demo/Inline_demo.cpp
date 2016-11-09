#include<iostream>
using namespace std;
inline float area_Cir(float r)
{
	const float PI = 3.14;
	return PI*r*r;
}
int main()
{

    float frad,area;

	cout<<"Enter redious:";
	cin>>frad;

	area = area_Cir(frad);

	cout<<"Area of Circle is:"<<area;

	return 0;
}

