#include<iostream>
using namespace std;
namespace t1
{
	int x=10;
}
namespace t2
{
	int x=20;
}
int main()
{
	cout<<t1::x;
	cout<<t2::x;
}
