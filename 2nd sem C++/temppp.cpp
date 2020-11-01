//employee details
#include<iostream>
using namespace std;
class Employee
{
	public:
		int salary,t[5],avg;
		Employee()
		{
		}
		Employee(int a,int b[])
		{
			int i;
			salary=a;
			for(i=0;i<5;i++)
			t[i]=b[i];
		}
		void cal()
		{
			int i;avg=0;
			for(i=0;i<5;i++)
			avg=avg+t[i];
		}
		void display()
		{
			cout<<salary<<"\t"<<avg<<endl;
		}
};
	int main()
	{
		Employee o[2]; //array of objects
		int i,j;
		int sal,m[5];
		cout<<"Enter 5 employee details:"<<endl;
		for(i=0;i<2;i++)
		{
			cout<<"Enter employee salary:"<<endl;
			cin>>sal;
			cout<<"Subject marks:"<<endl;
			for(j=0;j<5;j++)
			cin>>m[i];
			o[i]=Employee(sal,m);
		}
		cout<<"Details:"<<endl;
		cout<<"Employee Salary(INR)\tMarks"<<endl;
		for(i=0;i<2;i++)
		{
			o[i].cal();
			o[i].display();
		}
	}

