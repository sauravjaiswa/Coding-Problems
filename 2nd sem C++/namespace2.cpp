#include<iostream>
using namespace std;
int x=20;
namespace t1
{
	int x=10;
}
namespace t2
{
	int x=90;
}
int main()
{
	int x=30;
	cout<<::x;      //for calling global namespace
	cout<<x;
}
