#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void calc(int h,int d)=0;	//Pure virtual function
};
class t:public shape
{
	public:
	void calc(int b,int h)
	{
		cout<<(0.5*b*h)<<endl;
	}
};
class r:public shape
{
	public:
	void calc(int l,int b)
	{
		cout<<(l*b)<<endl;
	}
};
int main()
{
	shape *ptr;
	t ob1;
	r ob2;
	ptr=&ob1;
	ptr->calc(4,2);
	ptr=&ob2;
	ptr->calc(3,6);
}
