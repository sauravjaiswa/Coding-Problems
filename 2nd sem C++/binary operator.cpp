//binary operator
#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary part:"<<endl;
			cin>>a>>b;
		}
		A operator +(A &x)
		{
			A o;
			o.a=a+x.a;
			o.b=b+x.b;
			return o;			
		}
		void display()
		{
			cout<<"Addition of two complex="<<a<<"+i"<<b<<endl;
		}
};
int main()
{
	A ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob1+ob2;
//	ob3=ob1.operator +(ob2);     //Other way of calling operator overloading func
	ob3.display();
}


