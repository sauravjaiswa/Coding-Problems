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
		area(area j)
		{
			a=j.a;
			b=j.b;
			c=j.a*j.b;
		}
		public:
			void display()
			{
				cout<<"Area of rectangle with length "<<a<<endl<<" and breadth "<<b<<" is: "<<c<<endl;
			}
			~area()
		{
			cout<<"Destroy area"<<endl;
		}
};
int main()
{
	area ob(10,20);
	area ob1(ob);
	ob.display();
	ob1.display();
}


