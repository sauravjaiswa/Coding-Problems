//Using () for operator overloading
#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter a and b:"<<endl;
			cin>>a>>b;
		}
		void operator ()()
		{
			b=10;
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
int main()
{
	A ob1;
	ob1.getdata();
	ob1();
}


