//static data members and member functions
#include<iostream>
using namespace std;
class product
{
	int code,id;
	static int count;
	public:
		void getdata()
		{
			cout<<"Enter code and id:"<<endl;
			cin>>code>>id;
			count++;
		}
	
	public:
	    void display()
		{
			cout<<code<<id<<endl;
		}
		static void countdisp()
		{
			cout<<count<<endl;
		}
};
int product::count=20;
int main()
{
	product x,y,z;
	x.getdata();
	y.getdata();
	z.getdata();
	product::countdisp();
	x.display();
	y.display();
	z.display();
}


