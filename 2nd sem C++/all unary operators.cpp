//Operator Overloading-Unary Operator
#include<iostream>
using namespace std;
class check_count
{
	public:
		int a;
		void getdata()
		{
			cout<<"Enter a:"<<endl;
			cin>>a;
		}
		check_count()
		{
			a=-4;
		}
		void operator -()
		{
			a=-a;
		}//negative value
		void operator ++()
		{
			++a;
		}//count increment
		void operator --()
		{
			--a;
		}//count decrement
		void operator !()
		{
			a=!a;
		}
};
int main()
{
	check_count x;
	x.getdata();
	cout<<"x="<<x.a<<"\n";
	-x;
	cout<<"- operation=\n";
	cout<<"x="<<x.a<<"\n";
	++x;
	cout<<"++ operation=\n";
	cout<<"x="<<x.a<<"\n";
	--x;
	cout<<"-- operation=\n";
	cout<<"x="<<x.a<<"\n";
	!x;
	cout<<"! operation=\n";
	cout<<"x="<<x.a<<"\n";
}
