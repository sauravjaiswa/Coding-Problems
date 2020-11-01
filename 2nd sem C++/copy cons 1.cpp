//Copy constructor
#include<iostream>
using namespace std;
class area
{
	int a,b,c;
	public:
		area(int x,int y)
		{
			a=x;
			b=y;
			c=a*b;
		}
	public:
		area(const area &j)
		{
			a=j.a;
			b=j.b;
			c=j.a*j.b;
		}
		~area()
		{
			cout<<"Destroy area"<<endl;
		}
		public:
			void display()
			{
				cout<<"Area of rectangle with length "<<a<<endl<<" and breadth "<<b<<" is: "<<c<<endl;
			}
};
int main()
{
	area ob(10,20);
	area ob1(ob);  //copy constructor invoked
	//area ob1=ob;   //copy constructor invoked
	ob.display();
	ob1.display();
}


