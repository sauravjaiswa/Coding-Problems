//employee details
#include<iostream>
using namespace std;
class student
{
	int roll,fees;
	public:
		student(int x,int y)
		{
			roll=x;
			fees=y;
		}
	public:
		void display()
		{
			cout<<"Student roll number:"<<roll<<endl;
			cout<<"Student fees:"<<fees<<endl;
		}
};
	int main()
	{
		int x,y;
		cout<<"Enter roll number:"<<endl;
			cin>>x;
			cout<<"Enter student fees:"<<endl;
			cin>>y;
			student ob(x,y);
			ob.display();
	}
