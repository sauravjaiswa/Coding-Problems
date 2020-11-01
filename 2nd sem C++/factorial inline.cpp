//To find factorial using inline function
#include<iostream>
#include<string.h>
using namespace std;
class Factorial
{
	int n,f=1;
	public:
		void get()
		{
			cout<<"Enter a number:"<<endl;
			cin>>n;
		}
	inline int fact(int a)
	{
		f=f*a;
		return f;
	}
	public:
		void find()
		{
			int i,t;
			for(i=n;i>=1;i--)
			t=fact(i);
			cout<<"Factorial is:"<<t<<endl;		
		}
};
int main()
{
	Factorial ob;
	ob.get();
	ob.find();
}


