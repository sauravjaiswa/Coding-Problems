//Concatenate two string using operator overloading
#include<iostream>
#include<string.h>
using namespace std;
class Int
{
	public:
	int n;
	public:
		void operator =(int x)
		{
			n=x;
			cout<<"n="<<n<<endl;
		}
};
int main()
{
	Int ob;
	ob=10;
}
