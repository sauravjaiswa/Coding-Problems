//friend 1
#include<iostream>
using namespace std;
class abc
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter a,b:"<<endl;
			cin>>a>>b;
		}
		friend int max(abc);  //friend function to access member func and data members inside class
};
int max(abc A)
{
	int max1;
	max1=A.a>A.b?A.a:A.b;
	return max1;
}
int main()
{
	abc ob;
	ob.getdata();
	cout<<max(ob);
}


