//WAP to find area of triangle by heron's formula.
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float a,b,c,s,area;
	cout<<"Enter three sides of triangle:";
	cin>>a;
	cin>>b;
	cin>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of triangle is: "<<area;
}
