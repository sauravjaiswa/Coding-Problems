//Area of rectangle using parameterised constructor
#include<iostream>
using namespace std;
class area
{
	public:
		area(int l,int b)
		{
			cout<<"Area is:"<<(l*b)<<endl;
		}
};
int main()
{
	int l,b;
	cout<<"Enter length and breadth:"<<endl;
	cin>>l>>b;
	area o(l,b);
//	area y;          default constructor cant be used after defining a parameterised constructor
}
