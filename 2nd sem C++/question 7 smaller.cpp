//zeroSmaller()
#include<iostream>
using namespace std;
class smaller
{
	public:
		void zeroSmaller(int &a,int &b)
		{
			if(a<b)
			a=0;
			else if(b<a)
			b=0;
			cout<<"a="<<a<<" and b="<<b<<endl;
		}
};
int main()
{
	smaller ob;
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	ob.zeroSmaller(a,b);
}


