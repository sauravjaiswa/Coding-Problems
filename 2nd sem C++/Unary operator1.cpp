//Operator Overloading-Unary Operator
#include<iostream>
using namespace std;
class check_count
{
	public:
		int count_plus,count_minus;
		check_count()
		{
			count_plus=0;
			count_minus=2;
		}
		void operator ++()
		{
			++count_plus;
		}//count increment
		void operator --()
		{
			--count_minus;
		}//count decrement
};
int main()
{
	check_count x,y;
	cout<<"x="<<x.count_plus<<"\n";
	cout<<"y="<<y.count_minus<<"\n";
	++x;
	--y;
	cout<<"After increm and decre=<<\n";
	cout<<"x="<<x.count_plus<<"\n";
	cout<<"y="<<y.count_minus<<"\n";
}
