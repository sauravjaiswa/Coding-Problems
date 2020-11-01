//question 1
#include<iostream>
using namespace std;
class payroll
{
	public:
		double sal;
	virtual void cal()=0;	//Pure virtual function
};
class fixede:public payroll
{
	public:
		int num;
		double sal;
	void cal()
	{
		cout<<"Enter number of months:"<<endl;
		cin>>num;
		cout<<"Enter monthly salary:"<<endl;
		cin>>sal;
		cout<<"Total salary:"<<(num*sal)<<endl;
	}
};
class hourly:public payroll
{
	public:
		int num;
		double sal;
	void cal()
	{
		cout<<"Enter number of hours:"<<endl;
		cin>>num;
		cout<<"Enter hourly salary:"<<endl;
		cin>>sal;
		cout<<"Total salary:"<<(num*sal)<<endl;
	}
};
class percentage:public payroll
{
	public:
		double per,sal;
	void cal()
	{
		cout<<"Enter percentage salary:"<<endl;
		cin>>per;
		cout<<"Enter target salary:"<<endl;
		cin>>sal;
		cout<<"Total salary:"<<((per/100)*sal)<<endl;
	}
};
int main()
{
	payroll *ptr;
	fixede ob1;
	hourly ob2;
	percentage ob3;
	ptr=&ob1;
	ptr->cal();
	ptr=&ob2;
	ptr->cal();
	ptr=&ob3;
	ptr->cal();
}
