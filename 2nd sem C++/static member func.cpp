//static data members and member functions
#include<iostream>
using namespace std;
class sum
{
	
	static int s,i;
	
	public:
	    void summ()
		{
			s=s+i;
			i++;
		}
		static void disp()
		{
			cout<<"the sum is:"<<s;
		}
};
int sum::i;
int sum::s;	
	int main()
	{
		int j;
		sum ob;
		for(j=0;j<=5;j++)
		ob.summ();
		sum::disp();
	}


