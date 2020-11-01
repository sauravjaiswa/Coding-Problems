//employee details
#include<iostream>
using namespace std;
class Employee
{
	int salary;
	char empname[50],empid[100];
	public:
		void input()
		{
			cout<<"Enter employee name:"<<endl;
			cin>>empname;
			cout<<"Enter employee id:"<<endl;
			cin>>empid;
			cout<<"Enter employee salary:"<<endl;
			cin>>salary;
		}
	public:
		void display()
		{
			cout<<empname<<"\t"<<empid<<"\t"<<salary<<"\t"<<endl;
		}
};
	int main()
	{
		Employee a[5]; //array of objects
		int i;
		cout<<"Enter 5 employee details:"<<endl;
		for(i=0;i<5;i++)
		a[i].input();
		cout<<"Details:"<<endl;
		cout<<"Employee Name\t"<<"Employee ID\t"<<"Employee Salary(INR)"<<endl;
		for(i=0;i<5;i++)
		a[i].display();
	}

