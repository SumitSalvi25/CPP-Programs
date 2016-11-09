
namespace space1
{
  void Swap(int &no1,int &no2)
  {

	  int temp;
	  temp = no1;
	  no1 = no2;
	  no2 = temp;

  }
}

namespace space2
{
	void Swap(int *no1,int *no2)
	{
		int temp;
		temp = *no1;
		*no1 = *no2;
		*no2 = temp;
    }
}