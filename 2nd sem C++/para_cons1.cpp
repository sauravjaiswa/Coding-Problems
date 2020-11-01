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
		square(int x,int y)
		{
			a=x;
			b=y;
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
	square ob1(20,40);
	ob.display();
	ob1.display();
}
