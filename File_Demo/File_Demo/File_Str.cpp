#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("resume.txt");
	char str[255];
	while(in)
	{
		in.getline(str,255);
		if(in)
			cout<<str<<endl;
	}
	in.close();
	return 0;
}
