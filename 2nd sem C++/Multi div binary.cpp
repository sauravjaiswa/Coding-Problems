//binary operator *,/
#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter a:"<<endl;
			cin>>a;
		}
		A operator *(A &x)
		{
			A o;
			o.a=a*x.a;
			return o;			
		}
		A operator /(A &x)
		{
			A o1;
			o1.a=a/x.a;
			return o1;			
		}
};
int main()
{
	A ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob1*ob2;
	cout<<"Multiplication="<<ob3.a<<endl;
	ob3=ob1/ob2;
	cout<<"Divison="<<ob3.a<<endl;
}


