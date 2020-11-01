//Function overloading
#include<iostream>
using namespace std;
class A
{
	public:
		int calculate(int s)
		{
			return (s*s);
		}
	public:
		int calculate(int l,int b)
		{
			return (l*b);
		}
	public:
		double calculate(double r)
		{
			return ((22/7)*r*r);
		}
};
int main()
{
	A ob;
	int sq=ob.calculate(10);
	int rec=ob.calculate(2,4);
	double circ=ob.calculate(4.3);
	cout<<"Area of square:"<<sq<<endl;
	cout<<"Area of rectangle:"<<rec<<endl;
	cout<<"Area of circle:"<<circ<<endl;
}

