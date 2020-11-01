//WAP to find the roots of a quadratic equation wfere a is not equal to zero using constructors.
#include<iostream>
#include<math.h>
using namespace std;
class factorial
{
	int a,b,c,d;
	float r1,r2,e,f;
	public:
		factorial(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
			d=0;
			r1=r2=e=f=0.0;
		}
	public:
		void calculate()
		{
			d=(b*b)-(4*a*c);
		if(d>0)
		{
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			cout<<"The two roots for "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are:"<<r1<<" and "<<r2 <<endl;
		}
		else if(d==0)
		{
			r1=r2=-b/(2*a);
			cout<<"The two roots for "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are:"<<r1<<" and "<<r2 <<endl;
		}
		else
		{
			e=(-b/(2*a));
			f=(sqrt(-d)/(2*a));
			cout<<"The first root for "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 is:"<<e<<"+i"<<f<<endl;
			cout<<"The second root for "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 is:"<<e<<"-i"<<f<<endl;
		}
		}
		
};
int main()
{
	int a,b,c;
	cout<<"Enter a,b,c values which are real for quadratic equation ax^2+bx+c=0:"<<endl;
	cin>>a>>b>>c;
	factorial ob(a,b,c);
	ob.calculate();
}

