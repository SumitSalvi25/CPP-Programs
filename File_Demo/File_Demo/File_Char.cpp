#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	ofstream out("myfile");
	for(int i=65;i<91;i++)
		out.put((char)i);

	out.close();

	ifstream in("myfile");

	char ch;
	while(in)
	{
	   in.get(ch);
	   if(in)
		   cout<<ch<<endl;
	}

	in.close();
	return 0;
}
