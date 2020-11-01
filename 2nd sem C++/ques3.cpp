//question 1
#include<iostream>
#include<math.h>
using namespace std;
class student
{
	public:
	virtual void disp()=0;	//Pure virtual function
};
class nonmedical:public student
{
	void disp()
	{
		cout<<"I am a student"<<endl;
		cout<<"I am a non-medical student."<<endl;
	}
};
class cse:public student
{
	void disp()
	{
		cout<<"I am a student"<<endl;
		cout<<"I am a computer science student."<<endl;
	}
};
class commerce:public student
{
	void disp()
	{
		cout<<"I am a student"<<endl;
		cout<<"I am a commerce student."<<endl;
	}
};
int main()
{
	student *ptr;
	nonmedical ob1;
	cse ob2;
	commerce ob3;
	ptr=&ob1;
	ptr->disp();
	ptr=&ob2;
	ptr->disp();
	ptr=&ob3;
	ptr->disp();
}
