//WAP to calculate the square of number using parameterised constructor.
#include<iostream>
using namespace std;
class square
{
	int a,b;
	public:
		square(int x)
		{
			a=x;
			b=a*a;
		}
		public:
		square(square &x)
		{
			a=x.a;
			b=x.b;
		}
		public:
			void display()
			{
				cout<<"Square of number "<<a<<endl<<" is: "<<b<<endl;
			}
};
int main()
{
	square ob(20);
	square ob1(ob);
	ob.display();
	ob1.display();
}
