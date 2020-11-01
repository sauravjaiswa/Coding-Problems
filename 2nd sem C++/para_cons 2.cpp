//WAP to calculate the factorial of given number using constructor and destructor.
#include<iostream>
using namespace std;
class factorial
{
	int a,f;
	public:
		factorial(int x)
		{
			int i;f=1;
			a=x;
			for(i=1;i<=a;i++)
			f=f*i;
		}
		public:
			void display()
			{
				cout<<"Factorial of number "<<a<<endl<<" is: "<<f<<endl;
			}
			~factorial()
			{
				cout<<"Destructor"<<endl;
			}
};
int main()
{
	factorial ob(5);
	ob.display();
}
