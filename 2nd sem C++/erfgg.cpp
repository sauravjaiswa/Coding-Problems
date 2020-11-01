//binary operator
#include<iostream>
using namespace std;
class A
{
	public:
	int a;
	public:
		void getdata()
		{
			cout<<"Enter a:"<<endl;
			cin>>a;
		}
		A operator !(A &x)
		{
			A o;
			o.a=a+x.a;
			return o;			
		}
		void display()
		{
			cout<<"Addition of two complex="<<a<<endl;
		}
};
int main()
{
	A ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=!ob1;
	ob3.display();
}


