//Operator Overloading-Unary Operator
#include<iostream>
using namespace std;
class check_count
{
	public:
		int a;
		check_count()
		{
			a=-4;
		}
		void operator -()
		{
			a=-a;
		}//negative value
};
int main()
{
	check_count x;
	cout<<"x="<<x.a<<"\n";
	-x;
	cout<<"After operation=\n";
	cout<<"x="<<x.a<<"\n";
}
