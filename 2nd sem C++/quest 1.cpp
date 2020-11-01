//1)display dates using copy cons and assignment operator
#include<iostream>
using namespace std;
class date
{
	int a,b,c;
	public:
		date()
		{
			cout<<"Enter date:"<<endl;
			cin>>a>>b>>c;
		}
	public:
		date(date &d)
		{
			a=d.a;
			b=d.b;
			c=d.c;
		}
		~date()
		{
			cout<<"Destroy cons"<<endl;
		}
		public:
			void display()
			{
				cout<<"Date is: "<<a<<"/"<<b<<"/"<<c<<endl;
			}
};
int main()
{
	date ob,ob2,ob3;
	date ob1(ob);//Copy constructor
//	date ob1=ob;
	ob1.display();
	ob3=ob2;//Assignment operator
	ob3.display();
}


