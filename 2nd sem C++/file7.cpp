//10.i)Write a program to store the information of about 5 students in a file and read the contents and print them on screen.
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll;
		string m;
		student()
		{
			cout<<"Enter name:"<<endl;
			cin>>m;
			cout<<"Enter roll number:"<<endl;
			cin>>roll;
		}
		void display()
		{
			cout<<"Name:"<<m<<endl;
			cout<<"Roll:"<<roll<<endl;
		}
};
int main()
{
	student s1[5];
	int i;
	fstream file;
	file.open("students.txt", ios::out|ios::trunc);
	for(i=0;i<5;i++)
	{
		file<<"Name:"<<s1[i].m<<endl;
		file<<"Roll number:"<<s1[i].roll<<endl;
	}
	file.close();
	for(i=0;i<5;i++)
	s1[i].display();
}
