//WAP to find hypotenuse from pythagoreas theorem.
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float a,b,c;
	cout<<"Enter east and south direction distances:";
	cin>>a;
	cin>>b;
	c=sqrt((pow(a,2)+(pow(b,2))));
	cout<<"The shortest distance is: "<<c;
}
