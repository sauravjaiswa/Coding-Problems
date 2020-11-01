//get() and display()
#include<iostream>
using namespace std;
class functions
{
	int h,m,s;
	public:
		void input()
		{
			cout<<"Enter hours:";
			cin>>h;
			cout<<"Enter minutes:";
			cin>>m;
			cout<<"Enter seconds:";
			cin>>s;
		}
	public:
		void display()
		{
			cout<<"Time: "<<h<<" : "<<m<<" :"<<s<<endl;
		}
};
		
	int main()
	{
		functions ob;
		ob.input();
		ob.display();
	}

