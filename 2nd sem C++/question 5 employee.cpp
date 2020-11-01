//employee details
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int salary,empno,age;
	char department[50],address[50];
	public:
		Employee()
		{
			salary=empno=age=0;
			for(int i=0;i<50;i++)
			{
				department[i]=address[i]='\0';
			}
		}
	public:
		void getdata()
		{
			cout<<"Enter employee number:"<<endl;
			cin>>empno;
			cout<<"Enter age:"<<endl;
			cin>>age;
			cout<<"Enter department:"<<endl;
			gets(department);
			cout<<"Enter address:"<<endl;
			gets(address);
			cout<<"Enter salary:"<<endl;
			cin>>salary;
		}
	public:
		void putdata()
		{
			cout<<"Employees with salary more than 500000:"<<endl;
			if(salary>500000)
			{
				cout<<"Employee Number:"<<empno<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Department:";
				puts(department);
				cout<<"Address:";
				puts(address);
				cout<<"Salary:"<<salary<<endl;
			}
		}
	public:
		void show()
		{
			cout<<"Employees with age between 25 and 35:"<<endl;
			if(age>=25&&age<=35)
			{
				cout<<"Employee Number:"<<empno<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Department:";
				puts(department);
				cout<<"Address:";
				puts(address);
				cout<<"Salary:"<<salary<<endl;
			}
		}
};
	int main()
	{
		Employee a[5]; //array of objects
		int i;
		cout<<"Enter 5 employee details:"<<endl;
		for(i=0;i<5;i++)
		a[i].getdata();
		for(i=0;i<5;i++)
		a[i].putdata();
		for(i=0;i<5;i++)
		a[i].show();
	}

