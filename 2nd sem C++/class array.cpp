//array of objects
#include<iostream>
using namespace std;
class functions2
{
	int roll,uid;
	public:
		void input()
		{
			cin>>roll;
			cin>>uid;
		}
	public:
		void display()
		{
			cout<<roll<<endl;
			cout<<uid<<endl;
		}
};
	int main()
	{
		functions2 a[5]; //array of objects
		int i;
		cout<<"Enter roll number and uids:";
		for(i=0;i<5;i++)
		{
			a[i].input();
		}
		cout<<"Roll numbrers and uids: ";
		for(i=0;i<5;i++)
		{
			a[i].display();
		}
	}

